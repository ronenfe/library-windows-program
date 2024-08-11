#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace library {

	/// <summary>
	/// Summary for LoanBook_r
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class LoanBook_r : public System::Windows::Forms::Form
	{	
	public:
		int loandays;
		LoanBook_r(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoanBook_r()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  btnCancel;
	protected: 

	protected: 

	public: 
	public: System::Windows::Forms::TextBox^  txtNumLoan;
	public: System::Windows::Forms::Button^  btnLoanB;
	private: 
			

	public: 


	private: 

	public: 

	private: 

	public: 

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::DateTimePicker^  DTP2;
	private: 

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::TextBox^  txtEDate;
	private: 
	public: System::Windows::Forms::TextBox^  txtSDate;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: 


	private: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoanBook_r::typeid));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->txtNumLoan = (gcnew System::Windows::Forms::TextBox());
			this->btnLoanB = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DTP2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtEDate = (gcnew System::Windows::Forms::TextBox());
			this->txtSDate = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(549, 390);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// txtNumLoan
			// 
			this->txtNumLoan->Location = System::Drawing::Point(435, 160);
			this->txtNumLoan->Name = L"txtNumLoan";
			this->txtNumLoan->ReadOnly = true;
			this->txtNumLoan->Size = System::Drawing::Size(63, 20);
			this->txtNumLoan->TabIndex = 69;
			// 
			// btnLoanB
			// 
			this->btnLoanB->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnLoanB->Location = System::Drawing::Point(463, 390);
			this->btnLoanB->Name = L"btnLoanB";
			this->btnLoanB->Size = System::Drawing::Size(75, 23);
			this->btnLoanB->TabIndex = 8;
			this->btnLoanB->Text = L"Loan";
			this->btnLoanB->UseVisualStyleBackColor = true;
			this->btnLoanB->Click += gcnew System::EventHandler(this, &LoanBook_r::btnLoanB_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtNumLoan);
			this->groupBox2->Controls->Add(this->DTP2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtEDate);
			this->groupBox2->Controls->Add(this->txtSDate);
			this->groupBox2->Location = System::Drawing::Point(41, 187);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(583, 197);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Loan Evaluation";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(315, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 13);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Number Day\'s of Loan:";
			// 
			// DTP2
			// 
			this->DTP2->Location = System::Drawing::Point(18, 98);
			this->DTP2->Name = L"DTP2";
			this->DTP2->Size = System::Drawing::Size(200, 20);
			this->DTP2->TabIndex = 68;
			this->DTP2->Value = System::DateTime(2007, 7, 14, 0, 0, 0, 0);
			this->DTP2->ValueChanged += gcnew System::EventHandler(this, &LoanBook_r::DTP2_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(281, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 67;
			this->label6->Text = L"End Date:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 66;
			this->label5->Text = L"Start Date:";
			// 
			// txtEDate
			// 
			this->txtEDate->Location = System::Drawing::Point(347, 98);
			this->txtEDate->Name = L"txtEDate";
			this->txtEDate->ReadOnly = true;
			this->txtEDate->Size = System::Drawing::Size(151, 20);
			this->txtEDate->TabIndex = 65;
			// 
			// txtSDate
			// 
			this->txtSDate->Location = System::Drawing::Point(347, 32);
			this->txtSDate->Name = L"txtSDate";
			this->txtSDate->ReadOnly = true;
			this->txtSDate->Size = System::Drawing::Size(151, 20);
			this->txtSDate->TabIndex = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label1->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Location = System::Drawing::Point(37, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Enter the return date of the book as you wish.\r\n\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label2->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Location = System::Drawing::Point(37, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 40);
			this->label2->TabIndex = 11;
			this->label2->Text = L"IMPORTANT :\r\n\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &LoanBook_r::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label3->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(37, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(470, 100);
			this->label3->TabIndex = 12;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// LoanBook_r
			// 
			this->AcceptButton = this->btnLoanB;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(664, 433);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLoanB);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoanBook_r";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loan Book";
			this->Load += gcnew System::EventHandler(this, &LoanBook_r::LoanBook_r_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoanBook_r_Load(System::Object^  sender, System::EventArgs^  e) {

				 DTP2->Value =DateTime::Now.Date.AddDays(7);
				
			 }

private: System::Void DTP2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			DateTime SDate=DateTime::Now.Date;
			txtSDate->Text=SDate.ToShortDateString();
			DateTime EDate = this->DTP2->Value;
			txtEDate->Text=EDate.ToShortDateString();
			loandays =EDate.Subtract(SDate).Days;
			txtNumLoan->Text = loandays.ToString();
	
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void btnLoanB_Click(System::Object^  sender, System::EventArgs^  e) {

			 


		 }
};
}
