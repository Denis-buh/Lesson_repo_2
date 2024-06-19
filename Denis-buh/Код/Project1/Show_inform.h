#pragma once



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Show_inform
	/// </summary>
	public ref class Show_inform : public System::Windows::Forms::Form
	{
	public:
		Show_inform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Show_inform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ sort_array;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ array_not_sorted;
	private: System::Windows::Forms::Label^ array_sorted;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sort_array = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->array_not_sorted = (gcnew System::Windows::Forms::Label());
			this->array_sorted = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Массив до сортировки ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Массив после сортировки";
			this->label2->Click += gcnew System::EventHandler(this, &Show_inform::label2_Click);
			// 
			// sort_array
			// 
			this->sort_array->Location = System::Drawing::Point(3, 55);
			this->sort_array->Name = L"sort_array";
			this->sort_array->Size = System::Drawing::Size(138, 23);
			this->sort_array->TabIndex = 4;
			this->sort_array->Text = L"Выполнить сортировку";
			this->sort_array->UseVisualStyleBackColor = true;
			this->sort_array->Click += gcnew System::EventHandler(this, &Show_inform::button1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->array_not_sorted);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->array_sorted);
			this->flowLayoutPanel1->Controls->Add(this->sort_array);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(384, 111);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// array_not_sorted
			// 
			this->array_not_sorted->AutoSize = true;
			this->array_not_sorted->Location = System::Drawing::Point(3, 13);
			this->array_not_sorted->Name = L"array_not_sorted";
			this->array_not_sorted->Size = System::Drawing::Size(119, 13);
			this->array_not_sorted->TabIndex = 5;
			this->array_not_sorted->Text = L"массив до изменений";
			this->array_not_sorted->Click += gcnew System::EventHandler(this, &Show_inform::label3_Click);
			// 
			// array_sorted
			// 
			this->array_sorted->AutoSize = true;
			this->array_sorted->Location = System::Drawing::Point(3, 39);
			this->array_sorted->Name = L"array_sorted";
			this->array_sorted->Size = System::Drawing::Size(326, 13);
			this->array_sorted->TabIndex = 6;
			this->array_sorted->Text = L"Для отображения наснимите кнопку «Выполнить сортировку»";
			// 
			// Show_inform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(384, 111);
			this->Controls->Add(this->flowLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(400, 150);
			this->Name = L"Show_inform";
			this->Text = L"Show_inform";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

