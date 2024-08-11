#include "StdAfx.h"
#include "Librarian.h"
#include "listbook_l.h"
#include "list_usr_l.h"
#include "HistoryBooks.h"

namespace library {
	void Librarian::showListbook() {	//show book list
	Listbook_l^ mylstbook = gcnew Listbook_l(this);
	mylstbook->MdiParent=this->ParentForm;
	Hide();
	mylstbook->Show();
	}
	void Librarian::showListuser() {	//show user list
	List_usr_l^ mylstuser = gcnew List_usr_l(this);
	mylstuser->MdiParent=this->ParentForm;
	Hide();
	mylstuser->Show();
	}

	void Librarian::showHistBooks() {	//show history list
	HistoryBooks^ mylsthist = gcnew HistoryBooks(this);
	mylsthist->MdiParent=this->ParentForm;
	Hide();
	mylsthist->Show();
	}

}

