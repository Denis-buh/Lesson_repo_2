



#include "MainWindow.h"


using namespace System;
using namespace System::Windows::Forms;


int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Program form;
	Application::Run(% form);
	return 0;
}