#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace library {

	/// <summary>
	/// Summary for AddUser
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
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
	public: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  label4;
	public: 
	public: System::Windows::Forms::TextBox^  txtId;
	private: 
	private: System::Windows::Forms::Label^  label3;
	public: 
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  txtLastName;
	private: 
	public: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
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
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(440, 264);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(95, 23);
			this->btnCancel->TabIndex = 44;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnAdd->Location = System::Drawing::Point(313, 264);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(96, 23);
			this->btnAdd->TabIndex = 43;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(384, 184);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(151, 20);
			this->txtPassword->TabIndex = 42;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(322, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Password:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(127, 181);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(141, 20);
			this->txtId->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(91, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(317, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Last Name:";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(384, 113);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(151, 20);
			this->txtLastName->TabIndex = 37;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(127, 113);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(141, 20);
			this->txtFirstName->TabIndex = 36;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &AddUser::txtFirstName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 35;
			this->label1->Text = L"First Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(303, 30);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Add  a New User to Library";
			// 
			// AddUser
			// 
			this->AcceptButton = this->btnAdd;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(580, 344);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddUser";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add New User";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtFirstName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
