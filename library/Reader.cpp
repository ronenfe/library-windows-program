#include "StdAfx.h"
#include "Reader.h"
#include "Search_r.h"
#include "HistoryUser.h"

namespace library {
	void Reader::showSearch() {
	Search_r ^ mysearch = gcnew Search_r(this);
	mysearch->MdiParent=this->ParentForm;
	mysearch->Show();
	}
void Reader::showHistUser() {
	HistoryUser ^ myhistory = gcnew HistoryUser(this);
	myhistory->MdiParent=this->ParentForm;
	myhistory->Show();
	}
	
}