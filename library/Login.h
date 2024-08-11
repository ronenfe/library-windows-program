#ifndef LOGIN_H
#define LOGIN_H
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace library {

	/// <summary>
	/// Summary for Login
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:  String ^ strUserId, ^ strUserPassword,^ strUserFirst ,^ strUserLast;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::Windows::Forms::Label^  label4;
	public: 
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		private: void showReader();	//function to show reader form
		private: void showLibrarian();//function to show librarian form
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox2;
	private: 

	private: System::Windows::Forms::Button^  button5;
			 //private: void showReader();
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(191, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 35);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Library Login Page";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->label2->Location = System::Drawing::Point(137, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->label1->Location = System::Drawing::Point(131, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID Number:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button1->Location = System::Drawing::Point(234, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 20);
			this->textBox2->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button5->Location = System::Drawing::Point(502, 299);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 32);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Login::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(467, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(12, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(357, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Ask the librarian how to get an access to the Library program ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-1, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 67);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 43;
			this->pictureBox2->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(593, 343);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String ^ strFilename = L"files\\Users.txt";
    FileInfo ^ fiUsers = gcnew FileInfo(strFilename);
	if (textBox2->Text=="admin"&&textBox3->Text=="123456")		//if person is admin
	{
		Hide();
		textBox2->Text  = L"";
		textBox3->Text  = L"";
		showLibrarian();
	}
	
	else 		//if user file exists
	{
		if(!fiUsers->Exists)
		{
			StreamWriter ^ stwUsers = nullptr;
			stwUsers = fiUsers->CreateText();
			stwUsers->Close();
		}

		 if( textBox2->Text == L"" )		//if input blank
			 MessageBox::Show(L"You must enter id number.");
		 else	//if input not blank
		 {
			StreamReader ^ strUsers = fiUsers->OpenText();	//open user files
			bool found = false;

			try 
			{
				 while(strUserId = strUsers->ReadLine() )		//scan file ,search for match
				 {
					 strUserPassword  = strUsers->ReadLine();		
	  				  if( strUserId ==  textBox2->Text&&strUserPassword==textBox3->Text )
					 {
						found = true;	//if there is a match
						strUserFirst=strUsers->ReadLine();
						strUserLast=strUsers->ReadLine();
						
						
						//create a file for saving the user details for further uses
						String ^ idFile ="files\\tmpid.txt";
						FileInfo ^ file = gcnew FileInfo(idFile);
						StreamWriter ^ stw = nullptr;
						stw = file->CreateText();
						stw->WriteLine(strUserId);
						stw->WriteLine(strUserFirst);
						stw->WriteLine(strUserLast);
						stw->Close();

						break;	
					 }
						 
				
					strUsers->ReadLine();
					strUsers->ReadLine();
				 }

			 // When the application has finished checking the file
			 // if there was no user with that number, 
			 // let the user know
				 if( found == false )
					MessageBox::Show(L"No user with that password was found");
			}
			finally
			{
				strUsers->Close();
			}
			if (found== true)	//clear boxes
			{
				Hide();
				textBox2->Text  = L"";
				textBox3->Text  = L"";
				showReader();	//go to reader form
			}
		}
		
	}
				
 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			    Application::Exit();	//exit button
		 }
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
			 if(!Directory::Exists("files"))	//create directories for files
				 Directory::CreateDirectory("files");
			 if(!Directory::Exists("files\\users"))
				 Directory::CreateDirectory("files\\users");
	
		 }
};
}
#endif

