#pragma once
#include <msclr\marshal_cppstd.h>

#include "OrderForm.h"
#include "SellForm.h"
#include "DisposeForm.h"
#include "ReportForm.h"
#include "json_work.h"

namespace FloristARM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public: 
		bool is_checked = false;
		bool is_clicked = false;
		int total_warns = 0;
		float rotationAngle = 0.0;
		DateTime startTime;
		DateTime startTimeClick;
		bool isRotating = false;
		int min_ostatok = 10;
		


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnWarn;

	private: System::Windows::Forms::PictureBox^ flowerBox;
	private: System::Windows::Forms::Timer^ waitingTimer;
	private: System::Windows::Forms::Timer^ rotationTimer;
	
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			rep_and_warn(customCalendar1->selectedDate);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btn_order;
	private: System::Windows::Forms::Button^ btn_sell;
	private: System::Windows::Forms::Button^ btn_dispose;
	private: System::Windows::Forms::Button^ btn_report;


	private: System::Windows::Forms::Label^ label1;
	private: CalebdarControl::CustomCalendar^ customCalendar1;
	private: System::Windows::Forms::DataGridView^ main_grid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordered;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sold;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ disposed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ostatok;
	private: System::ComponentModel::IContainer^ components;



	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->btn_order = (gcnew System::Windows::Forms::Button());
			this->btn_sell = (gcnew System::Windows::Forms::Button());
			this->btn_dispose = (gcnew System::Windows::Forms::Button());
			this->btn_report = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->main_grid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordered = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sold = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->disposed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ostatok = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customCalendar1 = (gcnew CalebdarControl::CustomCalendar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnWarn = (gcnew System::Windows::Forms::Button());
			this->flowerBox = (gcnew System::Windows::Forms::PictureBox());
			this->rotationTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->waitingTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flowerBox))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_order
			// 
			this->btn_order->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_order->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_order->FlatAppearance->BorderSize = 5;
			this->btn_order->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_order->Location = System::Drawing::Point(801, 20);
			this->btn_order->Name = L"btn_order";
			this->btn_order->Size = System::Drawing::Size(320, 85);
			this->btn_order->TabIndex = 2;
			this->btn_order->Text = L"Заказ";
			this->btn_order->UseVisualStyleBackColor = false;
			this->btn_order->Click += gcnew System::EventHandler(this, &MainForm::btn_order_Click);
			// 
			// btn_sell
			// 
			this->btn_sell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_sell->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_sell->FlatAppearance->BorderSize = 5;
			this->btn_sell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sell->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sell->Location = System::Drawing::Point(801, 125);
			this->btn_sell->Name = L"btn_sell";
			this->btn_sell->Size = System::Drawing::Size(320, 85);
			this->btn_sell->TabIndex = 3;
			this->btn_sell->Text = L"Продажа";
			this->btn_sell->UseVisualStyleBackColor = false;
			this->btn_sell->Click += gcnew System::EventHandler(this, &MainForm::btn_sell_Click);
			// 
			// btn_dispose
			// 
			this->btn_dispose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_dispose->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_dispose->FlatAppearance->BorderSize = 5;
			this->btn_dispose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dispose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dispose->Location = System::Drawing::Point(801, 230);
			this->btn_dispose->Name = L"btn_dispose";
			this->btn_dispose->Size = System::Drawing::Size(320, 85);
			this->btn_dispose->TabIndex = 4;
			this->btn_dispose->Text = L"Утиль";
			this->btn_dispose->UseVisualStyleBackColor = false;
			this->btn_dispose->Click += gcnew System::EventHandler(this, &MainForm::btn_dispose_Click);
			// 
			// btn_report
			// 
			this->btn_report->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_report->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_report->FlatAppearance->BorderSize = 5;
			this->btn_report->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_report->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_report->Location = System::Drawing::Point(801, 335);
			this->btn_report->Name = L"btn_report";
			this->btn_report->Size = System::Drawing::Size(320, 85);
			this->btn_report->TabIndex = 5;
			this->btn_report->Text = L"Отчет";
			this->btn_report->UseVisualStyleBackColor = false;
			this->btn_report->Click += gcnew System::EventHandler(this, &MainForm::btn_report_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(132, 544);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 77);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// main_grid
			// 
			this->main_grid->AllowUserToAddRows = false;
			this->main_grid->AllowUserToDeleteRows = false;
			this->main_grid->BackgroundColor = System::Drawing::Color::White;
			this->main_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->name, this->ordered,
					this->sold, this->disposed, this->ostatok
			});
			this->main_grid->Location = System::Drawing::Point(40, 460);
			this->main_grid->Name = L"main_grid";
			this->main_grid->ReadOnly = true;
			this->main_grid->RowHeadersWidth = 40;
			this->main_grid->RowTemplate->Height = 24;
			this->main_grid->Size = System::Drawing::Size(700, 265);
			this->main_grid->TabIndex = 10;
			// 
			// name
			// 
			this->name->HeaderText = L"Наименование";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 132;
			// 
			// ordered
			// 
			this->ordered->HeaderText = L"Заказано";
			this->ordered->MinimumWidth = 6;
			this->ordered->Name = L"ordered";
			this->ordered->ReadOnly = true;
			this->ordered->Width = 132;
			// 
			// sold
			// 
			this->sold->HeaderText = L"Продано";
			this->sold->MinimumWidth = 6;
			this->sold->Name = L"sold";
			this->sold->ReadOnly = true;
			this->sold->Width = 132;
			// 
			// disposed
			// 
			this->disposed->HeaderText = L"Утилизировано";
			this->disposed->MinimumWidth = 6;
			this->disposed->Name = L"disposed";
			this->disposed->ReadOnly = true;
			this->disposed->Width = 132;
			// 
			// ostatok
			// 
			this->ostatok->HeaderText = L"Остаток за день";
			this->ostatok->MinimumWidth = 6;
			this->ostatok->Name = L"ostatok";
			this->ostatok->ReadOnly = true;
			this->ostatok->Width = 132;
			// 
			// customCalendar1
			// 
			this->customCalendar1->BackColor = System::Drawing::Color::White;
			this->customCalendar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->customCalendar1->Location = System::Drawing::Point(40, 20);
			this->customCalendar1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->customCalendar1->Name = L"customCalendar1";
			this->customCalendar1->Size = System::Drawing::Size(700, 400);
			this->customCalendar1->TabIndex = 9;
			this->customCalendar1->DateSelected += gcnew System::EventHandler(this, &MainForm::customCalendar1_DateSelected);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(801, 460);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 34);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(801, 521);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(320, 26);
			this->label3->TabIndex = 12;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnWarn
			// 
			this->btnWarn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnWarn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnWarn->FlatAppearance->BorderSize = 5;
			this->btnWarn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnWarn->Location = System::Drawing::Point(801, 640);
			this->btnWarn->Name = L"btnWarn";
			this->btnWarn->Size = System::Drawing::Size(320, 85);
			this->btnWarn->TabIndex = 13;
			this->btnWarn->Text = L"Сделать минимальный заказ";
			this->btnWarn->UseVisualStyleBackColor = false;
			this->btnWarn->Click += gcnew System::EventHandler(this, &MainForm::btnWarn_Click);
			// 
			// flowerBox
			// 
			this->flowerBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->flowerBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowerBox.Image")));
			this->flowerBox->Location = System::Drawing::Point(993, 521);
			this->flowerBox->Margin = System::Windows::Forms::Padding(0);
			this->flowerBox->Name = L"flowerBox";
			this->flowerBox->Size = System::Drawing::Size(128, 128);
			this->flowerBox->TabIndex = 14;
			this->flowerBox->TabStop = false;
			// 
			// rotationTimer
			// 
			this->rotationTimer->Tick += gcnew System::EventHandler(this, &MainForm::rotationTimer_Tick);
			// 
			// waitingTimer
			// 
			this->waitingTimer->Tick += gcnew System::EventHandler(this, &MainForm::waitingTimer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->flowerBox);
			this->Controls->Add(this->btnWarn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->main_grid);
			this->Controls->Add(this->customCalendar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_report);
			this->Controls->Add(this->btn_dispose);
			this->Controls->Add(this->btn_sell);
			this->Controls->Add(this->btn_order);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Флорист";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flowerBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// кнопка заказа
	private: System::Void btn_order_Click(System::Object^ sender, System::EventArgs^ e) {
		OrderForm^ order_form = gcnew OrderForm();
		order_form->ShowDialog();
		rep_and_warn(customCalendar1->selectedDate);
		delete order_form;
	}

	// кнопка продажи
	private: System::Void btn_sell_Click(System::Object^ sender, System::EventArgs^ e) {
		SellForm^ sell_form = gcnew SellForm();
		sell_form->ShowDialog();
		rep_and_warn(customCalendar1->selectedDate);
		delete sell_form;
	}

	// кнопка утиля
	private: System::Void btn_dispose_Click(System::Object^ sender, System::EventArgs^ e) {
		DisposeForm^ dispose_form = gcnew DisposeForm();
		dispose_form->ShowDialog();
		rep_and_warn(customCalendar1->selectedDate);
		delete dispose_form;
	}

	// кнопка отчета
	private: System::Void btn_report_Click(System::Object^ sender, System::EventArgs^ e) {
		ReportForm^ report_form = gcnew ReportForm();
		report_form->ShowDialog();
		delete report_form;
	}

	// когда выбрана дата
	private: void rep_and_warn(DateTime^ date)
	{
		std::vector<std::string> tov = get_tov();
		std::map<std::string, Info> rep_map;
		std::map<std::string, int> ostat_map;

		for (int i = 0; i < tov.size(); i++)
		{
			rep_map.insert(std::make_pair(convert_to_utf8(tov[i]), Info()));
			ostat_map.insert(std::make_pair(convert_to_utf8(tov[i]), 0));
		}

		String^ Str_sd = date->ToString("dd.MM.yyyy"); // переводим дату в строку
		String^ String_filename = "dates/" + Str_sd + ".json"; // System::String имя файла
		std::string filename = marshal_as<std::string>(String_filename);
		
		add_to_report(filename, rep_map);

		main_grid->Rows->Clear();
		for (int i = 0; i < tov.size(); i++)
		{
			array<Object^>^ row_values = gcnew array<Object^>(main_grid->ColumnCount);
			row_values[0] = marshal_as<System::String^>(tov[i]);
			row_values[1] = rep_map[convert_to_utf8(tov[i])].ordered_count;
			row_values[2] = rep_map[convert_to_utf8(tov[i])].sold_count;
			row_values[3] = rep_map[convert_to_utf8(tov[i])].disposed_count;
			row_values[4] = rep_map[convert_to_utf8(tov[i])].ordered_count -
				rep_map[convert_to_utf8(tov[i])].sold_count -
				rep_map[convert_to_utf8(tov[i])].disposed_count;

			ostat_map[convert_to_utf8(tov[i])] = rep_map[convert_to_utf8(tov[i])].ordered_count -
				rep_map[convert_to_utf8(tov[i])].sold_count -
				rep_map[convert_to_utf8(tov[i])].disposed_count;
			main_grid->Rows->Add(row_values);
		}

		if (customCalendar1->currentDate.Date == customCalendar1->selectedDate.Date)
		{
			label2->Text = "Предупреждения на " + customCalendar1->currentDate.Date.ToShortDateString();
			label2->Visible = true;
			label3->Visible = true;

			check_file(filename);
			std::ifstream in_json_file(filename);
			nlohmann::json data = nlohmann::json::parse(in_json_file);
			is_checked = data[u8"Исправлено"].get<boolean>();
			in_json_file.close();

			if (is_checked == true)
			{
				label3->Visible = true;
				label3->Text = "Предупреждения учтены.";

				flowerBox->Visible = false;
				btnWarn->Visible = false;
				
			}
			else
			{
				for (int i = 0; i < tov.size(); i++)
					total_warns += (ostat_map[convert_to_utf8(tov[i])] < min_ostatok);

				if (total_warns == 0) // когда нет остатков меньше минимального
				{
					label3->Visible = true;
					label3->Text = "Нет предупреждений";
					btnWarn->Visible = false;
					flowerBox->Visible = false;
				}
				else // когда нашелся хотя бы один остаток меньше минимального
				{
					label3->Visible = true;
					label3->Text = "Есть предупреждения";
					btnWarn->Visible = true;
					flowerBox->Visible = false;
				}
			}
		}
		else
		{
			label2->Visible = false;
			label3->Visible = false;
			btnWarn->Visible = false;
			flowerBox->Visible = false;
		}
	}

	// выбор даты в календаре
	private: System::Void customCalendar1_DateSelected(System::Object^ sender, System::EventArgs^ e) {
		CalebdarControl::CustomCalendar^ cal = safe_cast<CalebdarControl::CustomCalendar^>(sender);
		rep_and_warn(cal->selectedDate);
	}

	// таймер загрузки заказа на следующий день
	private: System::Void rotationTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!isRotating)
		{
			isRotating = true;
			startTime = DateTime::Now;
		}

		TimeSpan elapsed = DateTime::Now - startTime;
		if (elapsed.TotalSeconds >= 5)
		{
			rotationTimer->Stop();
			isRotating = false;
			return;
		}

		rotationAngle += 5;
		Graphics^ g = flowerBox->CreateGraphics();
		g->Clear(flowerBox->BackColor);
		g->TranslateTransform(flowerBox->Width / 2., flowerBox->Height / 2.);
		g->RotateTransform(rotationAngle);
		g->TranslateTransform(-flowerBox->Width / 2., -flowerBox->Height / 2.);
		g->DrawImage(flowerBox->Image, 0, 0, flowerBox->Width, flowerBox->Height);
	}

	// таймер загрузки после нажатия кнопки
	private: System::Void waitingTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!is_clicked)
		{
			is_clicked = true;
			startTimeClick = DateTime::Now;
		}

		TimeSpan elapsed = DateTime::Now - startTimeClick;
		if (elapsed.TotalSeconds >= 5)
		{
			waitingTimer->Stop();
			flowerBox->Visible = false;
			label3->Visible = true;
			MessageBox::Show("Заказ на " + DateTime::Now.AddDays(1).ToShortDateString() + " сформирован", "",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
	}

	// кнопка заказа наследующий день
	private: System::Void btnWarn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> tov = get_tov();
		std::map<std::string, Info> rep_map;
		std::map<std::string, int> ostat_map;

		for (int i = 0; i < tov.size(); i++)
		{
			rep_map.insert(std::make_pair(convert_to_utf8(tov[i]), Info()));
			ostat_map.insert(std::make_pair(convert_to_utf8(tov[i]), 0));
		}

		String^ Str_sd = customCalendar1->currentDate.ToString("dd.MM.yyyy"); // переводим дату в строку
		String^ String_filename = "dates/" + Str_sd + ".json"; // System::String имя файла
		std::string filename = marshal_as<std::string>(String_filename);

		add_to_report(filename, rep_map);
		for (int i = 0; i < tov.size(); i++)
		{
			ostat_map[convert_to_utf8(tov[i])] = rep_map[convert_to_utf8(tov[i])].ordered_count -
				rep_map[convert_to_utf8(tov[i])].sold_count -
				rep_map[convert_to_utf8(tov[i])].disposed_count;
		}

		// изменение на проверено
		std::ifstream in_json_file(filename);
		nlohmann::json data = nlohmann::json::parse(in_json_file);
		in_json_file.close();
		data[u8"Исправлено"] = 1;

		std::ofstream out_json_file(filename);
		out_json_file << data;
		out_json_file.close();

		// составление заказа на следующий день
		String^ Str_nd = customCalendar1->currentDate.AddDays(1).ToString("dd.MM.yyyy");
		String^ String_next_filename = "dates/" + Str_nd + ".json";
		std::string next_filename = marshal_as<std::string>(String_next_filename);

		check_file(next_filename);
		for (int i = 0; i < tov.size(); i++)
			if (ostat_map[convert_to_utf8(tov[i])] < min_ostatok)
				make_order(next_filename, convert_to_utf8(tov[i]), 100);

		label3->Text = "Предупреждения учтены.";
		label3->Visible = false;
		flowerBox->Visible = true;
		btnWarn->Visible = false;
		rotationTimer->Start();
		waitingTimer->Start();
	}
};
}
