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
	/// Summary for UserBooks
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class UserBooks : public System::Windows::Forms::Form
	{
	public:  String ^usrID1;	//string which saved the user id that was chosen
		UserBooks(void)
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
		~UserBooks()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListView^  lvwUserBook;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::ColumnHeader^  colBookT;
	private: System::Windows::Forms::ColumnHeader^  colAuthor;
	private: System::Windows::Forms::ColumnHeader^  colBarcode;
	private: System::Windows::Forms::ColumnHeader^  colELoan;
	private: System::Windows::Forms::ColumnHeader^  colSLoan;
	public: System::Windows::Forms::Button^  btnReturn;
	private: 





	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Button^  btnCancel;
	private: 
	public: 
	private: 


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
			this->lvwUserBook = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colELoan = (gcnew System::Windows::Forms::ColumnHeader());
			this->colSLoan = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lvwUserBook
			// 
			this->lvwUserBook->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwUserBook->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->colBookT, this->colAuthor, 
				this->colBarcode, this->colELoan, this->colSLoan});
			this->lvwUserBook->FullRowSelect = true;
			this->lvwUserBook->GridLines = true;
			this->lvwUserBook->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwUserBook->Location = System::Drawing::Point(12, 30);
			this->lvwUserBook->MultiSelect = false;
			this->lvwUserBook->Name = L"lvwUserBook";
			this->lvwUserBook->Size = System::Drawing::Size(665, 337);
			this->lvwUserBook->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwUserBook->TabIndex = 22;
			this->lvwUserBook->UseCompatibleStateImageBehavior = false;
			this->lvwUserBook->View = System::Windows::Forms::View::Details;
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
			// colELoan
			// 
			this->colELoan->Text = L"Start of Loan";
			this->colELoan->Width = 120;
			// 
			// colSLoan
			// 
			this->colSLoan->Text = L"End of Loan";
			this->colSLoan->Width = 120;
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(506, 373);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(171, 23);
			this->btnReturn->TabIndex = 23;
			this->btnReturn->Text = L"Return Book";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &UserBooks::btnReturn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(16, 373);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 60);
			this->label4->TabIndex = 38;
			this->label4->Text = L"To return the book mark it at the list \r\nand click the \'RETURN BOOK\' button\r\nDela" 
				L"yed returns are colored red.\r\n";
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(550, 424);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 24;
			this->btnCancel->Text = L"Back";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// UserBooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(725, 459);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->lvwUserBook);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UserBooks";
			this->ShowInTaskbar = false;
			this->Text = L"User Books";
			this->Load += gcnew System::EventHandler(this, &UserBooks::UserBooks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		void ShowUserBooks(void)	//show list of books of the chosen id
			{
					String ^ strTitle,^ strAuthor,^ strBarcode,^ strEdate,^ strSdate;
					String ^ strFilename ="files\\users\\"+usrID1+L".txt";	//open id file of the user
					FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
					DateTime Edate;
					if(!fiBooks->Exists )	
					{
						lvwUserBook->Items->Clear();
						return;
					}
					StreamReader ^ strBooks = fiBooks->OpenText();
					lvwUserBook->Items->Clear();  //clear the list view
					try {	//get books from file to list view
							String ^strData;
							while(strData = strBooks->ReadLine()) // "Scan" the file, reading each line
							{
								strTitle = strData;
								strAuthor= strBooks->ReadLine();
								strBarcode= strBooks->ReadLine();
								strSdate  = strBooks->ReadLine();
								strEdate  = strBooks->ReadLine();
								ListViewItem ^lviUserBook = gcnew ListViewItem(strTitle);
								lviUserBook->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
								lviUserBook->SubItems->Add(strAuthor);
								lviUserBook->SubItems->Add(strBarcode);
								lviUserBook->SubItems->Add(strSdate);
								lviUserBook->SubItems->Add(strEdate);
								Edate=Convert::ToDateTime(strEdate);
								if(Edate>DateTime::Now)	//if book is delayed ,color red
		 						{
									lviUserBook->BackColor = Color::FromArgb(255, 215, 150);
			 						lviUserBook->ForeColor = Color::Blue;
		 						}
		 						else
		 						{
			 						lviUserBook->BackColor = Color::FromArgb(255, 155, 0);
			 						lviUserBook->ForeColor = Color::Black;
		 						}
								lvwUserBook->Items->Add(lviUserBook);
							 }
					}
					finally
					 {
						strBooks->Close();
					 }

}//end showuserbook



#pragma endregion
	private: System::Void btnReturn_Click(System::Object^  sender, System::EventArgs^  e) {
				 //return a book
				 if( this->lvwUserBook->SelectedItems->Count == 0 ||
				 this->lvwUserBook->SelectedItems->Count > 1 )
				 return;
				 ListViewItem ^lviUserBook = this->lvwUserBook->SelectedItems->default[0];

					bool del = false;
					String ^ strFilename ="files\\users\\"+usrID1+L".txt";
					String ^ strTempFile =L"files\\Tempuser.txt";	//file for editing the user file
					String ^strTitle = L"0"; // This String variable will hold a the title
					String ^strAuthor = L"0";
					String ^strBarcode = L"0";
					String ^strEdate = L"0";
					String ^strSdate = L"0";
					FileInfo ^ fiuser = gcnew FileInfo(strFilename);
					FileInfo ^ fitemp = gcnew FileInfo(strTempFile);
					StreamWriter ^ stwuser = nullptr;
					StreamReader ^ struser = nullptr;
					StreamWriter ^stwTemp = nullptr;
					StreamReader ^ strTemp = nullptr;
					struser = fiuser->OpenText();
					stwTemp = fitemp->CreateText();
						try {
						 
						   while(strTitle=struser->ReadLine()) // "Scan" the file, reading each line
							   {
									strAuthor = struser->ReadLine();
									strBarcode = struser->ReadLine();
									strEdate = struser->ReadLine();
									strSdate = struser->ReadLine();
									if(strBarcode!= lviUserBook->SubItems->default[2]->Text) //found barcode
									{
										stwTemp->WriteLine(strTitle);
										stwTemp->WriteLine(strAuthor);
										stwTemp->WriteLine(strBarcode);
										stwTemp->WriteLine(strEdate);
										stwTemp->WriteLine(strSdate);
									}
								 }//while
						   stwTemp->Close();
						   strTemp = fitemp->OpenText();
						   if(!(strTemp->ReadLine()))
							   del = true;

							}//try

						finally
						 {
							 struser->Close();
							 strTemp->Close();
						 }
						if(del==false)	//if user file is not empty
						{
							fitemp->CopyTo(strFilename,true);
						}
						else	//delete user file
						{
							fiuser->Delete();
						}
						fitemp->Delete();
						



				//*******************************************************
						//change the status at the list of books

					
					String ^ strFilename1 =L"files\\Books.txt";
					String ^ strTempFile1 =L"files\\Tempbooks.txt";
					String ^strTitle1 = L"0"; // This String variable will hold a the title
					String ^strAuthor1 = L"0";
					String ^strBarcode1 = L"0";
					String ^strStatus1 = L"0";
					FileInfo ^ fiBooks1 = gcnew FileInfo(strFilename1);
					FileInfo ^ fitemp1 = gcnew FileInfo(strTempFile1);
					StreamWriter ^ stwBooks1 = nullptr;
					StreamReader ^ strBooks1 = nullptr;
					StreamWriter ^stwTemp1 = nullptr;
					StreamReader ^ strTemp1 = nullptr;
			
					if(fiBooks1->Exists)
						strBooks1 = fiBooks1->OpenText();
					else
					{
						MessageBox::Show(L"books file does not exist");
						strBooks1->Close();
						return;
					}
					stwTemp1 = fitemp1->CreateText();
						try {
						 
						   while(strTitle1=strBooks1->ReadLine()) // "Scan" the file, reading each line
							   {
									strAuthor1 = strBooks1->ReadLine();
									strBarcode1 = strBooks1->ReadLine();
									strStatus1 = strBooks1->ReadLine();
								 if(strBarcode1==lviUserBook->SubItems->default[2]->Text) //found barcode
									{
									stwTemp1->WriteLine(strTitle1);
									stwTemp1->WriteLine(strAuthor1);
									stwTemp1->WriteLine(strBarcode1);
									stwTemp1->WriteLine(L"Available");	//change status to available
									}


								 else
									{
										stwTemp1->WriteLine(strTitle1);
										stwTemp1->WriteLine(strAuthor1);
										stwTemp1->WriteLine(strBarcode1);
										stwTemp1->WriteLine(strStatus1);
									}//else
								 }//while
							}//try

						finally
						 {
							 strBooks1->Close();
							 stwTemp1->Close();
						 }
						fitemp1->CopyTo(strFilename1,true);
						fitemp1->Delete();
						//----------------delete user id from the loans file---------------
			if(del==true)	//if all books of user has been returned, delete him from the loans file
			{
					String ^ strFilename2 =L"files\\Loans.txt";
					String ^ strTempFile2 =L"files\\Temploans.txt";
					String ^strId2 = L"0"; // This String variable will hold a the id
					String ^strFirst2;
					String ^strLast2;
					FileInfo ^ filoans2 = gcnew FileInfo(strFilename2);
					FileInfo ^ fitemploans2 = gcnew FileInfo(strTempFile2);
					StreamWriter ^ stwLoans2 = nullptr;
					StreamReader ^ strLoans2 = nullptr;
					StreamWriter ^stwTemploans2 = nullptr;
					StreamReader ^ strloans2 = nullptr;
					strLoans2 = filoans2->OpenText();
					stwTemploans2 = fitemploans2->CreateText();
					try 
					{
						 
						while(strId2=strLoans2->ReadLine()) // "Scan" the file, reading each line
						{
								strFirst2=strLoans2->ReadLine();
								strLast2=strLoans2->ReadLine();
								 if(strId2!=usrID1) //if it's not the  id which will be deleted
									{
										stwTemploans2->WriteLine(strId2);
										stwTemploans2->WriteLine(strFirst2);
										stwTemploans2->WriteLine(strLast2);


									}
								 
								 }//while
							}//try
						finally
						 {
							 strLoans2->Close();
							 stwTemploans2->Close();
							 fitemploans2->CopyTo(strFilename2,true);
							fitemploans2->Delete();
						 }
						
						
			}
			ShowUserBooks();
}




private: System::Void UserBooks_Load(System::Object^  sender, System::EventArgs^  e) {
					//get the user id for the file
					String ^ strFilename1 =L"files\\loantmpid.txt";
					FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
					StreamReader ^ strUser1 = fi1->OpenText();
					usrID1 = strUser1->ReadLine();
					strUser1->Close();
					fi1->Delete();
					ShowUserBooks();

		 }
};
}
