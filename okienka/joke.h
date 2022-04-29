#include<Windows.h>

#pragma once

namespace okienka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o joke
	/// </summary>
	public ref class joke : public System::Windows::Forms::Form
	{
	public:
		int i;
		joke(void)
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
		~joke()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ anuluj;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ faketimer;
	private: System::Windows::Forms::Label^ labb;
	public: System::ComponentModel::BackgroundWorker^ bgwork;
	private: System::Windows::Forms::Timer^ timer1;
	public:
	private: System::ComponentModel::IContainer^ components;

	public:


	public:

	private:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->anuluj = (gcnew System::Windows::Forms::Button());
			this->faketimer = (gcnew System::Windows::Forms::Label());
			this->labb = (gcnew System::Windows::Forms::Label());
			this->bgwork = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// anuluj
			// 
			this->anuluj->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->anuluj->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->anuluj->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->anuluj->FlatAppearance->BorderSize = 5;
			this->anuluj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->anuluj->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->anuluj->ForeColor = System::Drawing::Color::Red;
			this->anuluj->Location = System::Drawing::Point(-3, 394);
			this->anuluj->Name = L"anuluj";
			this->anuluj->Size = System::Drawing::Size(450, 81);
			this->anuluj->TabIndex = 0;
			this->anuluj->Text = L"anuluj";
			this->anuluj->UseVisualStyleBackColor = false;
			this->anuluj->Click += gcnew System::EventHandler(this, &joke::anuluj_Click);
			// 
			// faketimer
			// 
			this->faketimer->AllowDrop = true;
			this->faketimer->AutoEllipsis = true;
			this->faketimer->AutoSize = true;
			this->faketimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 158, System::Drawing::FontStyle::Bold));
			this->faketimer->ForeColor = System::Drawing::Color::Red;
			this->faketimer->Location = System::Drawing::Point(59, 124);
			this->faketimer->Name = L"faketimer";
			this->faketimer->Size = System::Drawing::Size(336, 239);
			this->faketimer->TabIndex = 1;
			this->faketimer->Text = L"10";
			// 
			// labb
			// 
			this->labb->AutoSize = true;
			this->labb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->labb->ForeColor = System::Drawing::Color::Red;
			this->labb->Location = System::Drawing::Point(104, 42);
			this->labb->Name = L"labb";
			this->labb->Size = System::Drawing::Size(245, 36);
			this->labb->TabIndex = 2;
			this->labb->Text = L"system shutdown";
			this->labb->Click += gcnew System::EventHandler(this, &joke::labb_Click);
			// 
			// bgwork
			// 
			this->bgwork->WorkerReportsProgress = true;
			this->bgwork->WorkerSupportsCancellation = true;
			this->bgwork->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &joke::bgwork_DoWork);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &joke::timer1_Tick);
			// 
			// joke
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(444, 475);
			this->ControlBox = false;
			this->Controls->Add(this->labb);
			this->Controls->Add(this->faketimer);
			this->Controls->Add(this->anuluj);
			this->Name = L"joke";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Load += gcnew System::EventHandler(this, &joke::joke_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void nokno()
		{
			joke^ nokno = gcnew joke();
			nokno->Show();
		}
	public: System::Void anuluj_Click(System::Object^ sender, System::EventArgs^ e) {
		Beep(340, 200);
		nokno();
	}
	public: System::Void joke_Load(System::Object^ sender, System::EventArgs^ e) {
		joke::Hide();
		bgwork->RunWorkerAsync(1);
		timer1->Start();
		
	}
	public: System::Void labb_Click(System::Object^ sender, System::EventArgs^ e) {
		Beep(2500, 100);//label beeping 
	}
	public: System::Void bgwork_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e)
	{
		do {
			for (i = 10; i >= 0; i--)
			{
				bgwork->ReportProgress(i);
				Sleep(1000);
				Beep(500, 100);

				MessageBox::Show("ok", "ok", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			}
		} while (true);
	}
	public: System::Void bgwork_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e)
	{
		
	}
	public: System::Void bgwork_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e)
	{
		Beep(2500, 200);
		Beep(2700, 200);
		Beep(2700, 200);
		Beep(1500, 200);
		MessageBox::Show("Work completed!!");//not showing up
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		for (i = 10; i >= 0; i--)
		{
			
			Sleep(1000);
			Beep(500, 100);
			this->faketimer->Text = i + "";
			
		}
	}
};
}
