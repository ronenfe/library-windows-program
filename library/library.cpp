// library.cpp : main project file.

#include "stdafx.h"
#include "Main_wind.h"

using namespace library;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Main_wind());
	return 0;
}
