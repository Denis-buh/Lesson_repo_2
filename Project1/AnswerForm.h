
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>



namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Summary for AnswerForm
	/// </summary>
	public ref class AnswerForm : public System::Windows::Forms::Form
	{
	public:
		AnswerForm(void)
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
		~AnswerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ AnswerText1;
	private: System::Windows::Forms::TextBox^ AnswerBox1;
	private: System::Windows::Forms::RichTextBox^ AnswerText2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:


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
			this->AnswerText1 = (gcnew System::Windows::Forms::RichTextBox());
			this->AnswerBox1 = (gcnew System::Windows::Forms::TextBox());
			this->AnswerText2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// AnswerText1
			// 
			this->AnswerText1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AnswerText1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AnswerText1->Location = System::Drawing::Point(31, 27);
			this->AnswerText1->Name = L"AnswerText1";
			this->AnswerText1->ReadOnly = true;
			this->AnswerText1->Size = System::Drawing::Size(421, 96);
			this->AnswerText1->TabIndex = 7;
			this->AnswerText1->Text = L"Запрашиваемая сумма:";
			// 
			// AnswerBox1
			// 
			this->AnswerBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AnswerBox1->Location = System::Drawing::Point(31, 71);
			this->AnswerBox1->Name = L"AnswerBox1";
			this->AnswerBox1->ReadOnly = true;
			this->AnswerBox1->Size = System::Drawing::Size(462, 29);
			this->AnswerBox1->TabIndex = 8;
			// 
			// AnswerText2
			// 
			this->AnswerText2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AnswerText2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AnswerText2->Location = System::Drawing::Point(31, 214);
			this->AnswerText2->Name = L"AnswerText2";
			this->AnswerText2->ReadOnly = true;
			this->AnswerText2->Size = System::Drawing::Size(462, 96);
			this->AnswerText2->TabIndex = 9;
			this->AnswerText2->Text = L"Отсортированный массив:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(31, 281);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(462, 29);
			this->textBox1->TabIndex = 10;
			// 
			// AnswerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 507);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->AnswerText2);
			this->Controls->Add(this->AnswerBox1);
			this->Controls->Add(this->AnswerText1);
			this->Name = L"AnswerForm";
			this->Text = L"Ответ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}


