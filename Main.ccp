#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace dzCLRLibrary;

[STAThreadAttribute]
int main()
{
	Application::Run(gcnew MyForm());
}