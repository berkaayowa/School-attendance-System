// myProject1.cpp : main project file.

#include "stdafx.h"
#include "Log_In.h"

using namespace myProject1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Log_In());
	return 0;
}
