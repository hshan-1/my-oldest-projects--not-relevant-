#include"format.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
//i dont know man fuck kys

int Main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	aplikacja::format form;
	Application::Run(% form);
	return 0;
}