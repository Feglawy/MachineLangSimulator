#include "pch.h"
#include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < 16; i++) {
		RegistersValueList[i]->Text = machine->getRegisterNumber(i);
	}
	MemoryDataGrid->Rows->Clear();
	for (int i = 0; i < 256; i++) {
		MemoryDataGrid->Rows->Add(makeHex(i), machine->getTheMemoryNumber(i));
	}
	outputBox->Text = makeSysString(machine->output);
	Form1::GetPC();
	Form1::GetIR();
}

System::Void CppCLRWinFormsProject::Form1::LoadDataButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	vector <int> instructionsVector = Form1::GetInstructions();
	instructions = &instructionsVector;
	machine->ResetMemoryAndRegisters();
	machine->loadMemory(*instructions);
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::RunButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		machine->executeSimulator();
	}
	catch (...){
		MessageBox::Show("There might be something wrong please check your instructions are valid or not", "Something went wrong", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::SingelStepButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		machine->executeNext();
	}
	catch (...) {
		MessageBox::Show("There might be something wrong please check your instructions are valid or not", "Something went wrong", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::ResetButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	machine->ResetMemoryAndRegisters();
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::HaltButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	machine->executeOp(0xC, 000);
}



// gets a list of textboxes of the Registers
void CppCLRWinFormsProject::Form1::InitializeRegList()
{
	RegistersValueList = gcnew List<System::Windows::Forms::TextBox^>();
	RegistersValueList->Add(R0ValueBox);
	RegistersValueList->Add(R1ValueBox);
	RegistersValueList->Add(R2ValueBox);
	RegistersValueList->Add(R3ValueBox);
	RegistersValueList->Add(R4ValueBox);
	RegistersValueList->Add(R5ValueBox);
	RegistersValueList->Add(R6ValueBox);
	RegistersValueList->Add(R7ValueBox);
	RegistersValueList->Add(R8ValueBox);
	RegistersValueList->Add(R9ValueBox);
	RegistersValueList->Add(RAValueBox);
	RegistersValueList->Add(RBValueBox);
	RegistersValueList->Add(RCValueBox);
	RegistersValueList->Add(RDValueBox);
	RegistersValueList->Add(REValueBox);
	RegistersValueList->Add(RFValueBox);
}


void CppCLRWinFormsProject::Form1::UpdateMemoryAndRegisters() {
	for (int i = 0; i < 16; i++) {
		RegistersValueList[i]->Text = machine->getRegisterNumber(i);
	}
	
	for (int i = machine->counter.store(); i < 256; i++) {
		MemoryDataGrid->Rows[i]->Cells[0]->Value = makeHex(i);
		MemoryDataGrid->Rows[i]->Cells[1]->Value = machine->getTheMemoryNumber(i);
	}
	outputBox->Text = makeSysString(machine->output);
	Form1::GetPC();
	Form1::GetIR();
}

void CppCLRWinFormsProject::Form1::GetPC() {
	PCBOX->Text = machine->getProgramCounter();
	SelectCurrentInstructionRow(machine->counter.store());
}

void CppCLRWinFormsProject::Form1::GetIR() 
{
	System::String^ IR = makeSysString(machine->IR);
	IRBOX->Text = IR;
}

// converts from string to system::string 
System::String^ CppCLRWinFormsProject::Form1::makeSysString(string NormalString) {
	return msclr::interop::marshal_as<System::String^>(NormalString);
}

// converts decimal integers to hexadicimal 
System::String^ CppCLRWinFormsProject::Form1::makeHex(int number) {
	stringstream stream;
	stream << hex << uppercase << number;
	string Hex = stream.str();

	return makeSysString(Hex);
}


// reads the instructions from the inputBox 
vector<int> CppCLRWinFormsProject::Form1::GetInstructions() {
	vector<int> Instructions;
	string Instruction = msclr::interop::marshal_as<std::string>(InstructionsBox->Text);
	stringstream ss(Instruction);

	while (ss >> Instruction) {
		Instructions.push_back(stoi(Instruction, nullptr, 16));
	}
	return Instructions;
}

void CppCLRWinFormsProject::Form1::SelectCurrentInstructionRow(int index) {

	MemoryDataGrid->ClearSelection();
	MemoryDataGrid->Rows[index]->Selected = true;
	
}
