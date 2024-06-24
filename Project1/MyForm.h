#include "InputForm.h"
#include "AnswerForm.h"
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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		vector<int> createArray(int lastElement) {
			vector<int> array(15);

			// ������������� ���������� ��������� �����
			srand(time(0));

			// ��������� ������ ���� ��������� � 10 ��� ������ ����� ��������
			for (int i = 0; i < 3; ++i) {
				array[i] = i * 10;
			}

			// ���������� ��������� ��������� ���������� �������
			for (int i = 3; i < 14; ++i) {
				array[i] = rand() % 201 - 100; // ��������� ����� �� -100 �� 100
			}

			// ��������� ���������� ��������
			array[14] = lastElement;

			return array;
		}

		int sumAfterMinOddIndices(const vector<int>& array) {
			// ����� ������ ������������ ��������
			auto minElementIter = min_element(array.begin(), array.end());
			int minIndex = distance(array.begin(), minElementIter);

			// ��������� ����� ���������, ������������� ����� ������������ � ������� �� �������� ������
			int sum = 0;
			for (size_t i = minIndex + 1; i < array.size(); ++i) {
				if (i % 2 != 0) {
					sum += array[i];
				}
			}

			return sum;
		}

		int main_computing() {
			int lastElement;
			cout << "������� ��������� ������� �������: ";
			
			vector<int> array = createArray(lastElement);
			cout << "����������� ������: ";
			for (int num : array) {
				cout << num << " ";
			}
			cout << endl;

			// ���������� ����� ��������� ����� ������������, ������� �� �������� ������
			int sum = sumAfterMinOddIndices(array);
			cout << "����� ���������, ������������� ����� ������������ � ������� �� �������� ������: " << sum << endl;

			// ���������� ������� �� ��������
			sort(array.begin(), array.end(), greater<int>());
			cout << "��������������� ������: ";
			for (int num : array) {
				cout << num << " ";
			}
			cout << endl;
			return 0;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ MainInfo;
	protected:

	protected:


	private: System::Windows::Forms::Button^ CalcButton;
	private: System::Windows::Forms::Button^ ExitButton;








	private: System::Windows::Forms::Button^ InputButton;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MainInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->CalcButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->InputButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MainInfo
			// 
			this->MainInfo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MainInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainInfo->Location = System::Drawing::Point(28, 12);
			this->MainInfo->Name = L"MainInfo";
			this->MainInfo->ReadOnly = true;
			this->MainInfo->Size = System::Drawing::Size(621, 195);
			this->MainInfo->TabIndex = 1;
			this->MainInfo->Text = resources->GetString(L"MainInfo.Text");
			// 
			// CalcButton
			// 
			this->CalcButton->AutoSize = true;
			this->CalcButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CalcButton->Location = System::Drawing::Point(289, 214);
			this->CalcButton->Name = L"CalcButton";
			this->CalcButton->Size = System::Drawing::Size(75, 24);
			this->CalcButton->TabIndex = 3;
			this->CalcButton->Text = L"Calc";
			this->CalcButton->UseCompatibleTextRendering = true;
			this->CalcButton->UseVisualStyleBackColor = true;
			this->CalcButton->Click += gcnew System::EventHandler(this, &MyForm::CalcButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->AutoSize = true;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->Location = System::Drawing::Point(551, 214);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(75, 23);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// InputButton
			// 
			this->InputButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->InputButton->Location = System::Drawing::Point(28, 213);
			this->InputButton->Name = L"InputButton";
			this->InputButton->Size = System::Drawing::Size(75, 23);
			this->InputButton->TabIndex = 9;
			this->InputButton->Text = L"Input";
			this->InputButton->UseVisualStyleBackColor = true;
			this->InputButton->Click += gcnew System::EventHandler(this, &MyForm::InputButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(694, 276);
			this->Controls->Add(this->InputButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->CalcButton);
			this->Controls->Add(this->MainInfo);
			this->Name = L"MyForm";
			this->Text = L"�������� �.�. 3105-�� 9 ���.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




private: System::Void InputButton_Click(System::Object^ sender, System::EventArgs^ e) {
	InputForm form_input;
	form_input.ShowDialog(this);
}
private: System::Void CalcButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AnswerForm form_input;
	form_input.ShowDialog(this);
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
};
}
