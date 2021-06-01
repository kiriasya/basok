#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] //Single Thread Apartment атрибут задающий для точки входа однопоточную модель выполнения
int main(array<String^>^ args) { //передаем CLR массив строковых элементов
	Application::EnableVisualStyles(); //включаем визуальные стили
	Application::SetCompatibleTextRenderingDefault(false); //для использования класса GDI основанного на TextRenderer
	Project9::MyForm form; Application::Run(% form);

	return 0;
}