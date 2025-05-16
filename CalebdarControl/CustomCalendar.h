#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CalebdarControl {

	/// <summary>
	/// —водка дл€ CustomCalendar
	/// </summary>
	public ref class CustomCalendar : public System::Windows::Forms::UserControl
	{
	private: const Color HOLIDAY_COLOR = Color::FromArgb(80, 192, 255, 192);
	private: const Color DAY_COLOR = Color::White;
	private: const Color PREV_MONTH_DAY_COLOR = Color::FromArgb(80, Color::LightGray);
	public:
		DateTime currentDate = DateTime::Now.Date;
		DateTime selectedDate = DateTime::Now.Date;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
		   

	public:
		CustomCalendar(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			for (int i = 0; i < 7; i++)
				tableLayoutPanel2->Controls[i]->BackColor = Color::FromArgb(80, 192, 192, 255);
			lblMonth->Text = currentDate.ToString("MMMM yyyy");
			DisplayDays(currentDate);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CustomCalendar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnPrevMonth;
	private: System::Windows::Forms::Button^ btnNextMonth;
	private: DayBlankControl::DayBlank^ dayBlank42;
	private: DayBlankControl::DayBlank^ dayBlank41;
	private: DayBlankControl::DayBlank^ dayBlank40;
	private: DayBlankControl::DayBlank^ dayBlank39;
	private: DayBlankControl::DayBlank^ dayBlank38;
	private: DayBlankControl::DayBlank^ dayBlank37;
	private: DayBlankControl::DayBlank^ dayBlank36;
	private: DayBlankControl::DayBlank^ dayBlank35;
	private: DayBlankControl::DayBlank^ dayBlank34;
	private: DayBlankControl::DayBlank^ dayBlank33;
	private: DayBlankControl::DayBlank^ dayBlank32;
	private: DayBlankControl::DayBlank^ dayBlank31;
	private: DayBlankControl::DayBlank^ dayBlank30;
	private: DayBlankControl::DayBlank^ dayBlank29;
	private: DayBlankControl::DayBlank^ dayBlank28;
	private: DayBlankControl::DayBlank^ dayBlank27;
	private: DayBlankControl::DayBlank^ dayBlank26;
	private: DayBlankControl::DayBlank^ dayBlank25;
	private: DayBlankControl::DayBlank^ dayBlank24;
	private: DayBlankControl::DayBlank^ dayBlank23;
	private: DayBlankControl::DayBlank^ dayBlank22;
	private: DayBlankControl::DayBlank^ dayBlank21;
	private: DayBlankControl::DayBlank^ dayBlank20;
	private: DayBlankControl::DayBlank^ dayBlank19;
	private: DayBlankControl::DayBlank^ dayBlank18;
	private: DayBlankControl::DayBlank^ dayBlank17;
	private: DayBlankControl::DayBlank^ dayBlank16;
	private: DayBlankControl::DayBlank^ dayBlank15;
	private: DayBlankControl::DayBlank^ dayBlank14;
	private: DayBlankControl::DayBlank^ dayBlank13;
	private: DayBlankControl::DayBlank^ dayBlank12;
	private: DayBlankControl::DayBlank^ dayBlank11;
	private: DayBlankControl::DayBlank^ dayBlank10;
	private: DayBlankControl::DayBlank^ dayBlank9;
	private: DayBlankControl::DayBlank^ dayBlank8;
	private: DayBlankControl::DayBlank^ dayBlank7;
	private: DayBlankControl::DayBlank^ dayBlank6;
	private: DayBlankControl::DayBlank^ dayBlank5;
	private: DayBlankControl::DayBlank^ dayBlank4;
	private: DayBlankControl::DayBlank^ dayBlank3;
	private: DayBlankControl::DayBlank^ dayBlank2;
	private: DayBlankControl::DayBlank^ dayBlank1;
	private: System::Windows::Forms::Label^ lblMonth;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dayBlank42 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank41 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank40 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank39 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank38 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank37 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank36 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank35 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank34 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank33 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank32 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank31 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank30 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank29 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank28 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank27 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank26 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank25 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank24 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank23 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank22 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank21 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank20 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank19 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank18 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank17 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank16 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank15 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank14 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank13 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank12 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank11 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank10 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank9 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank8 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank7 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank6 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank5 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank4 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank3 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank2 = (gcnew DayBlankControl::DayBlank());
			this->dayBlank1 = (gcnew DayBlankControl::DayBlank());
			this->btnPrevMonth = (gcnew System::Windows::Forms::Button());
			this->btnNextMonth = (gcnew System::Windows::Forms::Button());
			this->lblMonth = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->dayBlank42, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank41, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank40, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank39, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank38, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank37, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank36, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank35, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank34, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank33, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank32, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank31, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank30, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank29, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank28, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank27, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank26, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank25, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank24, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank23, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank22, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank21, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank20, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank19, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank18, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank17, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank16, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank15, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank14, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank13, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank12, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank11, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank10, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank8, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank7, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->dayBlank1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 100);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(700, 300);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// dayBlank42
			// 
			this->dayBlank42->BackColor = System::Drawing::Color::White;
			this->dayBlank42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank42->Location = System::Drawing::Point(603, 253);
			this->dayBlank42->Name = L"dayBlank42";
			this->dayBlank42->Size = System::Drawing::Size(94, 44);
			this->dayBlank42->TabIndex = 48;
			this->dayBlank42->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank41
			// 
			this->dayBlank41->BackColor = System::Drawing::Color::White;
			this->dayBlank41->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank41->Location = System::Drawing::Point(503, 253);
			this->dayBlank41->Name = L"dayBlank41";
			this->dayBlank41->Size = System::Drawing::Size(94, 44);
			this->dayBlank41->TabIndex = 47;
			this->dayBlank41->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank40
			// 
			this->dayBlank40->BackColor = System::Drawing::Color::White;
			this->dayBlank40->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank40->Location = System::Drawing::Point(403, 253);
			this->dayBlank40->Name = L"dayBlank40";
			this->dayBlank40->Size = System::Drawing::Size(94, 44);
			this->dayBlank40->TabIndex = 46;
			this->dayBlank40->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank39
			// 
			this->dayBlank39->BackColor = System::Drawing::Color::White;
			this->dayBlank39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank39->Location = System::Drawing::Point(303, 253);
			this->dayBlank39->Name = L"dayBlank39";
			this->dayBlank39->Size = System::Drawing::Size(94, 44);
			this->dayBlank39->TabIndex = 45;
			this->dayBlank39->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank38
			// 
			this->dayBlank38->BackColor = System::Drawing::Color::White;
			this->dayBlank38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank38->Location = System::Drawing::Point(203, 253);
			this->dayBlank38->Name = L"dayBlank38";
			this->dayBlank38->Size = System::Drawing::Size(94, 44);
			this->dayBlank38->TabIndex = 44;
			this->dayBlank38->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank37
			// 
			this->dayBlank37->BackColor = System::Drawing::Color::White;
			this->dayBlank37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank37->Location = System::Drawing::Point(103, 253);
			this->dayBlank37->Name = L"dayBlank37";
			this->dayBlank37->Size = System::Drawing::Size(94, 44);
			this->dayBlank37->TabIndex = 43;
			this->dayBlank37->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank36
			// 
			this->dayBlank36->BackColor = System::Drawing::Color::White;
			this->dayBlank36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank36->Location = System::Drawing::Point(3, 253);
			this->dayBlank36->Name = L"dayBlank36";
			this->dayBlank36->Size = System::Drawing::Size(94, 44);
			this->dayBlank36->TabIndex = 42;
			this->dayBlank36->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank35
			// 
			this->dayBlank35->BackColor = System::Drawing::Color::White;
			this->dayBlank35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank35->Location = System::Drawing::Point(603, 203);
			this->dayBlank35->Name = L"dayBlank35";
			this->dayBlank35->Size = System::Drawing::Size(94, 44);
			this->dayBlank35->TabIndex = 41;
			this->dayBlank35->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank34
			// 
			this->dayBlank34->BackColor = System::Drawing::Color::White;
			this->dayBlank34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank34->Location = System::Drawing::Point(503, 203);
			this->dayBlank34->Name = L"dayBlank34";
			this->dayBlank34->Size = System::Drawing::Size(94, 44);
			this->dayBlank34->TabIndex = 40;
			this->dayBlank34->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank33
			// 
			this->dayBlank33->BackColor = System::Drawing::Color::White;
			this->dayBlank33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank33->Location = System::Drawing::Point(403, 203);
			this->dayBlank33->Name = L"dayBlank33";
			this->dayBlank33->Size = System::Drawing::Size(94, 44);
			this->dayBlank33->TabIndex = 39;
			this->dayBlank33->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank32
			// 
			this->dayBlank32->BackColor = System::Drawing::Color::White;
			this->dayBlank32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank32->Location = System::Drawing::Point(303, 203);
			this->dayBlank32->Name = L"dayBlank32";
			this->dayBlank32->Size = System::Drawing::Size(94, 44);
			this->dayBlank32->TabIndex = 38;
			this->dayBlank32->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank31
			// 
			this->dayBlank31->BackColor = System::Drawing::Color::White;
			this->dayBlank31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank31->Location = System::Drawing::Point(203, 203);
			this->dayBlank31->Name = L"dayBlank31";
			this->dayBlank31->Size = System::Drawing::Size(94, 44);
			this->dayBlank31->TabIndex = 37;
			this->dayBlank31->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank30
			// 
			this->dayBlank30->BackColor = System::Drawing::Color::White;
			this->dayBlank30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank30->Location = System::Drawing::Point(103, 203);
			this->dayBlank30->Name = L"dayBlank30";
			this->dayBlank30->Size = System::Drawing::Size(94, 44);
			this->dayBlank30->TabIndex = 36;
			this->dayBlank30->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank29
			// 
			this->dayBlank29->BackColor = System::Drawing::Color::White;
			this->dayBlank29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank29->Location = System::Drawing::Point(3, 203);
			this->dayBlank29->Name = L"dayBlank29";
			this->dayBlank29->Size = System::Drawing::Size(94, 44);
			this->dayBlank29->TabIndex = 35;
			this->dayBlank29->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank28
			// 
			this->dayBlank28->BackColor = System::Drawing::Color::White;
			this->dayBlank28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank28->Location = System::Drawing::Point(603, 153);
			this->dayBlank28->Name = L"dayBlank28";
			this->dayBlank28->Size = System::Drawing::Size(94, 44);
			this->dayBlank28->TabIndex = 34;
			this->dayBlank28->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank27
			// 
			this->dayBlank27->BackColor = System::Drawing::Color::White;
			this->dayBlank27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank27->Location = System::Drawing::Point(503, 153);
			this->dayBlank27->Name = L"dayBlank27";
			this->dayBlank27->Size = System::Drawing::Size(94, 44);
			this->dayBlank27->TabIndex = 33;
			this->dayBlank27->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank26
			// 
			this->dayBlank26->BackColor = System::Drawing::Color::White;
			this->dayBlank26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank26->Location = System::Drawing::Point(403, 153);
			this->dayBlank26->Name = L"dayBlank26";
			this->dayBlank26->Size = System::Drawing::Size(94, 44);
			this->dayBlank26->TabIndex = 32;
			this->dayBlank26->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank25
			// 
			this->dayBlank25->BackColor = System::Drawing::Color::White;
			this->dayBlank25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank25->Location = System::Drawing::Point(303, 153);
			this->dayBlank25->Name = L"dayBlank25";
			this->dayBlank25->Size = System::Drawing::Size(94, 44);
			this->dayBlank25->TabIndex = 31;
			this->dayBlank25->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank24
			// 
			this->dayBlank24->BackColor = System::Drawing::Color::White;
			this->dayBlank24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank24->Location = System::Drawing::Point(203, 153);
			this->dayBlank24->Name = L"dayBlank24";
			this->dayBlank24->Size = System::Drawing::Size(94, 44);
			this->dayBlank24->TabIndex = 30;
			this->dayBlank24->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank23
			// 
			this->dayBlank23->BackColor = System::Drawing::Color::White;
			this->dayBlank23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank23->Location = System::Drawing::Point(103, 153);
			this->dayBlank23->Name = L"dayBlank23";
			this->dayBlank23->Size = System::Drawing::Size(94, 44);
			this->dayBlank23->TabIndex = 29;
			this->dayBlank23->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank22
			// 
			this->dayBlank22->BackColor = System::Drawing::Color::White;
			this->dayBlank22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank22->Location = System::Drawing::Point(3, 153);
			this->dayBlank22->Name = L"dayBlank22";
			this->dayBlank22->Size = System::Drawing::Size(94, 44);
			this->dayBlank22->TabIndex = 28;
			this->dayBlank22->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank21
			// 
			this->dayBlank21->BackColor = System::Drawing::Color::White;
			this->dayBlank21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank21->Location = System::Drawing::Point(603, 103);
			this->dayBlank21->Name = L"dayBlank21";
			this->dayBlank21->Size = System::Drawing::Size(94, 44);
			this->dayBlank21->TabIndex = 27;
			this->dayBlank21->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank20
			// 
			this->dayBlank20->BackColor = System::Drawing::Color::White;
			this->dayBlank20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank20->Location = System::Drawing::Point(503, 103);
			this->dayBlank20->Name = L"dayBlank20";
			this->dayBlank20->Size = System::Drawing::Size(94, 44);
			this->dayBlank20->TabIndex = 26;
			this->dayBlank20->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank19
			// 
			this->dayBlank19->BackColor = System::Drawing::Color::White;
			this->dayBlank19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank19->Location = System::Drawing::Point(403, 103);
			this->dayBlank19->Name = L"dayBlank19";
			this->dayBlank19->Size = System::Drawing::Size(94, 44);
			this->dayBlank19->TabIndex = 25;
			this->dayBlank19->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank18
			// 
			this->dayBlank18->BackColor = System::Drawing::Color::White;
			this->dayBlank18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank18->Location = System::Drawing::Point(303, 103);
			this->dayBlank18->Name = L"dayBlank18";
			this->dayBlank18->Size = System::Drawing::Size(94, 44);
			this->dayBlank18->TabIndex = 24;
			this->dayBlank18->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank17
			// 
			this->dayBlank17->BackColor = System::Drawing::Color::White;
			this->dayBlank17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank17->Location = System::Drawing::Point(203, 103);
			this->dayBlank17->Name = L"dayBlank17";
			this->dayBlank17->Size = System::Drawing::Size(94, 44);
			this->dayBlank17->TabIndex = 23;
			this->dayBlank17->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank16
			// 
			this->dayBlank16->BackColor = System::Drawing::Color::White;
			this->dayBlank16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank16->Location = System::Drawing::Point(103, 103);
			this->dayBlank16->Name = L"dayBlank16";
			this->dayBlank16->Size = System::Drawing::Size(94, 44);
			this->dayBlank16->TabIndex = 22;
			this->dayBlank16->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank15
			// 
			this->dayBlank15->BackColor = System::Drawing::Color::White;
			this->dayBlank15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank15->Location = System::Drawing::Point(3, 103);
			this->dayBlank15->Name = L"dayBlank15";
			this->dayBlank15->Size = System::Drawing::Size(94, 44);
			this->dayBlank15->TabIndex = 21;
			this->dayBlank15->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank14
			// 
			this->dayBlank14->BackColor = System::Drawing::Color::White;
			this->dayBlank14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank14->Location = System::Drawing::Point(603, 53);
			this->dayBlank14->Name = L"dayBlank14";
			this->dayBlank14->Size = System::Drawing::Size(94, 44);
			this->dayBlank14->TabIndex = 20;
			this->dayBlank14->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank13
			// 
			this->dayBlank13->BackColor = System::Drawing::Color::White;
			this->dayBlank13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank13->Location = System::Drawing::Point(503, 53);
			this->dayBlank13->Name = L"dayBlank13";
			this->dayBlank13->Size = System::Drawing::Size(94, 44);
			this->dayBlank13->TabIndex = 19;
			this->dayBlank13->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank12
			// 
			this->dayBlank12->BackColor = System::Drawing::Color::White;
			this->dayBlank12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank12->Location = System::Drawing::Point(403, 53);
			this->dayBlank12->Name = L"dayBlank12";
			this->dayBlank12->Size = System::Drawing::Size(94, 44);
			this->dayBlank12->TabIndex = 18;
			this->dayBlank12->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank11
			// 
			this->dayBlank11->BackColor = System::Drawing::Color::White;
			this->dayBlank11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank11->Location = System::Drawing::Point(303, 53);
			this->dayBlank11->Name = L"dayBlank11";
			this->dayBlank11->Size = System::Drawing::Size(94, 44);
			this->dayBlank11->TabIndex = 17;
			this->dayBlank11->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank10
			// 
			this->dayBlank10->BackColor = System::Drawing::Color::White;
			this->dayBlank10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank10->Location = System::Drawing::Point(203, 53);
			this->dayBlank10->Name = L"dayBlank10";
			this->dayBlank10->Size = System::Drawing::Size(94, 44);
			this->dayBlank10->TabIndex = 16;
			this->dayBlank10->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank9
			// 
			this->dayBlank9->BackColor = System::Drawing::Color::White;
			this->dayBlank9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank9->Location = System::Drawing::Point(103, 53);
			this->dayBlank9->Name = L"dayBlank9";
			this->dayBlank9->Size = System::Drawing::Size(94, 44);
			this->dayBlank9->TabIndex = 15;
			this->dayBlank9->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank8
			// 
			this->dayBlank8->BackColor = System::Drawing::Color::White;
			this->dayBlank8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank8->Location = System::Drawing::Point(3, 53);
			this->dayBlank8->Name = L"dayBlank8";
			this->dayBlank8->Size = System::Drawing::Size(94, 44);
			this->dayBlank8->TabIndex = 14;
			this->dayBlank8->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank7
			// 
			this->dayBlank7->BackColor = System::Drawing::Color::White;
			this->dayBlank7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank7->Location = System::Drawing::Point(603, 3);
			this->dayBlank7->Name = L"dayBlank7";
			this->dayBlank7->Size = System::Drawing::Size(94, 44);
			this->dayBlank7->TabIndex = 13;
			this->dayBlank7->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank6
			// 
			this->dayBlank6->BackColor = System::Drawing::Color::White;
			this->dayBlank6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank6->Location = System::Drawing::Point(503, 3);
			this->dayBlank6->Name = L"dayBlank6";
			this->dayBlank6->Size = System::Drawing::Size(94, 44);
			this->dayBlank6->TabIndex = 12;
			this->dayBlank6->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank5
			// 
			this->dayBlank5->BackColor = System::Drawing::Color::White;
			this->dayBlank5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank5->Location = System::Drawing::Point(403, 3);
			this->dayBlank5->Name = L"dayBlank5";
			this->dayBlank5->Size = System::Drawing::Size(94, 44);
			this->dayBlank5->TabIndex = 11;
			this->dayBlank5->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank4
			// 
			this->dayBlank4->BackColor = System::Drawing::Color::White;
			this->dayBlank4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank4->Location = System::Drawing::Point(303, 3);
			this->dayBlank4->Name = L"dayBlank4";
			this->dayBlank4->Size = System::Drawing::Size(94, 44);
			this->dayBlank4->TabIndex = 10;
			this->dayBlank4->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank3
			// 
			this->dayBlank3->BackColor = System::Drawing::Color::White;
			this->dayBlank3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank3->Location = System::Drawing::Point(203, 3);
			this->dayBlank3->Name = L"dayBlank3";
			this->dayBlank3->Size = System::Drawing::Size(94, 44);
			this->dayBlank3->TabIndex = 9;
			this->dayBlank3->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank2
			// 
			this->dayBlank2->BackColor = System::Drawing::Color::White;
			this->dayBlank2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank2->Location = System::Drawing::Point(103, 3);
			this->dayBlank2->Name = L"dayBlank2";
			this->dayBlank2->Size = System::Drawing::Size(94, 44);
			this->dayBlank2->TabIndex = 8;
			this->dayBlank2->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// dayBlank1
			// 
			this->dayBlank1->BackColor = System::Drawing::Color::White;
			this->dayBlank1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dayBlank1->Location = System::Drawing::Point(3, 3);
			this->dayBlank1->Name = L"dayBlank1";
			this->dayBlank1->Size = System::Drawing::Size(94, 44);
			this->dayBlank1->TabIndex = 7;
			this->dayBlank1->DayClicked += gcnew System::EventHandler(this, &CustomCalendar::dayBlank_DayClicked);
			// 
			// btnPrevMonth
			// 
			this->btnPrevMonth->BackColor = System::Drawing::Color::White;
			this->btnPrevMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPrevMonth->Location = System::Drawing::Point(0, 0);
			this->btnPrevMonth->Name = L"btnPrevMonth";
			this->btnPrevMonth->Size = System::Drawing::Size(100, 50);
			this->btnPrevMonth->TabIndex = 1;
			this->btnPrevMonth->Text = L"<";
			this->btnPrevMonth->UseVisualStyleBackColor = false;
			this->btnPrevMonth->Click += gcnew System::EventHandler(this, &CustomCalendar::btnPrevMonth_Click);
			// 
			// btnNextMonth
			// 
			this->btnNextMonth->BackColor = System::Drawing::Color::White;
			this->btnNextMonth->FlatAppearance->BorderSize = 0;
			this->btnNextMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNextMonth->Location = System::Drawing::Point(600, 0);
			this->btnNextMonth->Name = L"btnNextMonth";
			this->btnNextMonth->Size = System::Drawing::Size(100, 50);
			this->btnNextMonth->TabIndex = 2;
			this->btnNextMonth->Text = L">";
			this->btnNextMonth->UseVisualStyleBackColor = false;
			this->btnNextMonth->Click += gcnew System::EventHandler(this, &CustomCalendar::btnNextMonth_Click);
			// 
			// lblMonth
			// 
			this->lblMonth->BackColor = System::Drawing::Color::White;
			this->lblMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMonth->ForeColor = System::Drawing::Color::Black;
			this->lblMonth->Location = System::Drawing::Point(100, 1);
			this->lblMonth->Name = L"lblMonth";
			this->lblMonth->Size = System::Drawing::Size(500, 50);
			this->lblMonth->TabIndex = 3;
			this->lblMonth->Text = L"lblMonth";
			this->lblMonth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 7;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->label7, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->label5, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 50);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(700, 50);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(603, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 50);
			this->label7->TabIndex = 6;
			this->label7->Text = L"¬с";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(503, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 50);
			this->label6->TabIndex = 5;
			this->label6->Text = L"—б";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(403, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 50);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ѕт";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(303, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 50);
			this->label4->TabIndex = 3;
			this->label4->Text = L"„т";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(203, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 50);
			this->label3->TabIndex = 2;
			this->label3->Text = L"—р";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(103, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¬т";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ѕн";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CustomCalendar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->lblMonth);
			this->Controls->Add(this->btnNextMonth);
			this->Controls->Add(this->btnPrevMonth);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"CustomCalendar";
			this->Size = System::Drawing::Size(700, 400);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void DisplayDays(DateTime date)
	{
		DateTime now = date;
		DateTime prevMonth = date.AddMonths(-1);
		DateTime startOfMonth = DateTime(now.Year, now.Month, 1);
		int dayOfTheWeek = Convert::ToInt32(startOfMonth.DayOfWeek.ToString("d")) == 0
			? 7
			: Convert::ToInt32(startOfMonth.DayOfWeek.ToString("d"));
		dayOfTheWeek = dayOfTheWeek == 1 ? 8 : dayOfTheWeek;

		int daysCount = DateTime::DaysInMonth(now.Year, now.Month);
		int prevDaysCount = DateTime::DaysInMonth(prevMonth.Year, prevMonth.Month);

		// ззаполнение дней пердыдущего мес€ца
		for (int i = 1; i < dayOfTheWeek; i++)
		{
			safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i])->Refresh(PREV_MONTH_DAY_COLOR,
				(prevDaysCount - dayOfTheWeek + i + 1),
				DateTime(prevMonth.Year, prevMonth.Month, prevDaysCount - dayOfTheWeek + i + 1),
				Color::Black);

			if (safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i])->curDate == selectedDate)
			{
				safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i])->lblDayNumber->ForeColor = Color::Red;
				//safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i])->lblDayNumber->Font->Bold = true;
			}
		}

		// заполнение дней текущего мес€ца
		for (int i = 0; i < daysCount; i++)
		{
			if ((42 - i - dayOfTheWeek) % 7 == 0 || (42 - i - dayOfTheWeek - 1) % 7 == 0)
			{
				safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i - dayOfTheWeek])->Refresh(HOLIDAY_COLOR,
					(i + 1),
					DateTime(now.Year, now.Month, i + 1),
					Color::Black);
			}
			else
			{
				safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i - dayOfTheWeek])->Refresh(DAY_COLOR,
					(i + 1),
					DateTime(now.Year, now.Month, i + 1),
					Color::Black);
			}

			if (safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i - dayOfTheWeek])->curDate == selectedDate)
			{
				safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[42 - i - dayOfTheWeek])->lblDayNumber->ForeColor = Color::Red;
			}
		}

		// заполнение дней следующего мес€ца
		int otherDays = 42 - daysCount - dayOfTheWeek;
		for (int i = otherDays; i >= 0; i--)
		{
			safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[i])->Refresh(PREV_MONTH_DAY_COLOR,
				(otherDays - i + 1),
				DateTime(now.AddMonths(1).Year, now.AddMonths(1).Month, otherDays - i + 1),
				Color::Black);

			if (safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[i])->curDate == selectedDate)
			{
				safe_cast<DayBlankControl::DayBlank^>(tableLayoutPanel1->Controls[i])->lblDayNumber->ForeColor = Color::Red;
			}
		}
	}
	private: System::Void btnPrevMonth_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDate = currentDate.AddMonths(-1);
		lblMonth->Text = currentDate.ToString("MMMM yyyy");
		DisplayDays(currentDate);
	}
	private: System::Void btnNextMonth_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDate = currentDate.AddMonths(1);
		lblMonth->Text = currentDate.ToString("MMMM yyyy");
		DisplayDays(currentDate);
	}

	// событие выбора даты
	public: event EventHandler^ DateSelected;

	private: System::Void dayBlank_DayClicked(System::Object^ sender, System::EventArgs^ e) {
		DayBlankControl::DayBlank^ day = safe_cast<DayBlankControl::DayBlank^>(sender);
		selectedDate = day->curDate;
		DisplayDays(currentDate);
		DateSelected(this, EventArgs::Empty);
	}
};
}