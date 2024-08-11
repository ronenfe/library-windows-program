#include "StdAfx.h"
#include "Login.h"
#include "Reader.h"
#include "Librarian.h"

namespace library {

void Login::showReader() {	//show reader form
	Reader^ myrd = gcnew Reader(this);
	myrd->MdiParent=this->ParentForm;
	myrd->Show();
	}

void Login::showLibrarian() {	//show librarian form
	Librarian^ mylib = gcnew Librarian(this);
	mylib->MdiParent=this->ParentForm;
	mylib->Show();
	}
}

