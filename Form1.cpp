#include "pch.h"
#include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::LoadDataButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateMemoryAndRegisters();
}

System::Void CppCLRWinFormsProject::Form1::RunButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::SingelStepButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
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
	for (int i = 0; i < 16; i++) {
		RegistersValueList[i]->Text = machine->getRegisterNumber(i);
	}
	
}