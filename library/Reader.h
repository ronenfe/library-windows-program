#ifndef READER_H
#define READER_H

#include "View_loan_r.h"
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
	/// Summary for Reader
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Reader : public System::Windows::Forms::Form
	{
		Login^ mylog1;	//for back option
		void showSearch();	//show search window
		
	public:

		Reader(Login^ mylog)	//for back option
		{
			InitializeComponent();
			mylog1=mylog;

		}
		
		private: void showHistUser();	//show user list
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reader()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reader::typeid));
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
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button5->Location = System::Drawing::Point(514, 410);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 32);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Reader::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label3->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(65, 403);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(419, 39);
			this->label3->TabIndex = 35;
			this->label3->Text = L" - Always exit the program by Logout button\r\n - DO NOT forget to check the date o" 
				L"f loan\r\n - For any Help or question contact TR Inc by phone : 972-03-12345678 ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Location = System::Drawing::Point(12, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 21);
			this->label2->TabIndex = 34;
			this->label2->Text = L"TIPS:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(497, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 163);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button3->Location = System::Drawing::Point(41, 94);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(264, 30);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Search And Loan a Book";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Reader::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->button1->Location = System::Drawing::Point(41, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 30);
			this->button1->TabIndex = 30;
			this->button1->Text = L"View Loans \r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Reader::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 35);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Your Library Card";
			// 
			// btnHist
			// 
			this->btnHist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(177)));
			this->btnHist->Location = System::Drawing::Point(41, 256);
			this->btnHist->Name = L"btnHist";
			this->btnHist->Size = System::Drawing::Size(264, 30);
			this->btnHist->TabIndex = 37;
			this->btnHist->Text = L"Show History of my Loan\r\n";
			this->btnHist->UseVisualStyleBackColor = true;
			this->btnHist->Click += gcnew System::EventHandler(this, &Reader::btnHist_Click);
			// 
			// Reader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(644, 454);
			this->ControlBox = false;
			this->Controls->Add(this->btnHist);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Reader";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reader Card";
			this->Load += gcnew System::EventHandler(this, &Reader::Reader_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				//show search window
				Hide();
				showSearch();
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//show user loans
				Hide();
				View_loan_r ^ dlgmyloans = gcnew View_loan_r;
				dlgmyloans->ShowDialog();
				Show();
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //logout
			 String ^ strFilename1 =L"files\\tmpid.txt";
			FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
			fi1->Delete();
			   Close();
			   mylog1->Show();
		 }
private: System::Void Reader_Load(System::Object^  sender, System::EventArgs^  e) {

			 //get the user id for the file to show his name at the top
				String ^ strFilename1 =L"files\\tmpid.txt";
				FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
				StreamReader ^ strUser1 = fi1->OpenText();
				String ^strUserId,^strUserFirst,^strUserLast;
				strUserId = strUser1->ReadLine();
				strUserFirst = strUser1->ReadLine();
				strUserLast = strUser1->ReadLine();
				strUser1->Close();
				label1->Text=L"Reader card of "+strUserFirst+L" "+strUserLast;
		 }
private: System::Void btnHist_Click(System::Object^  sender, System::EventArgs^  e) {

			 showHistUser();	//show user list
		 }
};
}
#endif
