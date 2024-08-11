#ifndef SEARCH_R_H
#define SEARCH_R_H
#include "Reader.h"

#pragma once

#include "LoanBook_r.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;



namespace library {

	/// <summary>
	/// Summary for Search_r
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Search_r : public System::Windows::Forms::Form
	{
			Reader^ myread1;
		String  ^ strBook ,^strAuthor ,^strBarcode,^strStatus;

	private: System::Windows::Forms::TextBox^  txtMessages;






	public:
		Search_r(Reader^ myread)
		{
			InitializeComponent();
			myread1=myread;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Search_r()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;

	protected: 

	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  btnSearch;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::ListView^  lvwSearch;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->lvwSearch = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colStatus = (gcnew System::Windows::Forms::ColumnHeader());
			this->txtMessages = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label5->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label5->Location = System::Drawing::Point(28, 507);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 20);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Messages:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(636, 578);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 26);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Search_r::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(27, 381);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(438, 40);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Double click the book you wish to loan.\r\nFollow the messages at the Messages Wind" 
				L"ow below.\r\n";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(456, 129);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(97, 26);
			this->btnSearch->TabIndex = 34;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Search_r::btnSearch_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 30);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Search And Loan a Book\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label2->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Location = System::Drawing::Point(28, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 20);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Result of Search:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label1->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Location = System::Drawing::Point(27, 52);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(460, 60);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Enter the exact name of the book you are looking for \r\nand press Search button.\r\n" 
				L"If you leave it blank ,you will see all the  books in the list.";
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(31, 133);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(384, 20);
			this->txtSearch->TabIndex = 41;
			// 
			// lvwSearch
			// 
			this->lvwSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwSearch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->colBookT, this->colAuthor, 
				this->colBarcode, this->colStatus});
			this->lvwSearch->FullRowSelect = true;
			this->lvwSearch->GridLines = true;
			this->lvwSearch->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwSearch->Location = System::Drawing::Point(31, 216);
			this->lvwSearch->MultiSelect = false;
			this->lvwSearch->Name = L"lvwSearch";
			this->lvwSearch->Size = System::Drawing::Size(505, 150);
			this->lvwSearch->TabIndex = 42;
			this->lvwSearch->UseCompatibleStateImageBehavior = false;
			this->lvwSearch->View = System::Windows::Forms::View::Details;
			this->lvwSearch->DoubleClick += gcnew System::EventHandler(this, &Search_r::lvwSearch_DoubleClick);
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
			// txtMessages
			// 
			this->txtMessages->Location = System::Drawing::Point(31, 530);
			this->txtMessages->Multiline = true;
			this->txtMessages->Name = L"txtMessages";
			this->txtMessages->ReadOnly = true;
			this->txtMessages->Size = System::Drawing::Size(384, 89);
			this->txtMessages->TabIndex = 44;
			// 
			// Search_r
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(757, 631);
			this->ControlBox = false;
			this->Controls->Add(this->txtMessages);
			this->Controls->Add(this->lvwSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Search_r";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search_r::Search_r_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void ShowBooks(void)
	{
		String ^ strFilename =L"files\\Books.txt";
		FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
		if(!fiBooks->Exists )	return;
		StreamReader ^ strBooks = fiBooks->OpenText();
		lvwSearch->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strBooks->ReadLine()) // "Scan" the file, reading each line
				{
					strBook = strData;
					strAuthor = strBooks->ReadLine();
					strBarcode = strBooks->ReadLine();
					strStatus = strBooks->ReadLine();
					ListViewItem ^lviBook = gcnew ListViewItem(strBook);
					lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviBook->SubItems->Add(strAuthor);
					lviBook->SubItems->Add(strBarcode);
			        lviBook->SubItems->Add(strStatus);
					if(strStatus=="Loaned"||strStatus=="Reserved")
		 			{
			 			lviBook->BackColor = Color::FromArgb(255, 155, 0);
			 			lviBook->ForeColor = Color::White;
		 			}
		 		    else
		 			{
			 			lviBook->BackColor = Color::FromArgb(255, 215, 150);
			 			lviBook->ForeColor = Color::Blue;
		 			}
					lvwSearch->Items->Add(lviBook);
				 }
		}
		finally
		 {
			 strBooks->Close();
		 }
		}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 //Loan Button
				Hide();
				LoanBook_r ^myLoanBook_r = gcnew LoanBook_r;
				myLoanBook_r->MdiParent=this->ParentForm;
				myLoanBook_r->Show();
			 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Back button
			 Close();
			 myread1->Show();
			 
			
			

		 }
