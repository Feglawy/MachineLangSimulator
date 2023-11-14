#pragma once
#include <bits/stdc++.h>
#include <msclr/marshal_cppstd.h>

using namespace std;

#define bit 1
#define HexDec 4 * bit


// memory class 
class Memory
{
    const int MemorySize = 256;
    vector<float> cells;

public:

    // constructor that sets all the memory cells by zero
    Memory() : cells(MemorySize, 0) {}

    // getter method that gets the value from the memory by address
    float read(int address);

    // setter method to set a value in the memmory at specified address 
    void write(int address, float value);

    // resets all of the memory cells to zero
    void resetMemory();
};


class Register
{
    float value;

public:
    // the constructor of the register class
    Register() : value(0) {}

    // setter method for the register
    void load(float val);

    // getter method for the register
    float store();
};

class MachineSimulator
{
    // sets how meny registers will be
    static const int registersCount = 16;

protected:
    Memory memory;
    Register registers[registersCount];
    Register counter;


public:
    MachineSimulator() {}

    // executes a single instruction
    void executeOp(int opcode, int operand);

    // executes multi instructions
    void executeSimulator();

    // runs instructions 
    void runInstructions(vector<int> instr);

    System::String^ getProgramCounter();

    System::String^ getRegisterNumber(int address);

    System::String^ getTheMemoryNumber(int address);

    // loads the instructions to memory
    void loadMemory(vector<int> instr);
    
    void ResetCounter();

    void ResetMemoryAndRegisters();

private:
    // for the floating point
    ref struct Number
    {
        bool sign;
        int exp;
        int mantissa;
    };

    // increments the counter by 2 for every step
    void incrementCounter();


    //_____________________________________________________________________
    // 1RXX sets the register R with the value of address xx in the memory
    void LoadRegisterFromMemory(int operand);
    // 2RXX sets the register R with the value XX
    void LoadRegisterByValue(int operand);
    // 3RXX stores the the value of Register R in the memory address xx
    void StoreTheBitPatternInMemory(int operand);
    // 40RS copy's the value of Register R to Register S
    void Move(int operand);
    // 5RST add's the Register S with Register T the the value will be at Register R
    void AddIntegers(int operand);
    // BRXY if the value of Register R is equals the value of Register 0 Jump to instruction XY
    void Jump(int operand);
    // C000 Halt the execution
    void Halt(int operand);

    string getTheHexDicemal(int hex);
};
