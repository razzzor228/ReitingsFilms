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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(System::Windows::Forms::Form^ parent_form)
		{
			InitializeComponent();
			parentForm_ = parent_form;
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Genre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private:System::Windows::Forms::Form^ parentForm_;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Reit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(585, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 31;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Name, this->Genre,
					this->Reit
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(569, 191);
			this->dataGridView1->TabIndex = 32;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Название фильма";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Genre
			// 
			this->Genre->HeaderText = L"Жанр";
			this->Genre->MinimumWidth = 6;
			this->Genre->Name = L"Genre";
			this->Genre->Width = 125;
			// 
			// Reit
			// 
			this->Reit->HeaderText = L"Рейтинг";
			this->Reit->MinimumWidth = 6;
			this->Reit->Name = L"Reit";
			this->Reit->Width = 125;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(499, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 33);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(150, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 42);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Рейтинг↓";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(15, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 42);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Рейтинг↑";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(10, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 29);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Поиск рейтинга:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(209, 343);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 48;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox_KeyPress);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(329, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 33);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Вывести";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(642, 395);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 46)) {
				e->Handled = true;
			}
		}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		wstring all = Get_vector_s();
		wchar_t c;
		int check_name = 0, check_genre = 0, check_reit = 0;
		wstring s, name, genre, reit;
		for (int i = 0; i < all.size(); i++) {
			if (check_name == 0 && check_genre == 0 && check_reit == 0) {
				s = s + all[i];
			}
			if (s == L"=нц\n") {
				check_name = 1;
				s = L"";
				continue;
			}
			if (check_name == 1) {
				if (all[i] == '\n') {
					name = s;
					check_genre = 1;
					check_name = 0;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (check_genre == 1) {
				if (all[i] == '\n') {
					genre = s;
					check_genre = 0;
					check_reit = 1;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (check_reit == 1) {
				if (all[i] == '\n') {
					reit = s;
					check_reit = 0;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (s == L"=кц\n") {
				String^ txt_name = msclr::interop::marshal_as<String^>(name);
				String^ txt_genre = msclr::interop::marshal_as<String^>(genre);
				String^ txt_reit = msclr::interop::marshal_as<String^>(reit);
				txt_reit = txt_reit + L"/10";
				dataGridView1->Rows->Add(txt_name, txt_genre, txt_reit);
				delete txt_name;
				delete txt_genre;
				delete txt_reit;
				s = L"";
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		parentForm_->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		wstring all = Get_vector_s();
		wchar_t c;
		int check_name = 0, check_genre = 0, check_reit = 0;
		wstring s, name, genre, reit;
		for (int i = 0; i < all.size(); i++) {
			if (check_name == 0 && check_genre == 0 && check_reit == 0) {
				s = s + all[i];
			}
			if (s == L"=нц\n") {
				check_name = 1;
				s = L"";
				continue;
			}
			if (check_name == 1) {
				if (all[i] == '\n') {
					name = s;
					check_genre = 1;
					check_name = 0;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (check_genre == 1) {
				if (all[i] == '\n') {
					genre = s;
					check_genre = 0;
					check_reit = 1;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (check_reit == 1) {
				if (all[i] == '\n') {
					reit = s;
					check_reit = 0;
					s = L"";
					continue;
				}
				else s = s + all[i];
			}
			if (s == L"=кц\n") {
				String^ txt_name = msclr::interop::marshal_as<String^>(name);
				String^ txt_genre = msclr::interop::marshal_as<String^>(genre);
				String^ txt_reit = msclr::interop::marshal_as<String^>(reit);
				txt_reit = txt_reit + L"/10";
				dataGridView1->Rows->Add(txt_name, txt_genre, txt_reit);
				delete txt_name;
				delete txt_genre;
				delete txt_reit;
				s = L"";
			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	wstring all = Get_set_minus();
	wchar_t c;
	int check_name = 0, check_genre = 0, check_reit = 0;
	wstring s, name, genre, reit;
	for (int i = 0; i < all.size(); i++) {
		if (check_name == 0 && check_genre == 0 && check_reit == 0) {
			s = s + all[i];
		}
		if (s == L"=нц\n") {
			check_name = 1;
			s = L"";
			continue;
		}
		if (check_name == 1) {
			if (all[i] == '\n') {
				name = s;
				check_genre = 1;
				check_name = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_genre == 1) {
			if (all[i] == '\n') {
				genre = s;
				check_genre = 0;
				check_reit = 1;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_reit == 1) {
			if (all[i] == '\n') {
				reit = s;
				check_reit = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (s == L"=кц\n") {
			String^ txt_name = msclr::interop::marshal_as<String^>(name);
			String^ txt_genre = msclr::interop::marshal_as<String^>(genre);
			String^ txt_reit = msclr::interop::marshal_as<String^>(reit);
			txt_reit = txt_reit + L"/10";
			dataGridView1->Rows->Add(txt_name, txt_genre, txt_reit);
			delete txt_name;
			delete txt_genre;
			delete txt_reit;
			s = L"";
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	wstring all = Get_set_plus();
	wchar_t c;
	int check_name = 0, check_genre = 0, check_reit = 0;
	wstring s, name, genre, reit;
	for (int i = 0; i < all.size(); i++) {
		if (check_name == 0 && check_genre == 0 && check_reit == 0) {
			s = s + all[i];
		}
		if (s == L"=нц\n") {
			check_name = 1;
			s = L"";
			continue;
		}
		if (check_name == 1) {
			if (all[i] == '\n') {
				name = s;
				check_genre = 1;
				check_name = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_genre == 1) {
			if (all[i] == '\n') {
				genre = s;
				check_genre = 0;
				check_reit = 1;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_reit == 1) {
			if (all[i] == '\n') {
				reit = s;
				check_reit = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (s == L"=кц\n") {
			String^ txt_name = msclr::interop::marshal_as<String^>(name);
			String^ txt_genre = msclr::interop::marshal_as<String^>(genre);
			String^ txt_reit = msclr::interop::marshal_as<String^>(reit);
			txt_reit = txt_reit + L"/10";
			dataGridView1->Rows->Add(txt_name, txt_genre, txt_reit);
			delete txt_name;
			delete txt_genre;
			delete txt_reit;
			s = L"";
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	int num = System::Convert::ToInt32(textBox1->Text);
	wstring all = Get_equal_range(num);
	int check_name = 0, check_genre = 0, check_reit = 0;
	wstring s, name, genre, reit;
	for (int i = 0; i < all.size(); i++) {
		if (check_name == 0 && check_genre == 0 && check_reit == 0) {
			s = s + all[i];
		}
		if (s == L"=нц\n") {
			check_name = 1;
			s = L"";
			continue;
		}
		if (check_name == 1) {
			if (all[i] == '\n') {
				name = s;
				check_genre = 1;
				check_name = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_genre == 1) {
			if (all[i] == '\n') {
				genre = s;
				check_genre = 0;
				check_reit = 1;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (check_reit == 1) {
			if (all[i] == '\n') {
				reit = s;
				check_reit = 0;
				s = L"";
				continue;
			}
			else s = s + all[i];
		}
		if (s == L"=кц\n") {
			String^ txt_name = msclr::interop::marshal_as<String^>(name);
			String^ txt_genre = msclr::interop::marshal_as<String^>(genre);
			String^ txt_reit = msclr::interop::marshal_as<String^>(reit);
			txt_reit = txt_reit + L"/10";
			dataGridView1->Rows->Add(txt_name, txt_genre, txt_reit);
			delete txt_name;
			delete txt_genre;
			delete txt_reit;
			s = L"";
		}
	}
}
};
}
