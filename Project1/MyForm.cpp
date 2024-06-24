#include "MyForm.h"
#include "InputForm.h"
#include "AnswerForm.h"



using namespace System;
using namespace System::Windows::Forms;




int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1::MyForm form;
	Application::Run(% form);
	return 0;
}