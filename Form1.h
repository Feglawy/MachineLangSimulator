#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
    using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
            InitializeRegList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label6;
    protected:
    private: System::Windows::Forms::TextBox^ outputBox;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ HaltButton;
    private: System::Windows::Forms::Button^ SingelStepButton;
    private: System::Windows::Forms::Button^ RunButton;
    private: System::Windows::Forms::Button^ ResetButton;
    private: System::Windows::Forms::TextBox^ PCBOX;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ LoadDataButton;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::DataGridView^ MemoryDataGrid;

    private: System::Windows::Forms::DataGridViewTextBoxColumn^ MemoryColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ValueColumn;
    private: System::Windows::Forms::TextBox^ IRBOX;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ RFValueBox;
    private: System::Windows::Forms::TextBox^ REValueBox;
    private: System::Windows::Forms::TextBox^ RDValueBox;
    private: System::Windows::Forms::TextBox^ RCValueBox;
    private: System::Windows::Forms::TextBox^ RBValueBox;
    private: System::Windows::Forms::TextBox^ RAValueBox;
    private: System::Windows::Forms::TextBox^ R9ValueBox;
    private: System::Windows::Forms::TextBox^ R8ValueBox;
    private: System::Windows::Forms::TextBox^ R7ValueBox;
    private: System::Windows::Forms::TextBox^ R6ValueBox;
    private: System::Windows::Forms::TextBox^ R5ValueBox;
    private: System::Windows::Forms::TextBox^ R4ValueBox;
    private: System::Windows::Forms::TextBox^ R3ValueBox;
    private: System::Windows::Forms::TextBox^ R2ValueBox;
    private: System::Windows::Forms::TextBox^ R1ValueBox;
    private: System::Windows::Forms::TextBox^ R0ValueBox;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ InstructionsBox;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->outputBox = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->HaltButton = (gcnew System::Windows::Forms::Button());
            this->SingelStepButton = (gcnew System::Windows::Forms::Button());
            this->RunButton = (gcnew System::Windows::Forms::Button());
            this->ResetButton = (gcnew System::Windows::Forms::Button());
            this->PCBOX = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->LoadDataButton = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->MemoryDataGrid = (gcnew System::Windows::Forms::DataGridView());
            this->MemoryColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ValueColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->IRBOX = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->RFValueBox = (gcnew System::Windows::Forms::TextBox());
            this->REValueBox = (gcnew System::Windows::Forms::TextBox());
            this->RDValueBox = (gcnew System::Windows::Forms::TextBox());
            this->RCValueBox = (gcnew System::Windows::Forms::TextBox());
            this->RBValueBox = (gcnew System::Windows::Forms::TextBox());
            this->RAValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R9ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R8ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R7ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R6ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R5ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R4ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R3ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R2ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R1ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->R0ValueBox = (gcnew System::Windows::Forms::TextBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->InstructionsBox = (gcnew System::Windows::Forms::TextBox());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemoryDataGrid))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(4, 274);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(105, 37);
            this->label6->TabIndex = 33;
            this->label6->Text = L"output";
            // 
            // outputBox
            // 
            this->outputBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->outputBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->outputBox->Location = System::Drawing::Point(11, 314);
            this->outputBox->Multiline = true;
            this->outputBox->Name = L"outputBox";
            this->outputBox->ReadOnly = true;
            this->outputBox->Size = System::Drawing::Size(284, 85);
            this->outputBox->TabIndex = 32;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(872, 8);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(71, 37);
            this->label5->TabIndex = 30;
            this->label5->Text = L"Memory";
            // 
            // HaltButton
            // 
            this->HaltButton->Location = System::Drawing::Point(323, 607);
            this->HaltButton->Name = L"HaltButton";
            this->HaltButton->Size = System::Drawing::Size(236, 68);
            this->HaltButton->TabIndex = 29;
            this->HaltButton->Text = L"Halt";
            this->HaltButton->UseVisualStyleBackColor = true;
            this->HaltButton->Click += gcnew System::EventHandler(this, &Form1::HaltButton_Click);
            // 
            // SingelStepButton
            // 
            this->SingelStepButton->Location = System::Drawing::Point(323, 450);
            this->SingelStepButton->Name = L"SingelStepButton";
            this->SingelStepButton->Size = System::Drawing::Size(236, 68);
            this->SingelStepButton->TabIndex = 28;
            this->SingelStepButton->Text = L"Single step";
            this->SingelStepButton->UseVisualStyleBackColor = true;
            this->SingelStepButton->Click += gcnew System::EventHandler(this, &Form1::SingelStepButton_Click);
            // 
            // RunButton
            // 
            this->RunButton->Location = System::Drawing::Point(323, 366);
            this->RunButton->Name = L"RunButton";
            this->RunButton->Size = System::Drawing::Size(236, 68);
            this->RunButton->TabIndex = 27;
            this->RunButton->Text = L"Run";
            this->RunButton->UseVisualStyleBackColor = true;
            this->RunButton->Click += gcnew System::EventHandler(this, &Form1::RunButton_Click);
            // 
            // RunButton
            // 
            this->ResetButton->Location = System::Drawing::Point(323, 529);
            this->ResetButton->Name = L"ResetButton";
            this->ResetButton->Size = System::Drawing::Size(236, 68);
            this->ResetButton->TabIndex = 27;
            this->ResetButton->Text = L"Reset memory and registers";
            this->ResetButton->UseVisualStyleBackColor = true;
            this->ResetButton->Click += gcnew System::EventHandler(this, &Form1::ResetButton_Click);
            // 
            // PCBOX
            // 
            this->PCBOX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PCBOX->Location = System::Drawing::Point(595, 143);
            this->PCBOX->Name = L"PCBOX";
            this->PCBOX->ReadOnly = true;
            this->PCBOX->Size = System::Drawing::Size(100, 39);
            this->PCBOX->TabIndex = 21;
            this->PCBOX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(515, 145);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(51, 37);
            this->label2->TabIndex = 19;
            this->label2->Text = L"PC";
            // 
            // LoadDataButton
            // 
            this->LoadDataButton->Location = System::Drawing::Point(323, 286);
            this->LoadDataButton->Name = L"LoadDataButton";
            this->LoadDataButton->Size = System::Drawing::Size(236, 68);
            this->LoadDataButton->TabIndex = 26;
            this->LoadDataButton->Text = L"Load data";
            this->LoadDataButton->UseVisualStyleBackColor = true;
            this->LoadDataButton->Click += gcnew System::EventHandler(this, &Form1::LoadDataButton_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(515, 193);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(44, 37);
            this->label3->TabIndex = 20;
            this->label3->Text = L"IR";
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->MemoryDataGrid);
            this->panel2->Location = System::Drawing::Point(875, 48);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(239, 720);
            this->panel2->TabIndex = 25;
            // 
            // MemoryDataGrid
            // 
            this->MemoryDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
            this->MemoryDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->MemoryDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->MemoryColumn,
                    this->ValueColumn
            });
            this->MemoryDataGrid->Location = System::Drawing::Point(4, 1);
            this->MemoryDataGrid->Name = L"MemoryDataGrid";
            this->MemoryDataGrid->Size = System::Drawing::Size(235, 716);
            this->MemoryDataGrid->TabIndex = 0;
            // 
            // MemoryColumn
            // 
            this->MemoryColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->MemoryColumn->HeaderText = L"Memory #";
            this->MemoryColumn->Name = L"MemoryColumn";
            this->MemoryColumn->ReadOnly = true;
            // 
            // ValueColumn
            // 
            this->ValueColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->ValueColumn->HeaderText = L"Value";
            this->ValueColumn->Name = L"ValueColumn";
            this->ValueColumn->ReadOnly = true;
            // 
            // IRBOX
            // 
            this->IRBOX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->IRBOX->Location = System::Drawing::Point(595, 194);
            this->IRBOX->Name = L"IRBOX";
            this->IRBOX->ReadOnly = true;
            this->IRBOX->Size = System::Drawing::Size(100, 39);
            this->IRBOX->TabIndex = 22;
            this->IRBOX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->RFValueBox);
            this->panel1->Controls->Add(this->REValueBox);
            this->panel1->Controls->Add(this->RDValueBox);
            this->panel1->Controls->Add(this->RCValueBox);
            this->panel1->Controls->Add(this->RBValueBox);
            this->panel1->Controls->Add(this->RAValueBox);
            this->panel1->Controls->Add(this->R9ValueBox);
            this->panel1->Controls->Add(this->R8ValueBox);
            this->panel1->Controls->Add(this->R7ValueBox);
            this->panel1->Controls->Add(this->R6ValueBox);
            this->panel1->Controls->Add(this->R5ValueBox);
            this->panel1->Controls->Add(this->R4ValueBox);
            this->panel1->Controls->Add(this->R3ValueBox);
            this->panel1->Controls->Add(this->R2ValueBox);
            this->panel1->Controls->Add(this->R1ValueBox);
            this->panel1->Controls->Add(this->R0ValueBox);
            this->panel1->Controls->Add(this->label22);
            this->panel1->Controls->Add(this->label21);
            this->panel1->Controls->Add(this->label20);
            this->panel1->Controls->Add(this->label19);
            this->panel1->Controls->Add(this->label18);
            this->panel1->Controls->Add(this->label17);
            this->panel1->Controls->Add(this->label16);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->label11);
            this->panel1->Controls->Add(this->label10);
            this->panel1->Controls->Add(this->label9);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Location = System::Drawing::Point(704, 49);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(158, 510);
            this->panel1->TabIndex = 24;
            // 
            // RFValueBox
            // 
            this->RFValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RFValueBox->Location = System::Drawing::Point(55, 469);
            this->RFValueBox->Name = L"RFValueBox";
            this->RFValueBox->ReadOnly = true;
            this->RFValueBox->Size = System::Drawing::Size(100, 25);
            this->RFValueBox->TabIndex = 35;
            this->RFValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // REValueBox
            // 
            this->REValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->REValueBox->Location = System::Drawing::Point(55, 439);
            this->REValueBox->Name = L"REValueBox";
            this->REValueBox->ReadOnly = true;
            this->REValueBox->Size = System::Drawing::Size(100, 25);
            this->REValueBox->TabIndex = 34;
            this->REValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // RDValueBox
            // 
            this->RDValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RDValueBox->Location = System::Drawing::Point(55, 410);
            this->RDValueBox->Name = L"RDValueBox";
            this->RDValueBox->ReadOnly = true;
            this->RDValueBox->Size = System::Drawing::Size(100, 25);
            this->RDValueBox->TabIndex = 33;
            this->RDValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // RCValueBox
            // 
            this->RCValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RCValueBox->Location = System::Drawing::Point(55, 379);
            this->RCValueBox->Name = L"RCValueBox";
            this->RCValueBox->ReadOnly = true;
            this->RCValueBox->Size = System::Drawing::Size(100, 25);
            this->RCValueBox->TabIndex = 32;
            this->RCValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // RBValueBox
            // 
            this->RBValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RBValueBox->Location = System::Drawing::Point(55, 347);
            this->RBValueBox->Name = L"RBValueBox";
            this->RBValueBox->ReadOnly = true;
            this->RBValueBox->Size = System::Drawing::Size(100, 25);
            this->RBValueBox->TabIndex = 31;
            this->RBValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // RAValueBox
            // 
            this->RAValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RAValueBox->Location = System::Drawing::Point(55, 317);
            this->RAValueBox->Name = L"RAValueBox";
            this->RAValueBox->ReadOnly = true;
            this->RAValueBox->Size = System::Drawing::Size(100, 25);
            this->RAValueBox->TabIndex = 30;
            this->RAValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R9ValueBox
            // 
            this->R9ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R9ValueBox->Location = System::Drawing::Point(55, 287);
            this->R9ValueBox->Name = L"R9ValueBox";
            this->R9ValueBox->ReadOnly = true;
            this->R9ValueBox->Size = System::Drawing::Size(100, 25);
            this->R9ValueBox->TabIndex = 29;
            this->R9ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R8ValueBox
            // 
            this->R8ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R8ValueBox->Location = System::Drawing::Point(55, 254);
            this->R8ValueBox->Name = L"R8ValueBox";
            this->R8ValueBox->ReadOnly = true;
            this->R8ValueBox->Size = System::Drawing::Size(100, 25);
            this->R8ValueBox->TabIndex = 28;
            this->R8ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R7ValueBox
            // 
            this->R7ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R7ValueBox->Location = System::Drawing::Point(55, 224);
            this->R7ValueBox->Name = L"R7ValueBox";
            this->R7ValueBox->ReadOnly = true;
            this->R7ValueBox->Size = System::Drawing::Size(100, 25);
            this->R7ValueBox->TabIndex = 27;
            this->R7ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R6ValueBox
            // 
            this->R6ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R6ValueBox->Location = System::Drawing::Point(55, 194);
            this->R6ValueBox->Name = L"R6ValueBox";
            this->R6ValueBox->ReadOnly = true;
            this->R6ValueBox->Size = System::Drawing::Size(100, 25);
            this->R6ValueBox->TabIndex = 26;
            this->R6ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R5ValueBox
            // 
            this->R5ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R5ValueBox->Location = System::Drawing::Point(55, 164);
            this->R5ValueBox->Name = L"R5ValueBox";
            this->R5ValueBox->ReadOnly = true;
            this->R5ValueBox->Size = System::Drawing::Size(100, 25);
            this->R5ValueBox->TabIndex = 25;
            this->R5ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R4ValueBox
            // 
            this->R4ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R4ValueBox->Location = System::Drawing::Point(55, 134);
            this->R4ValueBox->Name = L"R4ValueBox";
            this->R4ValueBox->ReadOnly = true;
            this->R4ValueBox->Size = System::Drawing::Size(100, 25);
            this->R4ValueBox->TabIndex = 24;
            this->R4ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R3ValueBox
            // 
            this->R3ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R3ValueBox->Location = System::Drawing::Point(55, 104);
            this->R3ValueBox->Name = L"R3ValueBox";
            this->R3ValueBox->ReadOnly = true;
            this->R3ValueBox->Size = System::Drawing::Size(100, 25);
            this->R3ValueBox->TabIndex = 23;
            this->R3ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R2ValueBox
            // 
            this->R2ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R2ValueBox->Location = System::Drawing::Point(55, 74);
            this->R2ValueBox->Name = L"R2ValueBox";
            this->R2ValueBox->ReadOnly = true;
            this->R2ValueBox->Size = System::Drawing::Size(100, 25);
            this->R2ValueBox->TabIndex = 22;
            this->R2ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R1ValueBox
            // 
            this->R1ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R1ValueBox->Location = System::Drawing::Point(55, 46);
            this->R1ValueBox->Name = L"R1ValueBox";
            this->R1ValueBox->ReadOnly = true;
            this->R1ValueBox->Size = System::Drawing::Size(100, 25);
            this->R1ValueBox->TabIndex = 21;
            this->R1ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // R0ValueBox
            // 
            this->R0ValueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->R0ValueBox->Location = System::Drawing::Point(55, 14);
            this->R0ValueBox->Name = L"R0ValueBox";
            this->R0ValueBox->ReadOnly = true;
            this->R0ValueBox->Size = System::Drawing::Size(100, 25);
            this->R0ValueBox->TabIndex = 19;
            this->R0ValueBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(13, 462);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(38, 30);
            this->label22->TabIndex = 18;
            this->label22->Text = L"RF";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(13, 432);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(38, 30);
            this->label21->TabIndex = 17;
            this->label21->Text = L"RE";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(13, 402);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(42, 30);
            this->label20->TabIndex = 16;
            this->label20->Text = L"RD";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(13, 372);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(40, 30);
            this->label19->TabIndex = 15;
            this->label19->Text = L"RC";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(13, 342);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(40, 30);
            this->label18->TabIndex = 14;
            this->label18->Text = L"RB";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(13, 312);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(42, 30);
            this->label17->TabIndex = 13;
            this->label17->Text = L"RA";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(13, 282);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(39, 30);
            this->label16->TabIndex = 12;
            this->label16->Text = L"R9";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(13, 249);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(39, 30);
            this->label15->TabIndex = 11;
            this->label15->Text = L"R8";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(13, 219);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(39, 30);
            this->label14->TabIndex = 10;
            this->label14->Text = L"R7";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(13, 189);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(39, 30);
            this->label13->TabIndex = 9;
            this->label13->Text = L"R6";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(13, 159);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(39, 30);
            this->label12->TabIndex = 8;
            this->label12->Text = L"R5";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(13, 129);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(39, 30);
            this->label11->TabIndex = 7;
            this->label11->Text = L"R4";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(13, 99);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(39, 30);
            this->label10->TabIndex = 6;
            this->label10->Text = L"R3";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(13, 69);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(39, 30);
            this->label9->TabIndex = 5;
            this->label9->Text = L"R2";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(13, 39);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(39, 30);
            this->label8->TabIndex = 4;
            this->label8->Text = L"R1";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(13, 9);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(39, 30);
            this->label7->TabIndex = 3;
            this->label7->Text = L"R0";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(697, 9);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(71, 37);
            this->label4->TabIndex = 23;
            this->label4->Text = L"CPU";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(4, 8);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(245, 37);
            this->label1->TabIndex = 18;
            this->label1->Text = L"Instructions Input";
            // 
            // InstructionsBox
            // 
            this->InstructionsBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->InstructionsBox->Location = System::Drawing::Point(11, 48);
            this->InstructionsBox->Multiline = true;
            this->InstructionsBox->Name = L"InstructionsBox";
            this->InstructionsBox->Size = System::Drawing::Size(498, 200);
            this->InstructionsBox->TabIndex = 17;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1144, 782);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->outputBox);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->HaltButton);
            this->Controls->Add(this->SingelStepButton);
            this->Controls->Add(this->ResetButton);
            this->Controls->Add(this->RunButton);
            this->Controls->Add(this->PCBOX);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->LoadDataButton);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->IRBOX);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->InstructionsBox);
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Machine Simulator";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemoryDataGrid))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private:
    MachineSimulator* machine = new MachineSimulator();
    List<System::Windows::Forms::TextBox^>^ RegistersValueList;
    vector <int>* instructions;

    System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
    System::Void LoadDataButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void RunButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void SingelStepButton_Click(System::Object^ sender, System::EventArgs^ e);
    System::Void HaltButton_Click(System::Object^ sender, System::EventArgs^ e);
    
    System::String^ makeHex(int number);


    vector<int> GetInstructions();
    void SelectCurrentInstructionRow(int index);
    void GetPC();
    void GetIR();
    void InitializeRegList();
    void UpdateMemoryAndRegisters();
    System::String^ makeSysString(string NormalString);
};
}
