#include "format.h"
#include "joke.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	okienka::format form;
	Application::Run(% form);
	return 0;
}