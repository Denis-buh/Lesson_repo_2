



#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Drawing;


public ref class Exercise : public System::Windows::Forms::Form {
public:
	Exercise(void) {
		InitializeComponent();
	}

protected:
	~Exercise() {
		if (components) {
			delete components;
		}
	}
private:
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::Label^ label4;
	System::Windows::Forms::Label^ label5;
	System::Windows::Forms::Label^ label6;
	System::ComponentModel::Container^ components;

	void InitializeComponent(void) {
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();

		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(12, -1);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(53, 13);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Задание:";

		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(12, 12);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(363, 13);
		this->label2->TabIndex = 2;
		this->label2->Text = L"Программа задаёт массив из 15 элементов по следующему правилу:";

		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(13, 25);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(428, 13);
		this->label3->TabIndex = 3;
		this->label3->Text = L"    Массив состоит из 15 элеметов, первые три - больше своих индексов в 10 раз, ";

		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(13, 38);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(404, 13);
		this->label4->TabIndex = 4;
		this->label4->Text = L"    последний - задаётся пользователем, остальные - случайно генерируются.\r\n";

		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(13, 51);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(362, 13);
		this->label5->TabIndex = 5;
		this->label5->Text = L"Программа находит сумму элементов, стоящих после минимального";

		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(12, 64);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(348, 13);
		this->label6->TabIndex = 6;
		this->label6->Text = L"и на нечётных местах, затем сортирует весь массив по убыванию.";

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(584, 111);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->MinimumSize = System::Drawing::Size(600, 150);
		this->Name = L"Exercise";
		this->Text = L"Exercise";
	}
};
