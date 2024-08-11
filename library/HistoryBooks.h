#ifndef HISTORYBOOKS_H
#define HISTORYBOOKS_H

#pragma once


#include "Librarian.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace library {

	/// <summary>
	/// Summary for HistoryBooks
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class HistoryBooks : public System::Windows::Forms::Form
	{
		Librarian^ mylib1;	//this is so we can go back to librarian form
		String  ^ strBook ,^strAuthor ,^strBarcode,^strId ,^strSDate;
	public:
		HistoryBooks(Librarian^ mylib)
		{
			InitializeComponent();
			mylib1=mylib;
		}

		HistoryBooks()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HistoryBooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::ListView^  lvwHistory;
	protected: 

	private: System::Windows::Forms::ColumnHeader^  colBookT;
	private: System::Windows::Forms::ColumnHeader^  colAuthor;
	private: System::Windows::Forms::ColumnHeader^  colBarcode;
	private: System::Windows::Forms::ColumnHeader^  colId;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  colSDate;

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
			this->lvwHistory = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colId = (gcnew System::Windows::Forms::ColumnHeader());
			this->colSDate = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(603, 441);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 27;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &HistoryBooks::btnBack_Click);
			// 
			// lvwHistory
			// 
			this->lvwHistory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwHistory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->colBookT, this->colAuthor, 
				this->colBarcode, this->colId, this->colSDate});
			this->lvwHistory->FullRowSelect = true;
			this->lvwHistory->GridLines = true;
			this->lvwHistory->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwHistory->Location = System::Drawing::Point(12, 62);
			this->lvwHistory->MultiSelect = false;
			this->lvwHistory->Name = L"lvwHistory";
			this->lvwHistory->Size = System::Drawing::Size(644, 351);
			this->lvwHistory->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwHistory->TabIndex = 26;
			this->lvwHistory->UseCompatibleStateImageBehavior = false;
			this->lvwHistory->View = System::Windows::Forms::View::Details;
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
			// colId
			// 
			this->colId->DisplayIndex = 4;
			this->colId->Text = L"User ID";
			this->colId->Width = 100;
			// 
			// colSDate
			// 
			this->colSDate->DisplayIndex = 3;
			this->colSDate->Text = L"Date of Loan";
			this->colSDate->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 10);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 30);
			this->label1->TabIndex = 25;
			this->label1->Text = L"History of Loans Books";
			// 
			// HistoryBooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(690, 476);
			this->ControlBox = false;
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->lvwHistory);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"HistoryBooks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"History Books";
			this->Load += gcnew System::EventHandler(this, &HistoryBooks::HistoryBooks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}




		void ShowHistory(void)	//showing history of loanes books in the listview
	{
		String ^ strFilename =L"files\\History.txt";
		FileInfo ^ fiHist = gcnew FileInfo(strFilename);
		if(!fiHist->Exists )	return;	//if file not exists
		StreamReader ^ strHist = fiHist->OpenText();
		lvwHistory->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strHist->ReadLine()) // "Scan" the file, reading each line
				{
					strBook = strData;
					strAuthor = strHist->ReadLine();
					strBarcode = strHist->ReadLine();
					strId = strHist->ReadLine();
					strSDate = strHist->ReadLine();
					ListViewItem ^lviBook = gcnew ListViewItem(strBook);	//create item for listview
					lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviBook->SubItems->Add(strAuthor);
					lviBook->SubItems->Add(strBarcode);
					lviBook->SubItems->Add(strSDate);
					lviBook->SubItems->Add(strId);
					lvwHistory->Items->Add(lviBook);	//add to listview
				 }
		}
		finally
		 {
			 strHist->Close();
		 }
	}









#pragma endregion
	private: System::Void HistoryBooks_Load(System::Object^  sender, System::EventArgs^  e) {

				 ShowHistory();
			 }
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();
			 mylib1->Show();

		 }
};
}

#endif