#ifndef LISTBOOK_L_H
#define LISTBOOK_L_H

#pragma once

#using <System.Runtime.Serialization.Formatters.Soap.dll>
#include "Librarian.h"
#include "AddBook.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Soap;



namespace library {

	/// <summary>
	/// Summary for Listbook_l
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Listbook_l : public System::Windows::Forms::Form
	{
		Librarian^ mylib1;	//for goying back to librarian form
		String  ^ strBook ,^strAuthor ,^strBarcode,^strStatus;	//string to store data from file
	public:
		Listbook_l(Librarian^ mylib)	//for going back to librarian form
		{
			InitializeComponent();
			mylib1=mylib;
		}
		Listbook_l()
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Listbook_l()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 








	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnDelBook;
	private: System::Windows::Forms::Button^  btnNewBook;
	private: System::Windows::Forms::ListView^  lvwBooks;
	private: System::Windows::Forms::ColumnHeader^  colBookT;
	private: System::Windows::Forms::ColumnHeader^  colAuthor;
	private: System::Windows::Forms::ColumnHeader^  colBarcode;
	private: System::Windows::Forms::ColumnHeader^  colStatus;

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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnDelBook = (gcnew System::Windows::Forms::Button());
			this->btnNewBook = (gcnew System::Windows::Forms::Button());
			this->lvwBooks = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colStatus = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 30);
			this->label1->TabIndex = 20;
			this->label1->Text = L"List of Books";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(608, 403);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 24;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Listbook_l::btnBack_Click);
			// 
			// btnDelBook
			// 
			this->btnDelBook->Location = System::Drawing::Point(575, 153);
			this->btnDelBook->Name = L"btnDelBook";
			this->btnDelBook->Size = System::Drawing::Size(108, 23);
			this->btnDelBook->TabIndex = 23;
			this->btnDelBook->Text = L"Delete Book";
			this->btnDelBook->UseVisualStyleBackColor = true;
			this->btnDelBook->Click += gcnew System::EventHandler(this, &Listbook_l::btnDelBook_Click);
			// 
			// btnNewBook
			// 
			this->btnNewBook->Location = System::Drawing::Point(575, 94);
			this->btnNewBook->Name = L"btnNewBook";
			this->btnNewBook->Size = System::Drawing::Size(108, 23);
			this->btnNewBook->TabIndex = 22;
			this->btnNewBook->Text = L"Add New Book";
			this->btnNewBook->UseVisualStyleBackColor = true;
			this->btnNewBook->Click += gcnew System::EventHandler(this, &Listbook_l::btnNewBook_Click);
			// 
			// lvwBooks
			// 
			this->lvwBooks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwBooks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->colBookT, this->colAuthor, 
				this->colBarcode, this->colStatus});
			this->lvwBooks->FullRowSelect = true;
			this->lvwBooks->GridLines = true;
			this->lvwBooks->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwBooks->Location = System::Drawing::Point(21, 74);
			this->lvwBooks->MultiSelect = false;
			this->lvwBooks->Name = L"lvwBooks";
			this->lvwBooks->Size = System::Drawing::Size(505, 356);
			this->lvwBooks->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwBooks->TabIndex = 21;
			this->lvwBooks->UseCompatibleStateImageBehavior = false;
			this->lvwBooks->View = System::Windows::Forms::View::Details;
			this->lvwBooks->SelectedIndexChanged += gcnew System::EventHandler(this, &Listbook_l::lvwBooks_SelectedIndexChanged);
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
			// colStatus
			// 
			this->colStatus->Text = L"Item Status";
			this->colStatus->Width = 80;
			// 
			// Listbook_l
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(735, 463);
			this->ControlBox = false;
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnDelBook);
			this->Controls->Add(this->btnNewBook);
			this->Controls->Add(this->lvwBooks);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Listbook_l";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"List of Books";
			this->Load += gcnew System::EventHandler(this, &Listbook_l::Listbook_l_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



	void ShowBooks(void)	//showing books in the listview
	{
		String ^ strFilename =L"files\\Books.txt";
		FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
		if(!fiBooks->Exists )	return;	//if file not exists
		StreamReader ^ strBooks = fiBooks->OpenText();
		lvwBooks->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strBooks->ReadLine()) // "Scan" the file, reading each line
				{
					strBook = strData;
					strAuthor = strBooks->ReadLine();
					strBarcode = strBooks->ReadLine();
					strStatus = strBooks->ReadLine();
					ListViewItem ^lviBook = gcnew ListViewItem(strBook);	//create item for listview
					lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviBook->SubItems->Add(strAuthor);
					lviBook->SubItems->Add(strBarcode);
			        lviBook->SubItems->Add(strStatus);
					if(strStatus=="Loaned"||strStatus=="Reserved")	//color loned or reserved books
		 			{
			 			lviBook->BackColor = Color::FromArgb(255, 155, 0);
			 			lviBook->ForeColor = Color::White;
		 			}
		 		    else	//color available books
		 			{
			 			lviBook->BackColor = Color::FromArgb(255, 215, 150);
			 			lviBook->ForeColor = Color::Blue;
		 			}
					lvwBooks->Items->Add(lviBook);	//add to listview
				 }
		}
		finally
		 {
			 strBooks->Close();
		 }
	}
			
