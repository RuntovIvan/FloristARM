#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DayBlankControl {

	/// <summary>
	/// —водка дл€ DayBlank
	/// </summary>
	public ref class DayBlank : public System::Windows::Forms::UserControl
	{
	public: DateTime curDate;
	public:
		DayBlank(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DayBlank()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lblDayNumber;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDayNumber = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblDayNumber
			// 
			this->lblDayNumber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblDayNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDayNumber->Location = System::Drawing::Point(0, 0);
			this->lblDayNumber->Name = L"lblDayNumber";
			this->lblDayNumber->Size = System::Drawing::Size(100, 50);
			this->lblDayNumber->TabIndex = 0;
			this->lblDayNumber->Text = L"01";
			this->lblDayNumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblDayNumber->Click += gcnew System::EventHandler(this, &DayBlank::lblDayNumber_Click);
			// 
			// DayBlank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->lblDayNumber);
			this->Name = L"DayBlank";
			this->Size = System::Drawing::Size(100, 50);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void Refresh(Color backColor, int day, DateTime date, Color foreColor)
	{
		BackColor = backColor;
		lblDayNumber->Text = day.ToString();
		curDate = date;

		if (curDate.ToShortDateString() == DateTime::Now.ToShortDateString())
			BackColor = Color::FromArgb(80, 255, 192, 192);

		lblDayNumber->ForeColor = foreColor;
	}

	public: event EventHandler^ DayClicked;

	private: System::Void lblDayNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		DayClicked(this, EventArgs::Empty);
	}
	};
}