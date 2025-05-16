#pragma once
#include <msclr\marshal_cppstd.h>
#include "json_work.h"
#include "Information.h"

namespace FloristARM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Сводка для ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		ReportForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			dtp_end->MinDate = dtp_start->Value;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_quit;
	protected:
	private: System::Windows::Forms::Button^ btn_make_report;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dtp_start;
	private: System::Windows::Forms::DateTimePicker^ dtp_end;
	private: System::Windows::Forms::DataGridView^ report_grid;
	private: System::Windows::Forms::Label^ lbl_report;
	private: System::Windows::Forms::Label^ lbl_start_date;
	private: System::Windows::Forms::Label^ lbl_end_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordered;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sold;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ disposed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ostatok;
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
			this->btn_quit = (gcnew System::Windows::Forms::Button());
			this->btn_make_report = (gcnew System::Windows::Forms::Button());
			this->dtp_start = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp_end = (gcnew System::Windows::Forms::DateTimePicker());
			this->report_grid = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_report = (gcnew System::Windows::Forms::Label());
			this->lbl_start_date = (gcnew System::Windows::Forms::Label());
			this->lbl_end_date = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordered = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sold = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->disposed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ostatok = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->report_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_quit
			// 
			this->btn_quit->Location = System::Drawing::Point(425, 710);
			this->btn_quit->Name = L"btn_quit";
			this->btn_quit->Size = System::Drawing::Size(150, 30);
			this->btn_quit->TabIndex = 0;
			this->btn_quit->Text = L"Выход";
			this->btn_quit->UseVisualStyleBackColor = true;
			this->btn_quit->Click += gcnew System::EventHandler(this, &ReportForm::btn_quit_Click);
			// 
			// btn_make_report
			// 
			this->btn_make_report->Location = System::Drawing::Point(275, 110);
			this->btn_make_report->Name = L"btn_make_report";
			this->btn_make_report->Size = System::Drawing::Size(450, 30);
			this->btn_make_report->TabIndex = 1;
			this->btn_make_report->Text = L"Сформировать отчет";
			this->btn_make_report->UseVisualStyleBackColor = true;
			this->btn_make_report->Click += gcnew System::EventHandler(this, &ReportForm::btn_make_report_Click);
			// 
			// dtp_start
			// 
			this->dtp_start->Location = System::Drawing::Point(275, 70);
			this->dtp_start->Name = L"dtp_start";
			this->dtp_start->Size = System::Drawing::Size(200, 26);
			this->dtp_start->TabIndex = 2;
			this->dtp_start->ValueChanged += gcnew System::EventHandler(this, &ReportForm::dtp_start_ValueChanged);
			// 
			// dtp_end
			// 
			this->dtp_end->Location = System::Drawing::Point(525, 70);
			this->dtp_end->Name = L"dtp_end";
			this->dtp_end->Size = System::Drawing::Size(200, 26);
			this->dtp_end->TabIndex = 3;
			this->dtp_end->ValueChanged += gcnew System::EventHandler(this, &ReportForm::dtp_end_ValueChanged);
			// 
			// report_grid
			// 
			this->report_grid->AllowUserToAddRows = false;
			this->report_grid->AllowUserToDeleteRows = false;
			this->report_grid->BackgroundColor = System::Drawing::Color::White;
			this->report_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->report_grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->name, this->ordered,
					this->sold, this->disposed, this->ostatok
			});
			this->report_grid->Location = System::Drawing::Point(10, 210);
			this->report_grid->Name = L"report_grid";
			this->report_grid->ReadOnly = true;
			this->report_grid->RowHeadersWidth = 50;
			this->report_grid->RowTemplate->Height = 24;
			this->report_grid->Size = System::Drawing::Size(960, 460);
			this->report_grid->TabIndex = 4;
			// 
			// lbl_report
			// 
			this->lbl_report->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_report->Location = System::Drawing::Point(10, 170);
			this->lbl_report->Name = L"lbl_report";
			this->lbl_report->Size = System::Drawing::Size(960, 30);
			this->lbl_report->TabIndex = 5;
			this->lbl_report->Text = L"Отчет";
			this->lbl_report->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_start_date
			// 
			this->lbl_start_date->Location = System::Drawing::Point(275, 42);
			this->lbl_start_date->Name = L"lbl_start_date";
			this->lbl_start_date->Size = System::Drawing::Size(200, 25);
			this->lbl_start_date->TabIndex = 6;
			this->lbl_start_date->Text = L"Начальная дата";
			this->lbl_start_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_end_date
			// 
			this->lbl_end_date->Location = System::Drawing::Point(525, 42);
			this->lbl_end_date->Name = L"lbl_end_date";
			this->lbl_end_date->Size = System::Drawing::Size(200, 25);
			this->lbl_end_date->TabIndex = 7;
			this->lbl_end_date->Text = L"Конечная дата";
			this->lbl_end_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// name
			// 
			this->name->HeaderText = L"Наименование";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 200;
			// 
			// ordered
			// 
			this->ordered->HeaderText = L"Заказано";
			this->ordered->MinimumWidth = 6;
			this->ordered->Name = L"ordered";
			this->ordered->ReadOnly = true;
			this->ordered->Width = 177;
			// 
			// sold
			// 
			this->sold->HeaderText = L"Продано";
			this->sold->MinimumWidth = 6;
			this->sold->Name = L"sold";
			this->sold->ReadOnly = true;
			this->sold->Width = 177;
			// 
			// disposed
			// 
			this->disposed->HeaderText = L"Утилизировано";
			this->disposed->MinimumWidth = 6;
			this->disposed->Name = L"disposed";
			this->disposed->ReadOnly = true;
			this->disposed->Width = 177;
			// 
			// ostatok
			// 
			this->ostatok->HeaderText = L"Остаток за период (на кон. д.)";
			this->ostatok->MinimumWidth = 6;
			this->ostatok->Name = L"ostatok";
			this->ostatok->ReadOnly = true;
			this->ostatok->Width = 177;
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->lbl_end_date);
			this->Controls->Add(this->lbl_start_date);
			this->Controls->Add(this->lbl_report);
			this->Controls->Add(this->report_grid);
			this->Controls->Add(this->dtp_end);
			this->Controls->Add(this->dtp_start);
			this->Controls->Add(this->btn_make_report);
			this->Controls->Add(this->btn_quit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ReportForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Отчет";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->report_grid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// когда выбрана начальная дата
	private: System::Void dtp_start_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		report_grid->Rows->Clear();
		dtp_end->MinDate = dtp_start->Value;
	}
	
	// когда выбрана конечная дата
	private: System::Void dtp_end_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		report_grid->Rows->Clear();
	}

	// кнопка выхода
	private: System::Void btn_quit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	// кнопка составления отчета
	private: System::Void btn_make_report_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> tov = get_tov();
		std::map<std::string, Info> rep_map;

		for (int i = 0; i < tov.size(); i++)
			rep_map.insert(std::make_pair(convert_to_utf8(tov[i]), Info()));

		DateTime^ start_date = dtp_start->Value;
		DateTime^ end_date = dtp_end->Value;
		DateTime^ cur_date = start_date;

		while (cur_date->Date <= end_date->Date)
		{
			String^ Str_sd = cur_date->ToString("dd.MM.yyyy"); // переводим дату в строку
			String^ String_filename = "dates/" + Str_sd + ".json"; // System::String имя файла
			std::string filename = marshal_as<std::string>(String_filename);

			add_to_report(filename, rep_map);
			cur_date = cur_date->AddDays(1);
		}

		// создание строк
		report_grid->Rows->Clear();
		for (int i = 0; i < tov.size(); i++)
		{
			array<Object^>^ row_values = gcnew array<Object^>(report_grid->ColumnCount);
			row_values[0] = marshal_as<System::String^>(tov[i]);
			row_values[1] = rep_map[convert_to_utf8(tov[i])].ordered_count;
			row_values[2] = rep_map[convert_to_utf8(tov[i])].sold_count;
			row_values[3] = rep_map[convert_to_utf8(tov[i])].disposed_count;
			row_values[4] = rep_map[convert_to_utf8(tov[i])].ordered_count -
				rep_map[convert_to_utf8(tov[i])].sold_count -
				rep_map[convert_to_utf8(tov[i])].disposed_count;

			report_grid->Rows->Add(row_values);
		}
	}

};
}
