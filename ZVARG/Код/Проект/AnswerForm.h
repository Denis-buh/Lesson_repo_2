



#pragma once
#include "ComputingBlock.h"





using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



public ref class AnswerForm : public System::Windows::Forms::Form{
public:
	AnswerForm(Arr& my_arrey){
		InitializeComponent();
		this->my_arrey = &my_arrey;
		this->show_arrey->Text = gcnew String(this->my_arrey->iprint().c_str());
		int res = this->my_arrey->get_sum_after_min(); 
		this->show_sum->Text = gcnew String(std::to_string(res).c_str());
	}

protected:
	~AnswerForm(){
		if (components){
			delete components;
		}
	}

private: 
	Arr* my_arrey = nullptr;

	System::Void sort_arr_Click(System::Object^ sender, System::EventArgs^ e) {
		this->my_arrey->sort();
		this->show_sort_arr->Text = gcnew String(this->my_arrey->iprint().c_str());
	}


	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Label^ show_arrey;
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ show_sum;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::Label^ show_sort_arr;
	System::Windows::Forms::Button^ sort_arr;
	System::ComponentModel::Container ^components;

	void InitializeComponent(void){
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->show_arrey = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->show_sum = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->show_sort_arr = (gcnew System::Windows::Forms::Label());
		this->sort_arr = (gcnew System::Windows::Forms::Button());

		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(12, 9);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(108, 13);
		this->label1->TabIndex = 11;
		this->label1->Text = L"Введённый массив ";

		this->show_arrey->AutoSize = true;
		this->show_arrey->Location = System::Drawing::Point(12, 33);
		this->show_arrey->Name = L"show_arrey";
		this->show_arrey->Size = System::Drawing::Size(108, 13);
		this->show_arrey->TabIndex = 12;
		this->show_arrey->Text = L"Введённый массив ";

		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(12, 61);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(126, 13);
		this->label2->TabIndex = 13;
		this->label2->Text = L"Запрашиваемая сумма";

		this->show_sum->AutoSize = true;
		this->show_sum->Location = System::Drawing::Point(12, 92);
		this->show_sum->Name = L"show_sum";
		this->show_sum->Size = System::Drawing::Size(126, 13);
		this->show_sum->TabIndex = 14;
		this->show_sum->Text = L"Запрашиваемая сумма";

		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(12, 119);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(140, 13);
		this->label3->TabIndex = 15;
		this->label3->Text = L"Отсортированный массив";

		this->show_sort_arr->AutoSize = true;
		this->show_sort_arr->Location = System::Drawing::Point(12, 149);
		this->show_sort_arr->Name = L"show_sort_arr";
		this->show_sort_arr->Size = System::Drawing::Size(450, 13);
		this->show_sort_arr->TabIndex = 16;
		this->show_sort_arr->Text = L"Нажмите на кнопку «Отсортировать массив» чтобы увидеть отсортированный массив";

		this->sort_arr->Location = System::Drawing::Point(15, 175);
		this->sort_arr->Name = L"sort_arr";
		this->sort_arr->Size = System::Drawing::Size(132, 24);
		this->sort_arr->TabIndex = 17;
		this->sort_arr->Text = L"Отсортировать массив";
		this->sort_arr->UseVisualStyleBackColor = true;
		this->sort_arr->Click += gcnew System::EventHandler(this, &AnswerForm::sort_arr_Click);

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(484, 211);
		this->Controls->Add(this->sort_arr);
		this->Controls->Add(this->show_sort_arr);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->show_sum);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->show_arrey);
		this->Controls->Add(this->label1);
		this->MinimumSize = System::Drawing::Size(500, 250);
		this->Name = L"AnswerForm";
		this->Text = L"Ответ";
	}
};



