#ifndef HISTORYUSER_H
#define HISTORYUSER_H

#pragma once

#include "Reader.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace library {

	/// <summary>
	/// Summary for HistoryUser
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class HistoryUser : public System::Windows::Forms::Form
	{
		Reader^ mylib1;	//this is so we can go back to librarian form
		String  ^ strBook ,^strAuthor ,^strBarcode,^strSDate,^strId;
	public:
		HistoryUser(Reader^ mylib)
		{
			InitializeComponent();
			mylib1=mylib;
		}
		HistoryUser()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HistoryUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::ListView^  lvwHistoryUser;
	protected: 

	private: System::Windows::Forms::ColumnHeader^  colBookT;
	private: System::Windows::Forms::ColumnHeader^  colAuthor;
	private: System::Windows::Forms::ColumnHeader^  colBarcode;
	private: System::Windows::Forms::ColumnHeader^  colSDate;
	private: System::Windows::Forms::Label^  label1;

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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->lvwHistoryUser = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colSDate = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(560, 424);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 30;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &HistoryUser::btnBack_Click);
			// 
			// lvwHistoryUser
			// 
			this->lvwHistoryUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwHistoryUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->colBookT, this->colAuthor, 
				this->colBarcode, this->colSDate});
			this->lvwHistoryUser->FullRowSelect = true;
			this->lvwHistoryUser->GridLines = true;
			this->lvwHistoryUser->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwHistoryUser->Location = System::Drawing::Point(29, 55);
			this->lvwHistoryUser->MultiSelect = false;
			this->lvwHistoryUser->Name = L"lvwHistoryUser";
			this->lvwHistoryUser->Size = System::Drawing::Size(544, 345);
			this->lvwHistoryUser->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwHistoryUser->TabIndex = 29;
			this->lvwHistoryUser->UseCompatibleStateImageBehavior = false;
			this->lvwHistoryUser->View = System::Windows::Forms::View::Details;
			// 
			// colBookT
			// 
			this->colBookT->Text = L"Book Title";
			this->colBookT->Width = 220;
			// 
			// colAuthor
			// 
			this->colAuthor->Text = L"Author";
			this->colAuthor->Width = 100;
			// 
			// colBarcode
			// 
			this->colBarcode->Text = L"Barcode No.";
			this->colBarcode->Width = 100;
			// 
			// colSDate
			// 
			this->colSDate->Text = L"Date of Loan";
			this->colSDate->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 10);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 30);
			this->label1->TabIndex = 28;
			this->label1->Text = L"History of User Loans Books";
			// 
			// HistoryUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(649, 459);
			this->ControlBox = false;
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->lvwHistoryUser);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"HistoryUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"History User";
			this->Load += gcnew System::EventHandler(this, &HistoryUser::HistoryUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		

void ShowHistoryUser(void)	//showing history of loanes books in the listview
	{
		//get the user id for the file
		String ^ strFilename1 =L"files\\tmpid.txt";
		FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
		StreamReader ^ strUser1 = fi1->OpenText();
		String ^strUserId;//,^strUserFirst,^strUserLast;
		strUserId = strUser1->ReadLine();
		//strUserFirst = strUser1->ReadLine();
		//strUserLast = strUser1->ReadLine();
		

		String ^ strFilename =L"files\\History.txt";
		FileInfo ^ fiHist = gcnew FileInfo(strFilename);
		if(!fiHist->Exists )	return;	//if file not exists
		StreamReader ^ strHist = fiHist->OpenText();
		lvwHistoryUser->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strHist->ReadLine()) // "Scan" the file, reading each line
				{
					strBook = strData;
					strAuthor = strHist->ReadLine();
					strBarcode = strHist->ReadLine();
					strId = strHist->ReadLine();
					strSDate = strHist->ReadLine();

					if(strUserId==strSDate)
					{
					ListViewItem ^lviBook = gcnew ListViewItem(strBook);	//create item for listview
					lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviBook->SubItems->Add(strAuthor);
					lviBook->SubItems->Add(strBarcode);
					lviBook->SubItems->Add(strId);
					lvwHistoryUser->Items->Add(lviBook);	//add to listview
					}
				 }
		}
		finally
		 {
			 strHist->Close();
			 strUser1->Close();
		 }
	}




#pragma endregion
	private: System::Void HistoryUser_Load(System::Object^  sender, System::EventArgs^  e) {

			 ShowHistoryUser();
			 }
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

			Close();
			mylib1->Show();
		 }
};
}

#endif
