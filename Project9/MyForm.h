#pragma once
//#include "Arr.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include <winuser.h>
#include <math.h>

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private:
		int c, a, b;
		int max;
		
		int n;
		int q = 0;
		int** arr_dvum = new int* [n];    //ссылка на двумерный
		
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				for (int i = 0; i < n; i++)
					delete[]arr_dvum[i];
				delete[]arr_dvum;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Размер матрицы:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Поехали!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Элемент матрицы:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 101);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(179, 245);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(85, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Ввести элемент";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(15, 75);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(64, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(100, 359);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Переместить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(15, 359);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Вывод";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(100, 388);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Еще раз";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(210, 418);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Перемещение строк и столбцов";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int k = 0;
		try
		{
			n = Convert::ToInt32(textBox1->Text);

		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(
				"Введите число!", "Ошибка", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			k = 1;
		}
		if (n <= 10 && n >= 2)
		{
			
			k = 0;
			//int** arr_dvum = new int* [n];    //ссылка на двумерный
			//int* arr = new int[n];  //ссылка на одномерный - строку
			//reserve(n);
			numericUpDown1->Enabled=true;
			button3->Enabled = true;
			//button2->Enabled=true;

			for (int i = 0; i < n; i++)
			{
				arr_dvum[i] = new int[n];
				//arrtemp(n, i);
			}

		}
		else
		{
			if (k == 0)
			{
				MessageBox::Show(
					"Введите число от 2 до 10", "Ошибка", MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
		   /*
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int m = 0;
		/*for (int i = 0; i < n; i++)
		{
			arr_dvum[i] = new int[n];
			//arrtemp(n, i);
		}
		
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				arr_dvum[i][j] = rand() % 10 + 1;
				//rend(i, j);
				
			}
		}
		button4->Enabled = true;
		//Update();
		
	}*/
	void Project9::MyForm::Update()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				richTextBox1->Text += System::Convert::ToString(arr_dvum[i][j]) + " ";
			richTextBox1->Text += "\n";
		}
		richTextBox1->Text += "\n";
		richTextBox1->Text += "\n";
			//	convertarr(i, j);
		//richTextBox1->Text =  // вектор возвращает элемент под номером в скобочках
	}

	   int i = 0, j = 0;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int m = 0;
	/*for (int i = 0; i < n; i++)
	{
		arr_dvum[i] = new int[n];
		//arrtemp(n, i);
	}*/
	if (j < n || i < n-1) 
	{
		
		int a = (int)numericUpDown1->Value;
		if (j == n)
		{
			i++;
			j = 0;
		}
			
		if (j == n - 1 && i == n - 1)
		{
			button4->Enabled = true;
			button5->Enabled = true;
		}
		arr_dvum[i][j] = a;
		numericUpDown1->Value = 0;
		//inputelement(i, j, a);
		m++;
		j++;
	}
	else MessageBox::Show("Все элементы матрицы уже введены", "Ошибка!");
	//if (m = n*n)
		//Update();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			richTextBox1->Text += System::Convert::ToString(arr_dvum[i][j]) + " ";
		richTextBox1->Text += "\n";

	}
	richTextBox1->Text += "\n";
	richTextBox1->Text += "\n";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int i, j, max, rij[100], kolom[100], k = 0, q, x = 0, y = 0, hulp_1 = 0, hulp_2 = 0;
	int f = 0, p, o, itteratie = 1, d = 0;

	/*отыскание наибольшего элемента матрицы */

	max = abs(arr_dvum[0][0]);

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (abs(arr_dvum[i][j]) > max)
			{
				max = abs(arr_dvum[i][j]);
			}
		}
	}

	//Нахождение позиций наибольшего элемента
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (abs(arr_dvum[i][j]) == max)
			{
				x = i;
				y = j;
			}
		}
	}

	/*перестановка столбцов если это необходимо  */
	while (f <= n)
	{

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n-1; ++j)
			{
				if (j == y)

				{
					
					hulp_1 = arr_dvum[i][j+1];  j++;            //hulp1 присваиваем предыдущий эл.масс.
					arr_dvum[i][j] = arr_dvum[i][j - 1];    j--;    //
					arr_dvum[i][j] = hulp_1;
					d = 1;

				}

			}
		}
		if (d)
		{
			MessageBox::Show("Перестановка столбцов", "!");
			d = 0;
		}

		++y;
		++f;
	}
	f = 0;

	/*перестановка строк  если это необходимо*/
	while (f <= n)
	{

		for (i = 0; i < n-1; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				if (i == x)

				{
					hulp_2 = arr_dvum[i + 1][j]; i++;
					arr_dvum[i][j] = arr_dvum[i - 1][j]; i--;
					arr_dvum[i][j] = hulp_2;
					d = 1;
	
				}

			}

		}

		if (d)
		{
			MessageBox::Show("Перестановка строк", "!");
			d = 0;
		}

		++x;
		++f;
	}

	Update();
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	/*for (int i = 0; i < n; i++)
		delete[]arr_dvum[i];
	delete[]arr_dvum;*/
	richTextBox1->Clear();
	textBox1->Clear();
	numericUpDown1->Value = 0;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	numericUpDown1->Enabled = false;
}
};
}

/*for (int i = 0; i < n; i++)
	delete[]arr[i];
delete[]arr_dvum;*/