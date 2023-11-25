#include "pch.h"
#include "MachineSimulator.h"


float Memory::read(int address)
{
    return Memory::cells[address];
}

void Memory::write(int address, float value)
{
    Memory::cells[address] = value;
}

void Memory::resetMemory()
{
    vector<float>::iterator i;
    for (i = Memory::cells.begin(); i < Memory::cells.end(); i++)
    {
        *i = 0;
    }
}

void Register::load(float val)
{
    this->value = val;
}

float Register::store()
{
    return Register::value;
}

// _______________________________________________________

void MachineSimulator::incrementCounter()
{
    counter.load(counter.store() + 2);
}

void MachineSimulator::loadMemory(vector<int> instr)
{
    unsigned char memAddress = 0;

    for (int i = 0; i < instr.size(); i++)
    {
        int op1 = (instr[i] & 0xFF00) >> 2 * HexDec; // 8;
        int op2 = (instr[i] & 0x00FF);

        MachineSimulator::memory.write(memAddress, op1);
        memAddress++;
        MachineSimulator::memory.write(memAddress, op2);
        memAddress++;
    }
}

void MachineSimulator::ResetCounter()
{
    Register Reseted = Register();
    MachineSimulator::counter = Reseted;
}

void MachineSimulator::ResetMemoryAndRegisters()
{
    memory.resetMemory();
    this->ResetCounter();
    for (int i = 0; i < registersCount; i++) {
        Register Reseted = Register();
        registers[i] = Reseted;
    }
    output = "";
    IR = "0";
}

void MachineSimulator::executeOp(int opcode, int operand)
{
    switch (opcode)
    {
    case 0x1:
        MachineSimulator::LoadRegisterFromMemory(operand);
        break;
    case 0x2:
        MachineSimulator::LoadRegisterByValue(operand);
        break;
    case 0x3:
        MachineSimulator::StoreTheBitPatternInMemory(operand);
        break;
    case 0x4:
        MachineSimulator::Move(operand);
        break;
    case 0x5:
        MachineSimulator::AddIntegers(operand);
        break;
    case 0xB:
        MachineSimulator::Jump(operand);
        break;
    case 0xC:
        MachineSimulator::Halt(operand);
        break;

    default:
        throw runtime_error("invalid type op 0x" + MachineSimulator::getTheHexDicemal(opcode));
        break;
    }
}

void MachineSimulator::executeSimulator()
{
    while (memory.read(MachineSimulator::counter.store()) != 0xC0 && MachineSimulator::counter.store() < 255)
    {
        MachineSimulator::executeNext();
    }

    if (memory.read(MachineSimulator::counter.store()) == 0xC0) {
        MachineSimulator::executeNext();
    }
}

void MachineSimulator::executeNext()
{
    int part1Address = MachineSimulator::counter.store();
    int part2Address = MachineSimulator::counter.store() + 1;

    int part1 = MachineSimulator::memory.read(part1Address);
    int part2 = MachineSimulator::memory.read(part2Address);

    IR = MachineSimulator::getTheHexDicemal(part1) + MachineSimulator::getTheHexDicemal(part2);
    IR = (IR.size() == 3) ? IR + "0" : IR;

    int op = (part1 & 0xF0) >> HexDec;
    int operand = ((part1 & 0x0F) << 2 * HexDec) + part2;
    if (op == 0) {
        throw runtime_error("invalid type op 0x" + MachineSimulator::getTheHexDicemal(op));
    }
    MachineSimulator::executeOp(op, operand);
}

void MachineSimulator::runInstructions(vector<int> instr)
{
    MachineSimulator::loadMemory(instr);
    MachineSimulator::executeSimulator();
}

System::String^ MachineSimulator::getProgramCounter()
{
    string PC = getTheHexDicemal(counter.store());
    return msclr::interop::marshal_as<System::String^>(PC);
}

System::String^ MachineSimulator::getRegisterNumber(int address)
{
    string RegisterValue = getTheHexDicemal(registers[address].store());
    return msclr::interop::marshal_as<System::String^>(RegisterValue);
}

System::String^ MachineSimulator::getTheMemoryNumber(int address)
{
    string memoryValue = getTheHexDicemal(memory.read(address));
    return msclr::interop::marshal_as<System::String^>(memoryValue);
}

void MachineSimulator::LoadRegisterFromMemory(int operand)
{
    int R = (operand & 0xF00) >> 2 * HexDec; // shifts to the right 8 bits
    int xy = (operand & 0xFF);

    float addressValue = MachineSimulator::memory.read(xy);
    registers[R].load(addressValue);
    MachineSimulator::incrementCounter();
}

void MachineSimulator::LoadRegisterByValue(int operand)
{
    int R = (operand & 0xF00) >> 2 * HexDec; // shifts to the right 8 bits
    int xy = (operand & 0xFF);

    MachineSimulator::registers[R].load(xy);
    MachineSimulator::incrementCounter();
}

void MachineSimulator::StoreTheBitPatternInMemory(int operand)
{
    int R = (operand & 0xF00) >> 2 * HexDec; // shifts to the right 8 bits
    int xy = (operand & 0xFF);

    MachineSimulator::memory.write(xy, MachineSimulator::registers[R].store());

    if (xy == 0)
    {
        output += MachineSimulator::getTheHexDicemal(registers[R].store()) + "\r\n";
    }
    MachineSimulator::incrementCounter();
}

void MachineSimulator::Move(int operand)
{
    int R = (operand & 0xF0) >> HexDec; // shifts to the right 4 bits
    int S = (operand & 0x0F);

    MachineSimulator::registers[S].load(MachineSimulator::registers[R].store());
    MachineSimulator::incrementCounter();
}

void MachineSimulator::AddIntegers(int operand)
{
    int R = (operand & 0xF00) >> 2 * HexDec; // shifts to the right 8 bits
    int S = (operand & 0x0F0) >> HexDec;     // shifts to the right 4 bits
    int T = (operand & 0x00F);

    float sum = MachineSimulator::registers[S].store() + MachineSimulator::registers[T].store();
    MachineSimulator::registers[R].load(sum);
    MachineSimulator::incrementCounter();
}

void MachineSimulator::Jump(int operand)
{
    int R = (operand & 0xF00) >> 8;
    int xy = (operand & 0x0FF);

    if (MachineSimulator::registers[R].store() == MachineSimulator::registers[0].store())
    {
        MachineSimulator::counter.load(xy);
    }
}

void MachineSimulator::Halt(int operand)
{
    cout << "Machine Halted" << endl;
    // MachineSimulator::incrementCounter();
    // exit(EXIT_SUCCESS);
}

string MachineSimulator::getTheHexDicemal(int _hex)
{
    stringstream stream;
    stream << hex << uppercase << _hex;
    string Hex = stream.str();
    return Hex;
}

