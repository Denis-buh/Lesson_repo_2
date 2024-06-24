#include <iostream>

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
	public:
		InputForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ InputText1;
	protected:

	private: System::Windows::Forms::TextBox^ InputBox1;
	private: System::Windows::Forms::RichTextBox^ InputText2;
	private: System::Windows::Forms::TextBox^ InputBox2;
	private: System::Windows::Forms::Button^ SubmitButton;
	private: System::Windows::Forms::CheckBox^ Sum_needed_or_not;
	private: System::Windows::Forms::CheckBox^ Sort_needed_or_not;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->InputText1 = (gcnew System::Windows::Forms::RichTextBox());
			this->InputBox1 = (gcnew System::Windows::Forms::TextBox());
			this->InputText2 = (gcnew System::Windows::Forms::RichTextBox());
			this->InputBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->Sum_needed_or_not = (gcnew System::Windows::Forms::CheckBox());
			this->Sort_needed_or_not = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// InputText1
			// 
			this->InputText1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InputText1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputText1->Location = System::Drawing::Point(29, 24);
			this->InputText1->Name = L"InputText1";
			this->InputText1->ReadOnly = true;
			this->InputText1->Size = System::Drawing::Size(348, 44);
			this->InputText1->TabIndex = 0;
			this->InputText1->Text = L"Введите последний элемент массива:\n";
			// 
			// InputBox1
			// 
			this->InputBox1->Location = System::Drawing::Point(29, 95);
			this->InputBox1->Name = L"InputBox1";
			this->InputBox1->Size = System::Drawing::Size(348, 20);
			this->InputBox1->TabIndex = 1;
			// 
			// InputText2
			// 
			this->InputText2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InputText2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputText2->Location = System::Drawing::Point(29, 167);
			this->InputText2->Name = L"InputText2";
			this->InputText2->ReadOnly = true;
			this->InputText2->Size = System::Drawing::Size(348, 55);
			this->InputText2->TabIndex = 2;
			this->InputText2->Text = L"Введите параметр счётчика случайных чисел:";
			// 
			// InputBox2
			// 
			this->InputBox2->Location = System::Drawing::Point(29, 253);
			this->InputBox2->Name = L"InputBox2";
			this->InputBox2->Size = System::Drawing::Size(348, 20);
			this->InputBox2->TabIndex = 3;
			// 
			// SubmitButton
			// 
			this->SubmitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SubmitButton->Location = System::Drawing::Point(302, 624);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(75, 23);
			this->SubmitButton->TabIndex = 4;
			this->SubmitButton->Text = L"OK";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &InputForm::SubmitButton_Click);
			// 
			// Sum_needed_or_not
			// 
			this->Sum_needed_or_not->AutoSize = true;
			this->Sum_needed_or_not->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sum_needed_or_not->Location = System::Drawing::Point(29, 372);
			this->Sum_needed_or_not->Name = L"Sum_needed_or_not";
			this->Sum_needed_or_not->Size = System::Drawing::Size(188, 25);
			this->Sum_needed_or_not->TabIndex = 5;
			this->Sum_needed_or_not->Text = L"Вычисление суммы";
			this->Sum_needed_or_not->UseVisualStyleBackColor = true;
			// 
			// Sort_needed_or_not
			// 
			this->Sort_needed_or_not->AutoSize = true;
			this->Sort_needed_or_not->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort_needed_or_not->Location = System::Drawing::Point(29, 440);
			this->Sort_needed_or_not->Name = L"Sort_needed_or_not";
			this->Sort_needed_or_not->Size = System::Drawing::Size(196, 25);
			this->Sort_needed_or_not->TabIndex = 6;
			this->Sort_needed_or_not->Text = L"Сортировка массива";
			this->Sort_needed_or_not->UseVisualStyleBackColor = true;
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 697);
			this->Controls->Add(this->Sort_needed_or_not);
			this->Controls->Add(this->Sum_needed_or_not);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->InputBox2);
			this->Controls->Add(this->InputText2);
			this->Controls->Add(this->InputBox1);
			this->Controls->Add(this->InputText1);
			this->Name = L"InputForm";
			this->Text = L"Ввод значений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
