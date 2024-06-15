



#pragma once

#include <stdlib.h>
#include <iostream>
#include "InputForm.h"

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
		}
	}
private: 
	// Мои поля
	InputForm^ form_input = nullptr;
	
	// Мои функции
	// Функция выхода из программы
	System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { exit(0);}
	// Функция ввода в программу
	System::Void inputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
		//InputForm frm2;
		if (this->form_input == nullptr) {
			this->form_input = gcnew InputForm();
			this->form_input->Show();
		}


	}

	// То, что сденерировала среда
	System::Windows::Forms::MenuStrip^ menuStrip1;
	System::Windows::Forms::ToolStripMenuItem^ inputToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ calcToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	System::ComponentModel::Container ^components;

	/// Требуемый метод для поддержки конструктора — не изменяйте 
	void InitializeComponent(void){
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->inputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->calcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->inputToolStripMenuItem,
				this->calcToolStripMenuItem, this->exitToolStripMenuItem
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(284, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// inputToolStripMenuItem
		// 
		this->inputToolStripMenuItem->Name = L"inputToolStripMenuItem";
		this->inputToolStripMenuItem->Size = System::Drawing::Size(47, 20);
		this->inputToolStripMenuItem->Text = L"Input";
		this->inputToolStripMenuItem->Click += gcnew System::EventHandler(this, &Program::inputToolStripMenuItem_Click);
		// 
		// calcToolStripMenuItem
		// 
		this->calcToolStripMenuItem->Name = L"calcToolStripMenuItem";
		this->calcToolStripMenuItem->Size = System::Drawing::Size(42, 20);
		this->calcToolStripMenuItem->Text = L"Calc";
		// 
		// exitToolStripMenuItem
		// 
		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
		this->exitToolStripMenuItem->Text = L"Exit";
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Program::exitToolStripMenuItem_Click);
		// 
		// Program
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		this->ClientSize = System::Drawing::Size(284, 161);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->MinimumSize = System::Drawing::Size(300, 200);
		this->Name = L"Program";
		this->Text = L"MyProgramm";
		this->Load += gcnew System::EventHandler(this, &Program::MyForm_Load);
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
	System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
};

