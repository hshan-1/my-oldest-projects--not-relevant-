#include"joke.h"

#pragma once

namespace okienka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o format
	/// </summary>
	public ref class format : public System::Windows::Forms::Form
	{
	public:
		format(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~format()
		{
			if (components)
			{
				delete components;
			}
		}
	public protected: System::Windows::Forms::Button^ b1;
	protected:
	public protected: System::Windows::Forms::Label^ labelformat;


	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(format::typeid));
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->labelformat = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::Transparent;
			this->b1->FlatAppearance->BorderSize = 0;
			this->b1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.Image")));
			this->b1->Location = System::Drawing::Point(169, 48);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(190, 280);
			this->b1->TabIndex = 0;
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &format::b1_Click);
			// 
			// labelformat
			// 
			this->labelformat->AutoSize = true;
			this->labelformat->BackColor = System::Drawing::Color::Transparent;
			this->labelformat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelformat->Location = System::Drawing::Point(201, 21);
			this->labelformat->Name = L"labelformat";
			this->labelformat->Size = System::Drawing::Size(120, 24);
			this->labelformat->TabIndex = 1;
			this->labelformat->Text = L"                      ";
			this->labelformat->Click += gcnew System::EventHandler(this, &format::label1_Click);
			// 
			// format
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(524, 381);
			this->ControlBox = false;
			this->Controls->Add(this->labelformat);
			this->Controls->Add(this->b1);
			this->Name = L"format";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"format";
			this->Load += gcnew System::EventHandler(this, &format::format_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
		joke^ nokno = gcnew joke();
		nokno->Show();
		format::Hide();
	}
	private: System::Void format_Load(System::Object^ sender, System::EventArgs^ e) {
		format::Hide();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
