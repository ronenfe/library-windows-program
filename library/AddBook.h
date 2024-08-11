#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace library {

	/// <summary>
	/// Summary for AddBook
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
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
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCancel;
	protected: 
	public: System::Windows::Forms::Button^  btnAdd;
	private: 


	public: 
	public: System::Windows::Forms::TextBox^  txtBarcode;
	private: 
	private: System::Windows::Forms::Label^  label3;
	public: 
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  txtAuthor;
	private: 
	public: System::Windows::Forms::TextBox^  txtBook;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::ComboBox^  cboStatus;
	private: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	public: 

	private: 

	private: 
	public: 

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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtBarcode = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtBook = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cboStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(422, 265);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(95, 23);
			this->btnCancel->TabIndex = 54;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddBook::btnCancel_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnAdd->Location = System::Drawing::Point(295, 265);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(96, 23);
			this->btnAdd->TabIndex = 53;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddBook::btnAdd_Click);
			// 
			// txtBarcode
			// 
			this->txtBarcode->Location = System::Drawing::Point(109, 166);
			this->txtBarcode->Name = L"txtBarcode";
			this->txtBarcode->Size = System::Drawing::Size(141, 20);
			this->txtBarcode->TabIndex = 50;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Barcode No:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(319, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Author:";
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(366, 98);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(151, 20);
			this->txtAuthor->TabIndex = 47;
			// 
			// txtBook
			// 
			this->txtBook->Location = System::Drawing::Point(109, 98);
			this->txtBook->Name = L"txtBook";
			this->txtBook->Size = System::Drawing::Size(141, 20);
			this->txtBook->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Book Title:";
			// 
			// cboStatus
			// 
			this->cboStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboStatus->FormattingEnabled = true;
			this->cboStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Available", L"Reserved"});
			this->cboStatus->Location = System::Drawing::Point(366, 167);
			this->cboStatus->Name = L"cboStatus";
			this->cboStatus->Size = System::Drawing::Size(151, 21);
			this->cboStatus->TabIndex = 55;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(297, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Item Status:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(293, 30);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Add a New Book to Library";
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(548, 319);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cboStatus);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtBarcode);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtBook);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddBook";
			this->ShowInTaskbar = false;
			this->Text = L"Add New Book";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void cboStatus_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
