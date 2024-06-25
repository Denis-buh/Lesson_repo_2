#include "Main_window.h"
//#include "InputForm.h"
//#include "AnswerForm.h"



using namespace System;
using namespace System::Windows::Forms;




int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Main_window form;
	Application::Run(% form);
	return 0;
}