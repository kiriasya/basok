#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] //Single Thread Apartment ������� �������� ��� ����� ����� ������������ ������ ����������
int main(array<String^>^ args) { //�������� CLR ������ ��������� ���������
	Application::EnableVisualStyles(); //�������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false); //��� ������������� ������ GDI ����������� �� TextRenderer
	Project9::MyForm form; Application::Run(% form);

	return 0;
}