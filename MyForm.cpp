#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThread]
 int main()
 {
	 Application::EnableVisualStyles();
	 LuddoGame::MyForm Form;
	 Application::Run(%Form);
 }