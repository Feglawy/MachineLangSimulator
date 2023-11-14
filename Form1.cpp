#include "pch.h"
#include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::LoadDataButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	vector <int> instructions = Form1::GetInstructions();
	machine->loadMemory(instructions);
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::RunButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	// in the end (implemnt the RunButton Then Update mempory and registers)
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::SingelStepButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::ResetButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::HaltButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
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
	Form1::GetPC();
	for (int i = 0; i < 16; i++) {
		RegistersValueList[i]->Text = machine->getRegisterNumber(i);
	}
	MemoryDataGrid->Rows->Clear();
	for (int i = 0; i < 256; i++) {
		MemoryDataGrid->Rows->Add(makeHex(i), machine->getTheMemoryNumber(i));
	}

}

void CppCLRWinFormsProject::Form1::GetPC() {
	PCBOX->Text = machine->getProgramCounter();
}

void CppCLRWinFormsProject::Form1::GetIR() 
{

}

System::String^ makeSysString(string NormalString) {
	return msclr::interop::marshal_as<System::String^>(NormalString);
}

System::String^ CppCLRWinFormsProject::Form1::makeHex(int number) {
	stringstream stream;
	stream << hex << uppercase << number;
	string Hex = stream.str();

	return makeSysString(Hex);
}

vector<int> CppCLRWinFormsProject::Form1::GetInstructions() {
	vector<int> Instructions;
	string Instruction = msclr::interop::marshal_as<std::string>(InstructionsBox->Text);
	stringstream ss(Instruction);

	while (ss >> Instruction) {
		Instructions.push_back(stoi(Instruction, nullptr, 16));
	}
	return Instructions;
}
