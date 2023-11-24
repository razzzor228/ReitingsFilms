#pragma once
#include "dll_films/dll_films.h"
#pragma comment(lib, "bin\\dllfilms.lib")
#include <msclr\marshal_cppstd.h>
#include <string>
namespace ReitingsFilms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(System::Windows::Forms::Form^ parent_form)
		{
			InitializeComponent();
			parentForm_ = parent_form;
		}
	private: System::Windows::Forms::Label^ label4;
	public:
	private:System::Windows::Forms::Form^ parentForm_;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;




	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_name;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(555, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 44;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(247, 113);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 24);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(223, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 45);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(132, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 29);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Рейтинг:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(247, 75);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(209, 22);
			this->textBox_name->TabIndex = 33;
			this->textBox_name->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox_name_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(118, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 29);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Название:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(73, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 29);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Жанр фильма:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(247, 150);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 24);
			this->comboBox2->TabIndex = 45;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(196, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 29);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Идёт регистрация";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(612, 325);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = L"Идёт регистрация";
		comboBox1->Items->Add(L"Биографический");
		comboBox1->Items->Add(L"Боевик");
		comboBox1->Items->Add(L"Детектив");
		comboBox1->Items->Add(L"Документальный");
		comboBox1->Items->Add(L"Драма");
		comboBox1->Items->Add(L"Исторический");
		comboBox1->Items->Add(L"Камедия");
		comboBox1->Items->Add(L"Криминал");
		comboBox1->Items->Add(L"Мелодрама");
		comboBox1->Items->Add(L"Мистика");
		comboBox1->Items->Add(L"Мультфильм");
		comboBox1->Items->Add(L"Мюзикл");
		comboBox1->Items->Add(L"Научный");
		comboBox1->Items->Add(L"Нуар");
		comboBox1->Items->Add(L"Приключения");
		comboBox1->Items->Add(L"Ужасы");
		comboBox1->Items->Add(L"Триллер");
		comboBox1->Items->Add(L"Фэнтези");

		comboBox2->Items->Add(L"1");
		comboBox2->Items->Add(L"2");
		comboBox2->Items->Add(L"3");
		comboBox2->Items->Add(L"4");
		comboBox2->Items->Add(L"5");
		comboBox2->Items->Add(L"6");
		comboBox2->Items->Add(L"7");
		comboBox2->Items->Add(L"8");
		comboBox2->Items->Add(L"9");
		comboBox2->Items->Add(L"10");
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	parentForm_->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int check = 0;
	if (comboBox1->Text == "") {
		check = 1;
	}
	if (textBox_name->Text == "") {
		check = 1;
	}
	if (comboBox2->Text == "") {
		check = 1;
	}
	if (check == 0) {
		String^ Name = textBox_name->Text;
		wstring wName = msclr::interop::marshal_as<wstring>(Name);
		String^ Genre = comboBox1->Text;
		wstring wGenre = msclr::interop::marshal_as<wstring>(Genre);
		Plus(wName, wGenre, System::Convert::ToInt32(comboBox2->Text));
		comboBox1->Text = "";
		textBox_name->Text = "";
		comboBox2->Text = "";
		label4->Text = L"Успешно!";
	}
	check = 0;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