private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) 
{
	bool found = false;
	String ^ strFilename =L"files\\Books.txt";
	
	String ^ strBook;
	String ^ strAuthor;
	String ^ strBarcode;
	String ^ strStatus;
	FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
	
	StreamReader ^ strBooks = nullptr;

	lvwSearch->Items->Clear();  //clear the list view	
	if(txtSearch->Text==L"")
	{
		ShowBooks();
	}
	else
	{
		StreamReader ^ strBooks = fiBooks->OpenText();
	try 
	{
		while(strBook = strBooks->ReadLine()) // "Scan" the file, reading each line
		{
			if(strBook==txtSearch->Text) //found Title
			{
				found = true;
				strAuthor=strBooks->ReadLine();
				strBarcode=strBooks->ReadLine();
				strStatus=strBooks->ReadLine();
				ListViewItem ^lviBook = gcnew ListViewItem(strBook);
				lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
				lviBook->SubItems->Add(strAuthor);
				lviBook->SubItems->Add(strBarcode);
				lviBook->SubItems->Add(strStatus);
				lvwSearch->Items->Add(lviBook);
				if(strStatus=="Loaned"||strStatus=="Reserved")
	 			{
		 			lviBook->BackColor = Color::FromArgb(255, 155, 0);
		 			lviBook->ForeColor = Color::White;
	 			}
	 		    else
	 			{
		 			lviBook->BackColor = Color::FromArgb(255, 215, 150);
		 			lviBook->ForeColor = Color::Blue;
	 			}
				txtMessages->Text = L"";
			}
			else
			{
				strBooks->ReadLine();
				strBooks->ReadLine();
				strBooks->ReadLine();
			}
		}
	}
	finally
	{
		strBooks->Close();
	}
		if(found==false)
		{
			txtMessages->Text = L"Try another Book or ask\n the Librarian for the exact name";
			MessageBox::Show(L"No Book with that Title was found");
		}
	}
					
}//end button search
private: System::Void lvwSearch_DoubleClick(System::Object^  sender, System::EventArgs^  e)
{
  //double click on mouse at list view to loan a book
	String ^ strTempFile =L"files\\Tempbooks.txt";
	String^ loanedauthor,^loanedbarcode,^loanedtitle,^loanedstatus;
	FileInfo ^ fitemp = gcnew FileInfo(strTempFile);
	StreamWriter ^stwTemp = nullptr;
	StreamReader ^ strTemp = nullptr;
	bool userhadbooks=false;
	
			 //for the selected item in the list view
	if( this->lvwSearch->SelectedItems->Count == 0 ||
	 this->lvwSearch->SelectedItems->Count > 1 )
	return;
	ListViewItem ^lviBook = this->lvwSearch->SelectedItems->default[0];
			 
			
	if(lviBook->SubItems->default[3]->Text==L"Loaned") 
			txtMessages->Text = L"The Book has already been loaned\n Try another day or another book";
	else if(lviBook->SubItems->default[3]->Text==L"Reserved") 
			txtMessages->Text = L"The Book is reserved and can't be loaned\n Try another book";
	else
	{
		txtMessages->Text = L"";
		LoanBook_r ^dlgLoan = gcnew LoanBook_r;
		if( dlgLoan->ShowDialog() == dlgLoan->btnLoanB->DialogResult)
		{
			if (0<(dlgLoan->loandays)&&(dlgLoan->loandays)<8)
			{
				//get the user id for the file
				String ^ strFilename1 =L"files\\tmpid.txt";
				FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
				StreamReader ^ strUser1 = fi1->OpenText();
				String ^strUserId,^strUserFirst,^strUserLast;
				strUserId = strUser1->ReadLine();
				strUserFirst = strUser1->ReadLine();
				strUserLast = strUser1->ReadLine();
				strUser1->Close();
				//open the user file
				String ^ strFile ="files\\users\\"+strUserId+L".txt";
				FileInfo ^ fi = gcnew FileInfo(strFile);
				StreamWriter ^ stwUsers= nullptr;
				String ^ strLoanFile ="files\\Loans.txt";
				FileInfo ^ filoans = gcnew FileInfo(strLoanFile);
				StreamWriter ^ stwLoans = nullptr;
				//history file
				String ^ strHistFile ="files\\History.txt";
				FileInfo ^ fihist = gcnew FileInfo(strHistFile);
				StreamWriter ^ stwhist = nullptr;
				if( !fi->Exists )
				{
					stwUsers = fi->CreateText();
				}
				else // If the file exists already, then we will only add to it
				{
					stwUsers= fi->AppendText();
					userhadbooks=true;

				}
				if( !filoans->Exists )
				{
					stwLoans = filoans->CreateText();
				}
				else // If the file exists already, then we will only add to it
				{
					stwLoans= filoans->AppendText();
				}

				if( !fihist->Exists )
				{
					stwhist = fihist->CreateText();
				}
				else // If the file exists already, then we will only add to it
				{
					stwhist= fihist->AppendText();
				}

				//get the details of the loaned book and put it on id file
				String ^tmpBook ,^tmpAuthor,^tmpBarcode;
				tmpBook = lviBook->Text; 
				tmpAuthor = lviBook->SubItems->default[1]->Text;
				tmpBarcode = lviBook->SubItems->default[2]->Text;
				stwUsers->WriteLine(tmpBook);
				stwhist->WriteLine(tmpBook);
				stwUsers->WriteLine(tmpAuthor);
				stwhist->WriteLine(tmpAuthor);
				stwUsers->WriteLine(tmpBarcode);
				stwhist->WriteLine(tmpBarcode);
				stwUsers->WriteLine(dlgLoan->txtSDate->Text); //date for taking the book
				stwhist->WriteLine(dlgLoan->txtSDate->Text); //date for taking the book
				stwUsers->WriteLine(dlgLoan->txtEDate->Text); //date for returning the book
				stwhist->WriteLine(strUserId);
				if(userhadbooks==false)
				{
					stwLoans->WriteLine(strUserId);
					stwLoans->WriteLine(strUserFirst);
					stwLoans->WriteLine(strUserLast);
				}
				stwUsers->Close();
				stwLoans->Close();
				stwhist->Close();
				txtMessages->Text = L"The Loan Has been Successful, Be Aware to the returning Date!!!";
				//CHANGE status of the book open the file search book by title ,change status and rewrite
				String ^ strFilename2 =L"files\\Books.txt";
				FileInfo ^ fiBooks2 = gcnew FileInfo(strFilename2);
				StreamReader ^ strBooks2 = fiBooks2->OpenText();
				stwTemp = fitemp->CreateText();
				// create a list of users from the file
				try
				{
					
					
					while(loanedtitle = strBooks2->ReadLine()) // "Scan" the file, reading each line
					{
						loanedauthor = strBooks2->ReadLine();
						loanedbarcode = strBooks2->ReadLine();
						loanedstatus = strBooks2->ReadLine();
						if(loanedbarcode==tmpBarcode) //found the right book
						{
							stwTemp->WriteLine(loanedtitle);
							stwTemp->WriteLine(loanedauthor);
							stwTemp->WriteLine(loanedbarcode);
							stwTemp->WriteLine("Loaned");
						}
					
						else
						{
							stwTemp->WriteLine(loanedtitle);
							stwTemp->WriteLine(loanedauthor);
							stwTemp->WriteLine(loanedbarcode);
							stwTemp->WriteLine(loanedstatus);
						}//else
					}//while
				}//try
				finally
				{
					 strBooks2->Close();
					 stwTemp->Close();

				}
				fitemp->CopyTo(strFilename2,true);
				fitemp->Delete();
				lvwSearch->Items->Clear();
				ListViewItem ^lviBook = gcnew ListViewItem(tmpBook);
				lviBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
				lviBook->BackColor = Color::FromArgb(255, 155, 0);
			 	lviBook->ForeColor = Color::White;
				lviBook->SubItems->Add(tmpAuthor);
				lviBook->SubItems->Add(tmpBarcode);
			    lviBook->SubItems->Add("Loaned");
				lvwSearch->Items->Add(lviBook);


					
									
				}//if
				else
				{
					txtMessages->Text = L"The Loan is Not Succeeded You Have to Choose loan time Less Then 7 Days and greater than 0 days!!!";
					MessageBox::Show(L"Your loan is over 7 days or less than 1 day\n you can't loan this book for this period ");
							 //break;
				}//else
							    
			}//if







		}//else

	}//end double click

private: System::Void Search_r_Load(System::Object^  sender, System::EventArgs^  e) {
			
		 }
};


}
#endif





