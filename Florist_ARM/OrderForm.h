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
	/// ������ ��� OrderForm
	/// </summary>
	public ref class OrderForm : public System::Windows::Forms::Form
	{
	public:
		OrderForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~OrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_save;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lbl_date;
	private: System::Windows::Forms::DateTimePicker^ dtp_order;
	private: System::Windows::Forms::ComboBox^ comboBox_order;



	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ lbl_count;
	private: System::Windows::Forms::NumericUpDown^ numeric_order;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->lbl_date = (gcnew System::Windows::Forms::Label());
			this->dtp_order = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_order = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_count = (gcnew System::Windows::Forms::Label());
			this->numeric_order = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_order))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_cancel->Location = System::Drawing::Point(116, 215);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(150, 30);
			this->btn_cancel->TabIndex = 0;
			this->btn_cancel->Text = L"������";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &OrderForm::btn_cancel_Click);
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_save->Location = System::Drawing::Point(316, 215);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(150, 30);
			this->btn_save->TabIndex = 1;
			this->btn_save->Text = L"���������";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &OrderForm::btn_save_Click);
			// 
			// lbl_date
			// 
			this->lbl_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_date->Location = System::Drawing::Point(95, 45);
			this->lbl_date->Name = L"lbl_date";
			this->lbl_date->Size = System::Drawing::Size(145, 25);
			this->lbl_date->TabIndex = 2;
			this->lbl_date->Text = L"����";
			this->lbl_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dtp_order
			// 
			this->dtp_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dtp_order->Location = System::Drawing::Point(287, 45);
			this->dtp_order->Name = L"dtp_order";
			this->dtp_order->Size = System::Drawing::Size(200, 26);
			this->dtp_order->TabIndex = 3;
			// 
			// comboBox_order
			// 
			this->comboBox_order->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_order->FormattingEnabled = true;
			this->comboBox_order->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"������������", L"��������", L"�����", L"���� ��������" });
			this->comboBox_order->Location = System::Drawing::Point(287, 100);
			this->comboBox_order->Name = L"comboBox_order";
			this->comboBox_order->Size = System::Drawing::Size(200, 28);
			this->comboBox_order->TabIndex = 4;
			// 
			// lbl_name
			// 
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_name->Location = System::Drawing::Point(95, 100);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(145, 25);
			this->lbl_name->TabIndex = 5;
			this->lbl_name->Text = L"������������";
			this->lbl_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_count
			// 
			this->lbl_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl_count->Location = System::Drawing::Point(95, 155);
			this->lbl_count->Name = L"lbl_count";
			this->lbl_count->Size = System::Drawing::Size(145, 25);
			this->lbl_count->TabIndex = 6;
			this->lbl_count->Text = L"����������";
			this->lbl_count->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// numeric_order
			// 
			this->numeric_order->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numeric_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numeric_order->Location = System::Drawing::Point(287, 155);
			this->numeric_order->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numeric_order->Name = L"numeric_order";
			this->numeric_order->Size = System::Drawing::Size(200, 26);
			this->numeric_order->TabIndex = 8;
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 253);
			this->Controls->Add(this->numeric_order);
			this->Controls->Add(this->lbl_count);
			this->Controls->Add(this->lbl_name);
			this->Controls->Add(this->comboBox_order);
			this->Controls->Add(this->dtp_order);
			this->Controls->Add(this->lbl_date);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_cancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"OrderForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_order))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
// ������ ������ �� ����� ������
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

// ������ ���������� ������
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ position = comboBox_order->Text; // �����
		int count = Convert::ToInt32(numeric_order->Value); // ����������

		// ���� ����� �� ������
		if (position == "")
		{
			MessageBox::Show("����� �� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// ����� ���� � ��������� � ��� �����
		DateTime^ selected_date = dtp_order->Value; // ���������� ����
		String^ Str_sd = selected_date->ToString("dd.MM.yyyy"); // ��������� ���� � ������
		String^ String_filename = "dates/" + Str_sd + ".json"; // System::String ��� �����
		std::string filename = marshal_as<std::string>(String_filename);

		// �������������� ����� ������
		std::string position_name = marshal_as<std::string>(position);
		position_name = convert_to_utf8(position_name);

		check_file(filename);
		make_order(filename, position_name, count);

		dtp_order->Value = DateTime::Now;
		comboBox_order->Text = "";
		numeric_order->Value = 0;

		MessageBox::Show("������ ���������.", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
