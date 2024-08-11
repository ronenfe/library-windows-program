#ifndef LIST_LOAN_L_H
#define LIST_LOAN_L_H

#include "UserBooks.h"


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
	/// Summary for List_loan_l
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class List_loan_l : public System::Windows::Forms::Form
	{
		String  ^ strFirstName ,^strLastName ,^strId,^strPassword;
	public:
		List_loan_l(void)
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
		~List_loan_l()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  lvwListLoan;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;



	private: System::Windows::Forms::Label^  label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lvwListLoan = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 30);
			this->label1->TabIndex = 18;
			this->label1->Text = L"List of Loans\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(609, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &List_loan_l::button1_Click);
			// 
			// lvwListLoan
			// 
			this->lvwListLoan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwListLoan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, 
				this->columnHeader2, this->columnHeader3});
			this->lvwListLoan->FullRowSelect = true;
			this->lvwListLoan->GridLines = true;
			this->lvwListLoan->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwListLoan->Location = System::Drawing::Point(30, 53);
			this->lvwListLoan->MultiSelect = false;
			this->lvwListLoan->Name = L"lvwListLoan";
			this->lvwListLoan->Size = System::Drawing::Size(429, 333);
			this->lvwListLoan->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwListLoan->TabIndex = 22;
			this->lvwListLoan->UseCompatibleStateImageBehavior = false;
			this->lvwListLoan->View = System::Windows::Forms::View::Details;
			this->lvwListLoan->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &List_loan_l::lvwListLoan_MouseDoubleClick);
			this->lvwListLoan->SelectedIndexChanged += gcnew System::EventHandler(this, &List_loan_l::lvwListLoan_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 84;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"First Name";
			this->columnHeader2->Width = 150;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Last Name";
			this->columnHeader3->Width = 187;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(16, 405);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(566, 40);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Double click on the user give you a list of loan books of the user.\r\nAlso you hav" 
				L"e the option to change the status of the user loan books.\r\n";
			// 
			// List_loan_l
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(696, 477);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lvwListLoan);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"List_loan_l";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"List of Loan";
			this->Load += gcnew System::EventHandler(this, &List_loan_l::List_loan_l_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}




			
	void ShowListLoan(void)
	{//show list of users who have books
		String ^ strFilename =L"files\\Loans.txt";
		FileInfo ^ fiLoans = gcnew FileInfo(strFilename);
		StreamReader ^ strLoans = fiLoans->OpenText();
		lvwListLoan->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strLoans->ReadLine()) // "Scan" the file, reading each line
				{
					strId = strData;
					strFirstName= strLoans->ReadLine();
					strLastName  = strLoans->ReadLine();
					ListViewItem ^lviLoan = gcnew ListViewItem(strId);
					lviLoan->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviLoan->SubItems->Add(strFirstName);
			        lviLoan->SubItems->Add(strLastName);
					lviLoan->BackColor = Color::FromArgb(255, 215, 150);
			 		lviLoan->ForeColor = Color::Blue;
					lvwListLoan->Items->Add(lviLoan);
				 }
		}
		finally
		 {
			 strLoans->Close();
		 }
	}




#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();	//back button
			 }
	private: System::Void List_loan_l_Load(System::Object^  sender, System::EventArgs^  e) {

				ShowListLoan();	//show list of users who have books
			 }
private: System::Void lvwListLoan_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//when a user is double clicked

			 if( this->lvwListLoan->SelectedItems->Count == 0 ||
				 this->lvwListLoan->SelectedItems->Count > 1 )
				 return;
				 ListViewItem ^lviListLoan = this->lvwListLoan->SelectedItems->default[0]; //get item from list
				 String^ usrID;
				 usrID = lviListLoan->Text; //get chosen id
				 UserBooks ^dlgUserBooks = gcnew UserBooks;
				 
					
					//create a file for saving the id for further uses
					String ^ idFile ="files\\loantmpid.txt";
					FileInfo ^ file = gcnew FileInfo(idFile);
					StreamWriter ^ stw = nullptr;
					stw = file->CreateText();
					stw->WriteLine(usrID);
					stw->Close();

					dlgUserBooks->ShowDialog();
					ShowListLoan();


	
		 }//end duoble click
private: System::Void lvwListLoan_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
#endif
