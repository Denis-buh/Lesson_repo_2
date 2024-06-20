



#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class Exercise : public System::Windows::Forms::Form{
public:
	Exercise(void){
		InitializeComponent();
	}

protected:
	~Exercise(){
		if (components){
			delete components;
		}
	}
private: 
	System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::Label^ label4;
	System::Windows::Forms::Label^ label5;
	System::ComponentModel::Container ^components;

	void InitializeComponent(void){
		this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->flowLayoutPanel1->SuspendLayout();
		this->SuspendLayout(); 
		this->flowLayoutPanel1->Controls->Add(this->label1);
		this->flowLayoutPanel1->Controls->Add(this->label2);
		this->flowLayoutPanel1->Controls->Add(this->label3);
		this->flowLayoutPanel1->Controls->Add(this->label4);
		this->flowLayoutPanel1->Controls->Add(this->label5);
		this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
		this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		this->flowLayoutPanel1->Size = System::Drawing::Size(584, 111);
		this->flowLayoutPanel1->TabIndex = 0;
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(3, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(53, 13);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Задание:";
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(3, 13);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(274, 13);
		this->label2->TabIndex = 2;
		this->label2->Text = L"Элементы массива задать по следующему правилу:";
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(3, 26);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(545, 26);
		this->label3->TabIndex = 3;
		this->label3->Text = L"    Введенный параметр является последним и центральным элементами массива, остал"
			L"ьные значения задаются с помощью счетчика случайных чисел.";
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(3, 52);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(550, 26);
		this->label4->TabIndex = 4;
		this->label4->Text = L"    Если положительных элементов массива, содержащего 25 элементов,  больше чем о"
			L"трицательных, то отсортированные по убыванию положительные элементы расположить "
			L"в начале массива. \r\n";
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(3, 78);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(445, 13);
		this->label5->TabIndex = 5;
		this->label5->Text = L"    Иначе в начале массива расположить отсортированные отрицательные элементы.";

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(584, 111);
		this->Controls->Add(this->flowLayoutPanel1);
		this->MinimumSize = System::Drawing::Size(600, 150);
		this->Name = L"Exercise";
		this->Text = L"Exercise";
		this->flowLayoutPanel1->ResumeLayout(false);
		this->flowLayoutPanel1->PerformLayout();
		this->ResumeLayout(false);
	}
};
