#ifndef LIBRARIAN_H
#define LIBRARIAN_H
//#include "Listbook_l.h"
#include "List_loan_l.h"
#include "Login.h"

#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace library {

	/// <summary>
	/// Summary for Librarian
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Librarian : public System::Windows::Forms::Form
	{
		Login^ mylog1;	//this is to allow back option
	public:
		Librarian(Login^ mylog)
		{
			InitializeComponent();
			mylog1=mylog;
		}
	private: void showListbook();	//show book list
	private: void showListuser();	//show user list
    private: void showHistBooks();	//show user list

			  
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Librarian()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnHist;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Librarian::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnHist = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button6->Location = System::Drawing::Point(18, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(236, 30);
			this->button6->TabIndex = 29;
			this->button6->Text = L"List of Users / Add or Del User";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Librarian::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button5->Location = System::Drawing::Point(507, 392);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 32);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Librarian::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label3->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(68, 392);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(253, 26);
			this->label3->TabIndex = 27;
			this->label3->Text = L" - Always exit the program by Logout button\r\n - You should come to shift on time";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Location = System::Drawing::Point(14, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 21);
			this->label2->TabIndex = 26;
			this->label2->Text = L"TIPS:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(449, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 151);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button3->Location = System::Drawing::Point(18, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 30);
			this->button3->TabIndex = 24;
			this->button3->Text = L"List of Loans/Return a Book";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Librarian::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button1->Location = System::Drawing::Point(18, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 30);
			this->button1->TabIndex = 22;
			this->button1->Text = L"List of Books / Add or Del Book\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Librarian::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 35);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Librarian Card\r\n";
			// 
			// btnHist
			// 
			this->btnHist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->btnHist->Location = System::Drawing::Point(18, 324);
			this->btnHist->Name = L"btnHist";
			this->btnHist->Size = System::Drawing::Size(236, 30);
			this->btnHist->TabIndex = 30;
			this->btnHist->Text = L"History Loaned Books";
			this->btnHist->UseVisualStyleBackColor = true;
			this->btnHist->Click += gcnew System::EventHandler(this, &Librarian::btnHist_Click);
			// 
			// Librarian
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(598, 436);
			this->ControlBox = false;
			this->Controls->Add(this->btnHist);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Librarian";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Librarian";
			this->Load += gcnew System::EventHandler(this, &Librarian::Librarian_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				Close();	//back button
			    mylog1->Show();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			showListbook(); //show list of books
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ strFilename =L"files\\Loans.txt";	//show loans form
			FileInfo ^ fiLoans = gcnew FileInfo(strFilename);
			if(!fiLoans->Exists )
			{
				MessageBox::Show(L"Loans file does not exist");
				return;
			}
			List_loan_l ^dlgListloan = gcnew List_loan_l;
			Hide();
			dlgListloan->ShowDialog();
			Show();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			
			showListuser();	//show user list
		 }

private: System::Void Librarian_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnHist_Click(System::Object^  sender, System::EventArgs^  e) {

		   showHistBooks();	//show user list

		 }
};
}

#endif

