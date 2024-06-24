





#include <iostream>
#include "Exercise.h"
#include "InputForm.h"
#include "AnswerForm.h"
#pragma once



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class Main_window : public System::Windows::Forms::Form{
public:
	Main_window(void){
		InitializeComponent();
	}

protected:
	~Main_window(){
		if (components){
			delete components;
			delete my_arrey; 
		}
	}

private: 
	Arr* my_arrey = nullptr; 

	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Exercise ex; 
		ex.ShowDialog(this);
	}

	System::Void InputButton_Click(System::Object^ sender, System::EventArgs^ e) {
		InputForm form_input;
		form_input.ShowDialog(this);
		std::vector<int> my_vect = form_input.get_inform();
		if (my_vect.size()) {
			delete my_arrey;
			my_arrey = new Arr(my_vect);

			my_arrey->print();
			//std::cout << my_arrey->get_sum_after_min() << "\n";
			//my_arrey->sort();
			//my_arrey->print();
		}
		else {
			MessageBox::Show("Вы не ввели данные в программу. Для ввода данных вновь откройте форму для ввода данных и введите данные.",
				"Данные не были введены", MessageBoxButtons::OK,
				MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1,
				MessageBoxOptions::DefaultDesktopOnly
			);
		}
	}

	System::Void CalcButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->my_arrey == nullptr) {
			MessageBox::Show("Вы не ввели данные в программу. Для ввода данных откройте форму для ввода данных и введите данные.",
				"Данные не были введены", MessageBoxButtons::OK,
				MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1,
				MessageBoxOptions::DefaultDesktopOnly
			);
			return;
		}
		AnswerForm form_input(*my_arrey);
		form_input.ShowDialog(this);
	}
	System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e)  {std::exit(0);}



	System::Windows::Forms::Button^ CalcButton;
	System::Windows::Forms::Button^ ExitButton;
	System::Windows::Forms::Button^ InputButton;
	System::Windows::Forms::Button^ button1;
	System::Windows::Forms::Label^ label1;
	System::ComponentModel::Container^ components;

	void InitializeComponent(void){
		this->CalcButton = (gcnew System::Windows::Forms::Button());
		this->ExitButton = (gcnew System::Windows::Forms::Button());
		this->InputButton = (gcnew System::Windows::Forms::Button());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());

		this->CalcButton->AutoSize = true;
		this->CalcButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->CalcButton->Location = System::Drawing::Point(96, 36);
		this->CalcButton->Name = L"CalcButton";
		this->CalcButton->Size = System::Drawing::Size(75, 24);
		this->CalcButton->TabIndex = 3;
		this->CalcButton->Text = L"Calc";
		this->CalcButton->UseCompatibleTextRendering = true;
		this->CalcButton->UseVisualStyleBackColor = true;
		this->CalcButton->Click += gcnew System::EventHandler(this, &Main_window::CalcButton_Click);

		this->ExitButton->AutoSize = true;
		this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->ExitButton->Location = System::Drawing::Point(326, 36);
		this->ExitButton->Name = L"ExitButton";
		this->ExitButton->Size = System::Drawing::Size(75, 23);
		this->ExitButton->TabIndex = 4;
		this->ExitButton->Text = L"Exit";
		this->ExitButton->UseVisualStyleBackColor = true;
		this->ExitButton->Click += gcnew System::EventHandler(this, &Main_window::ExitButton_Click);

		this->InputButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->InputButton->Location = System::Drawing::Point(15, 37);
		this->InputButton->Name = L"InputButton";
		this->InputButton->Size = System::Drawing::Size(75, 23);
		this->InputButton->TabIndex = 9;
		this->InputButton->Text = L"Input";
		this->InputButton->UseVisualStyleBackColor = true;
		this->InputButton->Click += gcnew System::EventHandler(this, &Main_window::InputButton_Click);

		this->button1->Location = System::Drawing::Point(177, 37);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(143, 23);
		this->button1->TabIndex = 10;
		this->button1->Text = L"Посмотреть задание ";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &Main_window::button1_Click);

		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(12, 9);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(251, 13);
		this->label1->TabIndex = 11;
		this->label1->Text = L"Нажмите на кнопку чтобы выполнить действие ";

		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
		this->ClientSize = System::Drawing::Size(434, 111);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->InputButton);
		this->Controls->Add(this->ExitButton);
		this->Controls->Add(this->CalcButton);
		this->MinimumSize = System::Drawing::Size(450, 150);
		this->Name = L"Main_window";
		this->Text = L"Корнышев В.Н. 3105-об 9 вар.";
	}
};

