#ifndef LIST_USR_L_H
#define LIST_USR_L_H

#pragma once

#include "Librarian.h"
#include "AddUser.h"



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;



namespace library {

	/// <summary>
	/// Summary for List_usr_l
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class List_usr_l : public System::Windows::Forms::Form
	{
		Librarian^ mylib1;	//this is so we can go back to librarian form
	public:
		String  ^ strFirstName ,^strLastName ,^strId,^strPassword;	//string for file data
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	public: 
		List_usr_l(Librarian^ mylib)	//so we can go back
		{
			InitializeComponent();
			mylib1=mylib;
		}
		List_usr_l()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~List_usr_l()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnDelUser;
	private: System::Windows::Forms::Button^  btnNewUser;
	private: System::Windows::Forms::ListView^  lvwUsers;






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
			this->btnDelUser = (gcnew System::Windows::Forms::Button());
			this->btnNewUser = (gcnew System::Windows::Forms::Button());
			this->lvwUsers = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 30);
			this->label1->TabIndex = 20;
			this->label1->Text = L"List of Users\r\n";
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(515, 323);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 24;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &List_usr_l::btnBack_Click);
			// 
			// btnDelUser
			// 
			this->btnDelUser->Location = System::Drawing::Point(482, 125);
			this->btnDelUser->Name = L"btnDelUser";
			this->btnDelUser->Size = System::Drawing::Size(108, 23);
			this->btnDelUser->TabIndex = 23;
			this->btnDelUser->Text = L"Delete User";
			this->btnDelUser->UseVisualStyleBackColor = true;
			this->btnDelUser->Click += gcnew System::EventHandler(this, &List_usr_l::btnDelUser_Click);
			// 
			// btnNewUser
			// 
			this->btnNewUser->Location = System::Drawing::Point(482, 63);
			this->btnNewUser->Name = L"btnNewUser";
			this->btnNewUser->Size = System::Drawing::Size(108, 23);
			this->btnNewUser->TabIndex = 22;
			this->btnNewUser->Text = L"Add New User";
			this->btnNewUser->UseVisualStyleBackColor = true;
			this->btnNewUser->Click += gcnew System::EventHandler(this, &List_usr_l::btnNewUser_Click);
			// 
			// lvwUsers
			// 
			this->lvwUsers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lvwUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->lvwUsers->FullRowSelect = true;
			this->lvwUsers->GridLines = true;
			this->lvwUsers->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvwUsers->Location = System::Drawing::Point(17, 50);
			this->lvwUsers->MultiSelect = false;
			this->lvwUsers->Name = L"lvwUsers";
			this->lvwUsers->Size = System::Drawing::Size(420, 333);
			this->lvwUsers->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->lvwUsers->TabIndex = 21;
			this->lvwUsers->UseCompatibleStateImageBehavior = false;
			this->lvwUsers->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 79;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Password";
			this->columnHeader2->Width = 109;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"First Name";
			this->columnHeader3->Width = 113;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Last Name";
			this->columnHeader4->Width = 117;
			// 
			// List_usr_l
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(614, 412);
			this->ControlBox = false;
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnDelUser);
			this->Controls->Add(this->btnNewUser);
			this->Controls->Add(this->lvwUsers);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"List_usr_l";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"List of Usr";
			this->Load += gcnew System::EventHandler(this, &List_usr_l::List_usr_l_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



   

		
	void ShowUsers(void)		//show users in listview
	{
		String ^ strFilename =L"files\\Users.txt";
		FileInfo ^ fiUsers = gcnew FileInfo(strFilename);
		if(!fiUsers->Exists )	return;	//if file doesn't exist
		StreamReader ^ strUsers = fiUsers->OpenText();
		lvwUsers->Items->Clear();  //clear the list view
		try {
				String ^strData;
				while(strData = strUsers->ReadLine()) // "Scan" the file, reading each line
				{
					strId = strData;	//get data from file to listview
					String ^ strUser =L"files\\users\\"+strId+".txt";	//user file
					FileInfo ^ fiuser = gcnew FileInfo(strUser);
					strPassword= strUsers->ReadLine();
					strFirstName= strUsers->ReadLine();
					strLastName  = strUsers->ReadLine();
					ListViewItem ^lviUser = gcnew ListViewItem(strId);
					lviUser->Font = gcnew Drawing::Font("Arial", 8, FontStyle::Bold);
					lviUser->SubItems->Add(strPassword);
					lviUser->SubItems->Add(strFirstName);
			        lviUser->SubItems->Add(strLastName);
					if(!(fiuser->Exists))
					{
						lviUser->BackColor = Color::FromArgb(255, 215, 150);
						lviUser->ForeColor = Color::Blue;
					}
					else
					{
						lviUser->BackColor = Color::FromArgb(255, 155, 0);
			 			lviUser->ForeColor = Color::Black;
					}
					lvwUsers->Items->Add(lviUser);
				 }
		}
		finally
		 {
			 strUsers->Close();
		 }
	}
				


#pragma endregion

private: System::Void List_usr_l_Load(System::Object^  sender, System::EventArgs^  e) {

					ShowUsers();

			 }
private: System::Void btnNewUser_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//add new user
	AddUser ^dlgAdduser = gcnew AddUser;
	String ^ strFilename =L"files\\Users.txt";
	FileInfo ^ fiUsers = gcnew FileInfo(strFilename);
	StreamWriter ^ stwUsers = nullptr;
	StreamReader ^ strUsers = nullptr;
	String ^strData;
	bool found=false;
	if( dlgAdduser->ShowDialog() == dlgAdduser->btnAdd->DialogResult)		
	{
		if( dlgAdduser->txtId->Text->Equals(L"")  )
		{
			MessageBox::Show(L"You must provide an ID to create a new User");
			return;
		}
		if( dlgAdduser->txtPassword->Text->Equals(L"")  )
		{
			MessageBox::Show(L"You must provide a Password to create a new User");
			return;
		}

		if( dlgAdduser->txtFirstName->Text->Equals(L"")  )
		{
			MessageBox::Show(L"You must provide a FirstName to create a new User");
			return;
		}
			 
		if( dlgAdduser->txtLastName->Text->Equals(L"")  )
		{
			MessageBox::Show(L"You must provide a Last Name to create a new User");
			return;
		}
		if(fiUsers->Exists)	//if file exists ,check if id exists already
		{
			strUsers=fiUsers->OpenText();
			try 
			{
				while(strData = strUsers->ReadLine()) // "Scan" the file, reading each line
				{
					if(strData==dlgAdduser->txtId->Text) //found id
					{
						found = true;
						MessageBox::Show(L"You must choose a unique Id");
						return;
					}
					strUsers->ReadLine();
					strUsers->ReadLine();
					strUsers->ReadLine();

				}
			}
			finally
			{
				strUsers->Close();
			}
					stwUsers = fiUsers->AppendText();	//add text to file
		}	 
		else
		{
			stwUsers = fiUsers->CreateText();	//create new file
		}
		try		//write
		{
			stwUsers->WriteLine(dlgAdduser->txtId->Text);
			stwUsers->WriteLine(dlgAdduser->txtPassword->Text);
			stwUsers->WriteLine(dlgAdduser->txtFirstName->Text);
			stwUsers->WriteLine(dlgAdduser->txtLastName->Text);
		}
		finally
		{
			stwUsers->Close();
		}			
		ShowUsers();
	}
}
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e)
{	//back to previous window
	Close();
	mylib1->Show();
}
private: System::Void btnDelUser_Click(System::Object^  sender, System::EventArgs^  e) {
	//delete user

	bool hasbooks= false;
	String ^ strFilename =L"files\\Users.txt";
	
	String ^strId = L"0"; // This String variable will hold a line of text
	String ^ strFirst;
	String ^ strLast;
	String ^ strPass;
	FileInfo ^ fiUsers = gcnew FileInfo(strFilename);
	StreamWriter ^ stwUsers = nullptr;
	StreamReader ^ strUsers = nullptr;
	if( this->lvwUsers->SelectedItems->Count == 0 ||
		 this->lvwUsers->SelectedItems->Count > 1 )
		 return;
	 ListViewItem ^lviUser = this->lvwUsers->SelectedItems->default[0];


	
	

		if(fiUsers->Exists)
			strUsers = fiUsers->OpenText();
		else
		{
			MessageBox::Show(L"users file does not exist,add users first");
			return;
		}
		String ^ strTempFile =L"files\\Tempusers.txt";	//temp file for editing 
		FileInfo ^ fitemp = gcnew FileInfo(strTempFile);
		String ^ strUser =L"files\\users\\"+(lviUser->SubItems->default[0]->Text)+".txt";	//user file
		FileInfo ^ fiuser = gcnew FileInfo(strUser);
		StreamWriter ^stwTemp = nullptr;
		StreamReader ^ strTemp = nullptr;
		stwTemp = fitemp->CreateText();
		try
		{
			while(strId = strUsers->ReadLine()) // "Scan" the file, reading each line
			{
				strPass = strUsers->ReadLine();
				strFirst = strUsers->ReadLine();
				strLast = strUsers->ReadLine();
				if(strId==lviUser->SubItems->default[0]->Text) //found I.D
				{
					if(fiuser->Exists)
					{
						hasbooks=true;
						break;
					}
				  
				}
				else
				{	//copy records
					stwTemp->WriteLine(strId);
					stwTemp->WriteLine(strPass);
					stwTemp->WriteLine(strFirst);
					stwTemp->WriteLine(strLast);
				}
				

				  
			}//while
		}//try
		finally
		{
			stwTemp->Close();
			strUsers->Close();
			if(hasbooks==false)
				fitemp->CopyTo(strFilename,true);
			fitemp->Delete();
		}
		if(hasbooks==true)
		{
			MessageBox::Show(L"You can't delete a user who didn't return all his books,mark all his books as returned by clicking \"list of loans/return a book\" in the previous window");
		}

		ShowUsers();
		
		

	

 }//end del
};
}

#endif