#pragma endregion
	
private: System::Void Listbook_l_Load(System::Object^  sender, System::EventArgs^  e) {

			ShowBooks(); //show books

		 }
private: System::Void btnNewBook_Click(System::Object^  sender, System::EventArgs^  e) {

			 //add a new book
	AddBook ^dlgAddbook = gcnew AddBook;
	String ^ strFilename =L"files\\Books.txt";
	FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
	StreamWriter ^ stwBooks = nullptr;
	StreamReader ^ strBooks = nullptr;
	String ^strBarcode;
	String ^strData;
	bool found=false;
	 if( dlgAddbook->ShowDialog() == dlgAddbook->btnAdd->DialogResult)	
			 {//get info of the new book from librarian

				 if( dlgAddbook->txtBook->Text->Equals(L"")  )
					 {
					 MessageBox::Show(L"You must provide a Book Title  to add a new Book");
					 return;
					 }
				 if( dlgAddbook->txtBarcode->Text->Equals(L"")  )
					 {
					 MessageBox::Show(L"You must provide a Barcode number  to add a new Book");
					 return;
					 }
				 if( dlgAddbook->cboStatus->Text->Equals(L"")  )
					 {
					 MessageBox::Show(L"You must choose a status to add a new Book");
					 return;
					 }
				 if(fiBooks->Exists)
				 {
					 strBooks=fiBooks->OpenText();
					 try 
					 {

					 while(strData = strBooks->ReadLine()) // "Scan" the file, reading each line
						{
							   strBooks->ReadLine();
							   strBarcode=strBooks->ReadLine();
							 if(strBarcode==dlgAddbook->txtBarcode->Text) //found barcode
							   {
								found = true;
								MessageBox::Show(L"You must choose a unique barcode");
								return;
							   }
							 strBooks->ReadLine();
						}
					 }
					finally
					{
						strBooks->Close();
					}
					stwBooks = fiBooks->AppendText();
				 }
				else // If the file doesn't exists already, then we will create it
				{
					stwBooks = fiBooks->CreateText();
				}
	
					
				try 
				{
					stwBooks->WriteLine(dlgAddbook->txtBook->Text);
					stwBooks->WriteLine(dlgAddbook->txtAuthor->Text);
					stwBooks->WriteLine(dlgAddbook->txtBarcode->Text);
					stwBooks->WriteLine(dlgAddbook->cboStatus->Text);
				}
				finally
				{
					stwBooks->Close();
				}
				
				
				 ShowBooks();
	      }//end if

	 }
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();	//back button
			mylib1->Show();
			 
		 }
private: System::Void btnDelBook_Click(System::Object^  sender, System::EventArgs^  e) {
	//delete book

	bool loaned =false;
	String ^ strFilename =L"files\\Books.txt";
	
	String ^strTitle = L"0"; // This String variable will hold a the title
	String ^strAuthor = L"0";
	String ^strBarcode = L"0";
	String ^strStatus = L"0";
	FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
	
	StreamWriter ^ stwBooks = nullptr;
	StreamReader ^ strBooks = nullptr;

	if( this->lvwBooks->SelectedItems->Count == 0 ||
		 this->lvwBooks->SelectedItems->Count > 1 )
		 return;
		 ListViewItem ^lviBook = this->lvwBooks->SelectedItems->default[0];
	
		if(fiBooks->Exists)
		strBooks = fiBooks->OpenText();
		else
		{
			MessageBox::Show(L"books file does not exist,add books first");
			return;
		}

		String ^ strTempFile =L"files\\Tempbooks.txt";	//create a temp file to edit books file
		FileInfo ^ fitemp = gcnew FileInfo(strTempFile);
		StreamWriter ^stwTemp = nullptr;
		StreamReader ^ strTemp = nullptr;
		stwTemp = fitemp->CreateText();
		try {
		 
		   while(strTitle=strBooks->ReadLine()) // "Scan" the file, reading each line
			   {
					strAuthor = strBooks->ReadLine();
					strBarcode = strBooks->ReadLine();
					strStatus = strBooks->ReadLine();
			     if(strBarcode== lviBook->SubItems->default[2]->Text) //found barcode
				 {
					if(lviBook->SubItems->default[3]->Text=="Loaned")	//book already loaned
					{
						loaned=true;
						break;
					}
				}

				 else	//copy rest of books to temp file
					{
						stwTemp->WriteLine(strTitle);
						stwTemp->WriteLine(strAuthor);
						stwTemp->WriteLine(strBarcode);
						stwTemp->WriteLine(strStatus);
					}//else
				 }//while
			}//try

		finally
		 {
			 strBooks->Close();
			 stwTemp->Close();
			if(loaned==false)	//temp file contains all books exept of deleted book
				fitemp->CopyTo(strFilename,true);	//copy temp to book file
			fitemp->Delete();
		 }
		

		if(loaned==true)
		{
			MessageBox::Show(L"You can't delete a loaned book,mark it as returned first. in the previous menu,click \"list of loans/return a book\",then browse for it ");
		}
		ShowBooks();
	
	// }//end if


 }//end del
private: System::Void lvwBooks_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
#endif
