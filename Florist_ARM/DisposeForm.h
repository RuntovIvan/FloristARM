#pragma once
#include <msclr\marshal_cppstd.h>
#include "json_work.h"
#include "convert_to_utf8.h"

namespace FloristARM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Сводка для DisposeForm
	/// </summary>
	public ref class DisposeForm : public System::Windows::Forms::Form
	{
	public:
		DisposeForm(void)
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
		~DisposeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_date;
	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ lbl_count;
	private: System::Windows::Forms::DateTimePicker^ dtp_dispose;
	private: System::Windows::Forms::ComboBox^ comboBox_dispose;
	private: System::Windows::Forms::NumericUpDown^ numeric_dispose;
	protected:
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_save;
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
			this->lbl_date = (gcnew System::Windows::Forms::Label());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_count = (gcnew System::Windows::Forms::Label());
			this->dtp_dispose = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_dispose = (gcnew System::Windows::Forms::ComboBox());
			this->numeric_dispose = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_dispose))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_date
			// 
			this->lbl_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_date->Location = System::Drawing::Point(95, 45);
			this->lbl_date->Name = L"lbl_date";
			this->lbl_date->Size = System::Drawing::Size(145, 25);
			this->lbl_date->TabIndex = 4;
			this->lbl_date->Text = L"Дата";
			this->lbl_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_name
			// 
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_name->Location = System::Drawing::Point(95, 100);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(145, 25);
			this->lbl_name->TabIndex = 7;
			this->lbl_name->Text = L"Наименование";
			this->lbl_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_count
			// 
			this->lbl_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_count->Location = System::Drawing::Point(95, 155);
			this->lbl_count->Name = L"lbl_count";
			this->lbl_count->Size = System::Drawing::Size(145, 25);
			this->lbl_count->TabIndex = 8;
			this->lbl_count->Text = L"Количество";
			this->lbl_count->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dtp_dispose
			// 
			this->dtp_dispose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dtp_dispose->Location = System::Drawing::Point(287, 45);
			this->dtp_dispose->Name = L"dtp_dispose";
			this->dtp_dispose->Size = System::Drawing::Size(200, 26);
			this->dtp_dispose->TabIndex = 9;
			// 
			// comboBox_dispose
			// 
			this->comboBox_dispose->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_dispose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_dispose->FormattingEnabled = true;
			this->comboBox_dispose->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Альстромерия", L"Гвоздика", L"Лилия",
					L"Роза кустовая"
			});
			this->comboBox_dispose->Location = System::Drawing::Point(287, 100);
			this->comboBox_dispose->Name = L"comboBox_dispose";
			this->comboBox_dispose->Size = System::Drawing::Size(200, 28);
			this->comboBox_dispose->TabIndex = 10;
			// 
			// numeric_dispose
			// 
			this->numeric_dispose->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numeric_dispose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numeric_dispose->Location = System::Drawing::Point(287, 155);
			this->numeric_dispose->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numeric_dispose->Name = L"numeric_dispose";
			this->numeric_dispose->Size = System::Drawing::Size(200, 26);
			this->numeric_dispose->TabIndex = 11;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_cancel->Location = System::Drawing::Point(116, 215);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(150, 30);
			this->btn_cancel->TabIndex = 12;
			this->btn_cancel->Text = L"Отмена";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &DisposeForm::btn_cancel_Click);
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_save->Location = System::Drawing::Point(316, 215);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(150, 30);
			this->btn_save->TabIndex = 13;
			this->btn_save->Text = L"Сохранить";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &DisposeForm::btn_save_Click);
			// 
			// DisposeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 253);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->numeric_dispose);
			this->Controls->Add(this->comboBox_dispose);
			this->Controls->Add(this->dtp_dispose);
			this->Controls->Add(this->lbl_count);
			this->Controls->Add(this->lbl_name);
			this->Controls->Add(this->lbl_date);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"DisposeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Утиль";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_dispose))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
// кнопка выхода из формы утилизации
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

// кнопка сохранения утилизации
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ position = comboBox_dispose->Text; // товар
		int count = Convert::ToInt32(numeric_dispose->Value); // количество

		// если товар не выбран
		if (position == "")
		{
			MessageBox::Show("Товар не выбран.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// берем дату и переводим в имя файла
		DateTime^ selected_date = dtp_dispose->Value; // запоминаем дату
		String^ Str_sd = selected_date->ToString("dd.MM.yyyy"); // переводим дату в строку
		String^ String_filename = "dates/" + Str_sd + ".json"; // System::String имя файла
		std::string filename = marshal_as<std::string>(String_filename);

		// преобразование имени товара
		std::string position_name = marshal_as<std::string>(position);
		position_name = convert_to_utf8(position_name);

		check_file(filename);
		make_dispose(filename, position_name, count);

		dtp_dispose->Value = DateTime::Now;
		comboBox_dispose->Text = "";
		numeric_dispose->Value = 0;

		MessageBox::Show("Данные сохранены.", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
