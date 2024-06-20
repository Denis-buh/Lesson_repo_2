



#pragma once


#include <iostream>
#include <ctime>
#include <vector>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace my_random {
	int min_range = 0;
	int max_range = 100;
	void set_range(int min_range, int max_range) {
		if (min_range >= max_range) {
			throw std::invalid_argument("Верхняя граница для диапазона рандомных чисел должна быть больше нижней границы.");
		}
		my_random::min_range = min_range;
		my_random::max_range = max_range;
	}
	void srand(unsigned int option = ((time(NULL)) % 1000)) {
		std::srand(option);
	}
	int random() {
		return ((rand() % (max_range - min_range + 1)) + min_range);
	}
}


public ref class InputForm : public System::Windows::Forms::Form{
public:
	InputForm(void){
		InitializeComponent();
	}

	std::vector<int> get_inform(){
		if (this->state_inform) {
			std::vector<int> items(25);
			if (this->use_random->Checked) {
				for (int i = 0; i < items.size(); i += 1) {
					items[i] = my_random::random();
				}
			}
			items[11] = int(this->super_item->Value);
			items[24] = int(this->super_item->Value);
			return (items);
		}
		std::vector<int> items(0);
		return (items);

	}

protected:
	~InputForm(){
		if (components){
			delete components;
		}
	}

private: 
	bool state_inform = false;

	System::Void set_inform_Click(System::Object^ sender, System::EventArgs^ e){
		try{
			my_random::srand();
			my_random::set_range(int(this->min_range_random->Value), int(this->max_rande_random->Value));
			this->state_inform = true; 
		}
		catch (std::invalid_argument){
			MessageBox::Show("Верхняя граница для диапазона рандомных чисел должна быть больше нижней границы.",
							 "Введены не верные значения", MessageBoxButtons::OK,
							 MessageBoxIcon::Error, MessageBoxDefaultButton::Button1,
							 MessageBoxOptions::DefaultDesktopOnly
			);
		}
	}

	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::NumericUpDown^ super_item;
	System::Windows::Forms::NumericUpDown^ min_range_random;
	System::Windows::Forms::NumericUpDown^ max_rande_random;
	System::Windows::Forms::Label^ label4;
	System::Windows::Forms::Label^ label5;
	System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	System::Windows::Forms::CheckBox^ use_random;
	System::Windows::Forms::Button^ set_inform;
	System::ComponentModel::Container^ components;

	void InitializeComponent(void){
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->super_item = (gcnew System::Windows::Forms::NumericUpDown());
		this->min_range_random = (gcnew System::Windows::Forms::NumericUpDown());
		this->max_rande_random = (gcnew System::Windows::Forms::NumericUpDown());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->use_random = (gcnew System::Windows::Forms::CheckBox());
		this->set_inform = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->super_item))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_range_random))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->max_rande_random))->BeginInit();
		this->flowLayoutPanel1->SuspendLayout();
		this->flowLayoutPanel2->SuspendLayout();
		this->flowLayoutPanel3->SuspendLayout();
		this->flowLayoutPanel4->SuspendLayout();
		this->SuspendLayout();
		this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(3, 0);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(235, 26);
		this->label2->TabIndex = 1;
		this->label2->Text = L"Последний и центральный элемент массива";
		this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->label3->AutoSize = true;
		this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
		this->label3->Location = System::Drawing::Point(3, 0);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(348, 26);
		this->label3->TabIndex = 2;
		this->label3->Text = L"Минимальная граница диапазона случайных чисел (включительно)";
		this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->super_item->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->super_item->Location = System::Drawing::Point(244, 3);
		this->super_item->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->super_item->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->super_item->Name = L"super_item";
		this->super_item->Size = System::Drawing::Size(126, 20);
		this->super_item->TabIndex = 7;
		this->super_item->Tag = L"";
		this->super_item->ThousandsSeparator = true;
		this->min_range_random->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->min_range_random->Location = System::Drawing::Point(357, 3);
		this->min_range_random->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->min_range_random->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->min_range_random->Name = L"min_range_random";
		this->min_range_random->Size = System::Drawing::Size(120, 20);
		this->min_range_random->TabIndex = 8;
		this->min_range_random->ThousandsSeparator = true;
		this->max_rande_random->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->max_rande_random->Location = System::Drawing::Point(363, 3);
		this->max_rande_random->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->max_rande_random->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->max_rande_random->Name = L"max_rande_random";
		this->max_rande_random->Size = System::Drawing::Size(120, 20);
		this->max_rande_random->TabIndex = 9;
		this->max_rande_random->ThousandsSeparator = true;
		this->max_rande_random->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
		this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(3, 0);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(354, 26);
		this->label4->TabIndex = 10;
		this->label4->Text = L"Максимальная граница диапазона случайных чисел (включительно)";
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label5->Location = System::Drawing::Point(3, 0);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(70, 16);
		this->label5->TabIndex = 12;
		this->label5->Text = L"Введите";
		this->flowLayoutPanel1->Controls->Add(this->label2);
		this->flowLayoutPanel1->Controls->Add(this->super_item);
		this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel1->Location = System::Drawing::Point(3, 19);
		this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		this->flowLayoutPanel1->Size = System::Drawing::Size(493, 28);
		this->flowLayoutPanel1->TabIndex = 13;
		this->flowLayoutPanel2->Controls->Add(this->label3);
		this->flowLayoutPanel2->Controls->Add(this->min_range_random);
		this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel2->Location = System::Drawing::Point(3, 53);
		this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
		this->flowLayoutPanel2->Size = System::Drawing::Size(493, 30);
		this->flowLayoutPanel2->TabIndex = 14;
		this->flowLayoutPanel3->Controls->Add(this->label4);
		this->flowLayoutPanel3->Controls->Add(this->max_rande_random);
		this->flowLayoutPanel3->Location = System::Drawing::Point(3, 89);
		this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
		this->flowLayoutPanel3->Size = System::Drawing::Size(493, 32);
		this->flowLayoutPanel3->TabIndex = 15;
		this->flowLayoutPanel4->Controls->Add(this->label5);
		this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel1);
		this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel2);
		this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel3);
		this->flowLayoutPanel4->Controls->Add(this->use_random);
		this->flowLayoutPanel4->Controls->Add(this->set_inform);
		this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		this->flowLayoutPanel4->Location = System::Drawing::Point(0, 0);
		this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
		this->flowLayoutPanel4->Size = System::Drawing::Size(584, 261);
		this->flowLayoutPanel4->TabIndex = 16;
		this->use_random->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left));
		this->use_random->AutoSize = true;
		this->use_random->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
		this->use_random->Checked = true;
		this->use_random->CheckState = System::Windows::Forms::CheckState::Checked;
		this->use_random->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->use_random->Location = System::Drawing::Point(3, 127);
		this->use_random->Name = L"use_random";
		this->use_random->Size = System::Drawing::Size(370, 17);
		this->use_random->TabIndex = 17;
		this->use_random->Text = L"Задать случайные элементы с помощью счетчика случайных чисел";
		this->use_random->UseVisualStyleBackColor = true;
		this->set_inform->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
		this->set_inform->Location = System::Drawing::Point(182, 150);
		this->set_inform->Name = L"set_inform";
		this->set_inform->Size = System::Drawing::Size(135, 23);
		this->set_inform->TabIndex = 17;
		this->set_inform->Text = L"Ввести данные";
		this->set_inform->UseVisualStyleBackColor = true;
		this->set_inform->Click += gcnew System::EventHandler(this, &InputForm::set_inform_Click);
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(584, 261);
		this->Controls->Add(this->flowLayoutPanel4);
		this->MinimumSize = System::Drawing::Size(600, 300);
		this->Name = L"InputForm";
		this->Text = L"InputForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->super_item))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_range_random))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->max_rande_random))->EndInit();
		this->flowLayoutPanel1->ResumeLayout(false);
		this->flowLayoutPanel1->PerformLayout();
		this->flowLayoutPanel2->ResumeLayout(false);
		this->flowLayoutPanel2->PerformLayout();
		this->flowLayoutPanel3->ResumeLayout(false);
		this->flowLayoutPanel3->PerformLayout();
		this->flowLayoutPanel4->ResumeLayout(false);
		this->flowLayoutPanel4->PerformLayout();
		this->ResumeLayout(false);
	}
};

