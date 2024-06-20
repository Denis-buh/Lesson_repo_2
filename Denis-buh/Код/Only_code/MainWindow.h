



#pragma once


#include <iostream>
#include "InputForm.h"
#include "Show_inform.h"
#include "Exercise.h"
#include "my_arr.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class Program : public System::Windows::Forms::Form{
public:
	Program(void){
		InitializeComponent();
	}

protected:
	~Program()
	{
		if (components)
		{
			delete components;
			delete my_arrey; 
		}
	}

private:
	My_arr<int>* my_arrey = nullptr;


	System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {exit(0);}

	System::Void inputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
		InputForm form_input;
		form_input.ShowDialog(this);
		std::vector<int> res = form_input.get_inform(); 
		if (res.size()) {
			delete my_arrey;
			my_arrey = new My_arr<int>(res);
		}
		else {
			MessageBox::Show("Вы не ввели данные в программу. Для ввода данных вновь откройте форму для ввода данных и введите данные.",
				"Данные не были введены", MessageBoxButtons::OK,
				MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1,
				MessageBoxOptions::DefaultDesktopOnly
			);
		}
	}

	System::Void calcToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->my_arrey == nullptr) {
			MessageBox::Show("Вы не ввели данные в программу. Для ввода данных откройте форму для ввода данных и введите данные.",
				"Данные не были введены", MessageBoxButtons::OK,
				MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1,
				MessageBoxOptions::DefaultDesktopOnly
			);
			return;
		}
		Show_inform<int> form_show(*(this->my_arrey));
		form_show.ShowDialog(this);
	}

	System::Void заданиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Exercise form_exep;
		form_exep.ShowDialog(this);
	}


	System::Windows::Forms::MenuStrip^ menuStrip1;
	System::Windows::Forms::ToolStripMenuItem^ inputToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ calcToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	System::ComponentModel::Container ^components;
	System::Windows::Forms::ToolStripMenuItem^ Exercise_menu;

	void InitializeComponent(void){
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->inputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->calcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->Exercise_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();

		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->inputToolStripMenuItem,
				this->calcToolStripMenuItem, this->exitToolStripMenuItem, this->Exercise_menu
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(284, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";

		this->inputToolStripMenuItem->Name = L"inputToolStripMenuItem";
		this->inputToolStripMenuItem->Size = System::Drawing::Size(47, 20);
		this->inputToolStripMenuItem->Text = L"Input";
		this->inputToolStripMenuItem->Click += gcnew System::EventHandler(this, &Program::inputToolStripMenuItem_Click);

		this->calcToolStripMenuItem->Name = L"calcToolStripMenuItem";
		this->calcToolStripMenuItem->Size = System::Drawing::Size(42, 20);
		this->calcToolStripMenuItem->Text = L"Calc";
		this->calcToolStripMenuItem->Click += gcnew System::EventHandler(this, &Program::calcToolStripMenuItem_Click);

		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
		this->exitToolStripMenuItem->Text = L"Exit";
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Program::exitToolStripMenuItem_Click);

		this->Exercise_menu->Name = L"Exercise_menu";
		this->Exercise_menu->Size = System::Drawing::Size(64, 20);
		this->Exercise_menu->Text = L"Задание";
		this->Exercise_menu->Click += gcnew System::EventHandler(this, &Program::заданиеToolStripMenuItem_Click);

		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		this->ClientSize = System::Drawing::Size(284, 161);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->MinimumSize = System::Drawing::Size(300, 200);
		this->Name = L"Program";
		this->Text = L"Буханов Денис Евгеньевич, группа 3105 об, 3 вариант";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
};

