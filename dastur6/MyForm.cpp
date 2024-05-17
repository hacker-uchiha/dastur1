#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	dastur6::MyForm form;
	Application::Run(% form);
}