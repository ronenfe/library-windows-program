#ifndef VIEW_LOAN_R_H
#define VIEW_LOAN_R_H
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
	/// Summary for View_loan_r
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class View_loan_r : public System::Windows::Forms::Form
	{
	public:
		View_loan_r(void)
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
		~View_loan_r()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::ListView^  lvwUserBook;
	private: 
	private: System::Windows::Forms::ColumnHeader^  colBookT;
	public: 
	private: System::Windows::Forms::ColumnHeader^  colAuthor;
	private: System::Windows::Forms::ColumnHeader^  colBarcode;
	private: System::Windows::Forms::ColumnHeader^  colELoan;
	private: System::Windows::Forms::ColumnHeader^  colSLoan;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lvwUserBook = (gcnew System::Windows::Forms::ListView());
			this->colBookT = (gcnew System::Windows::Forms::ColumnHeader());
			this->colAuthor = (gcnew System::Windows::Forms::ColumnHeader());
			this->colBarcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->colELoan = (gcnew System::Windows::Forms::ColumnHeader());
			this->colSLoan = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 30);
			this->label1->TabIndex = 25;
			this->label1->Text = L"View Loans";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(607, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &View_loan_r::button2_Click);
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
			this->lvwUserBook->Location = System::Drawing::Point(17, 61);
			this->lvwUserBook->MultiSelect = false;
			this->lvwUserBook->Name = L"lvwUserBook";
			this->lvwUserBook->Size = System::Drawing::Size(665, 337);
			this->lvwUserBook->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwUserBook->TabIndex = 32;
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
			// View_loan_r
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(729, 565);
			this->ControlBox = false;
			this->Controls->Add(this->lvwUserBook);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"View_loan_r";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View Loan";
			this->Load += gcnew System::EventHandler(this, &View_loan_r::View_loan_r_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			void ShowUserBooks(void)
			{
				String ^ strFilename1 =L"files\\tmpid.txt";
				FileInfo ^ fi1 = gcnew FileInfo(strFilename1);
				StreamReader ^ strUser1 = fi1->OpenText();
				String ^strUserId,^strUserFirst,^strUserLast;
				strUserId = strUser1->ReadLine();
				strUserFirst = strUser1->ReadLine();
				strUserLast = strUser1->ReadLine();
				strUser1->Close();

					String ^ strTitle,^ strAuthor,^ strBarcode,^ strEdate,^ strSdate;
					String ^ strFilename ="files\\users\\"+strUserId+".txt";
					FileInfo ^ fiBooks = gcnew FileInfo(strFilename);
					DateTime Edate;
					if(fiBooks->Exists )
					{

						StreamReader ^ strBooks = fiBooks->OpenText();
						lvwUserBook->Items->Clear();  //clear the list view
						try {
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
									if(Edate>DateTime::Now)
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
					}
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
			 }
private: System::Void View_loan_r_Load(System::Object^  sender, System::EventArgs^  e) {
			 ShowUserBooks();
		 }
};
}
#endif
