



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

class My_Random {
public:
	My_Random() {std::srand(time(NULL));}

	void set_range(int min_range, int max_range) {
		if (min_range >= max_range) {
			throw std::invalid_argument("Верхняя граница для диапазона рандомных чисел должна быть больше нижней границы.");
		}
		this->del_range();
		this->min_range = new int(min_range);
		this->max_range = new int(max_range);
	}

	int randint() {
		int min = *min_range;
		int max = *max_range;
		return ((rand() % (max - min + 1)) + min);
	}

	bool check_range() {
		if (this->min_range == nullptr){
			return false;
		}
		if (this->max_range == nullptr) {
			return false;
		}
		return true; 
	}

	~My_Random() { this->del_range(); }

protected:
	void del_range() {
		delete this->min_range;
		this->min_range = nullptr;
		delete this->max_range;
		this->max_range = nullptr;
	}

private:
	int* min_range = nullptr;
	int* max_range = nullptr;
};

My_Random random;

public ref class InputForm : public System::Windows::Forms::Form {
public:
	InputForm(void) {
		InitializeComponent();
	}

	std::vector<int> get_inform() {
		if (random.check_range()) {
			std::vector<int> items(15);
			for (int i = 0; i < 14; i += 1) {
				items[i] = random.randint();
			}

			for (int i = 0; i < 3; i += 1) {
				if (items[i] > 0) {
					items[i] = (i + 1) * 10;
				}
				else {
					items[i] = (i + 1) * -10;
				}
			}
			items[14] = int(this->super_item->Value);
			return (items);
		}
		std::vector<int> items(0);
		return (items);
	}

protected:
	~InputForm() {
		if (components) {
			delete components;
		}
	}
protected:

private:
	System::Void set_inform_Click(System::Object^ sender, System::EventArgs^ e) {
		try  {random.set_range(int(this->min_range_random->Value), int(this->max_rande_random->Value));}
		catch (std::invalid_argument) {
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
	System::Windows::Forms::Button^ set_inform;
	System::ComponentModel::Container^ components;
	System::Windows::Forms::CheckBox^ Enlarge_first_elements;

	void InitializeComponent(void) {
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->super_item = (gcnew System::Windows::Forms::NumericUpDown());
		this->min_range_random = (gcnew System::Windows::Forms::NumericUpDown());
		this->max_rande_random = (gcnew System::Windows::Forms::NumericUpDown());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->set_inform = (gcnew System::Windows::Forms::Button());
		this->Enlarge_first_elements = (gcnew System::Windows::Forms::CheckBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->super_item))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_range_random))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->max_rande_random))->BeginInit();

		this->label2->Location = System::Drawing::Point(12, 37);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(156, 13);
		this->label2->TabIndex = 1;
		this->label2->Text = L"Последний элемент массива";

		this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
		this->label3->Location = System::Drawing::Point(12, 58);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(348, 13);
		this->label3->TabIndex = 2;
		this->label3->Text = L"Минимальная граница диапазона случайных чисел (включительно)";
		this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

		this->super_item->Location = System::Drawing::Point(174, 35);
		this->super_item->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->super_item->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->super_item->Name = L"super_item";
		this->super_item->Size = System::Drawing::Size(126, 20);
		this->super_item->TabIndex = 7;
		this->super_item->Tag = L"";
		this->super_item->ThousandsSeparator = true;

		this->min_range_random->Location = System::Drawing::Point(366, 56);
		this->min_range_random->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->min_range_random->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->min_range_random->Name = L"min_range_random";
		this->min_range_random->Size = System::Drawing::Size(120, 20);
		this->min_range_random->TabIndex = 8;
		this->min_range_random->ThousandsSeparator = true;
		this->min_range_random->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });

		this->max_rande_random->Location = System::Drawing::Point(372, 90);
		this->max_rande_random->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->max_rande_random->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
		this->max_rande_random->Name = L"max_rande_random";
		this->max_rande_random->Size = System::Drawing::Size(120, 20);
		this->max_rande_random->TabIndex = 9;
		this->max_rande_random->ThousandsSeparator = true;
		this->max_rande_random->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });

		this->label4->Location = System::Drawing::Point(12, 92);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(354, 13);
		this->label4->TabIndex = 10;
		this->label4->Text = L"Максимальная граница диапазона случайных чисел (включительно)";

		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label5->Location = System::Drawing::Point(12, 9);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(66, 16);
		this->label5->TabIndex = 12;
		this->label5->Text = L"Введите:";

		this->set_inform->Location = System::Drawing::Point(15, 166);
		this->set_inform->Name = L"set_inform";
		this->set_inform->Size = System::Drawing::Size(135, 23);
		this->set_inform->TabIndex = 17;
		this->set_inform->Text = L"Ввести данные";
		this->set_inform->UseVisualStyleBackColor = true;
		this->set_inform->Click += gcnew System::EventHandler(this, &InputForm::set_inform_Click);

		this->Enlarge_first_elements->AutoSize = true;
		this->Enlarge_first_elements->Location = System::Drawing::Point(15, 130);
		this->Enlarge_first_elements->Name = L"Enlarge_first_elements";
		this->Enlarge_first_elements->Size = System::Drawing::Size(426, 17);
		this->Enlarge_first_elements->TabIndex = 18;
		this->Enlarge_first_elements->Text = L"Увеличить первые 3 элемента массива в 10 раз относительно своих номеров";
		this->Enlarge_first_elements->UseVisualStyleBackColor = true;

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(584, 261);
		this->Controls->Add(this->Enlarge_first_elements);
		this->Controls->Add(this->max_rande_random);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->min_range_random);
		this->Controls->Add(this->set_inform);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->super_item);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label5);
		this->MinimumSize = System::Drawing::Size(600, 300);
		this->Name = L"InputForm";
		this->Text = L"InputForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->super_item))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_range_random))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->max_rande_random))->EndInit();
	}
};
