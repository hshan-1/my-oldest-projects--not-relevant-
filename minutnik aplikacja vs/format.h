#pragma once
#include<Windows.h>
#include <stdio.h>
#include <stdlib.h>
namespace aplikacja {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Podsumowanie informacji o format
	/// </summary>
	int sekundy = 0;
	int milisekundy = 99;
	int minuty = 0;
	public ref class format : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^ add_minuta;
	private: System::Windows::Forms::Button^ sub_minuta;
	private: System::Windows::Forms::Button^ add_sec;
	private: System::Windows::Forms::Button^ sub_sec;
	private: System::Windows::Forms::Label^ labelminuty;
	private: System::Windows::Forms::Label^ labelsekundy;
	private: System::Windows::Forms::CheckBox^ start_stop;
	private: System::Windows::Forms::CheckBox^ ustawienie1;
	private: System::Windows::Forms::CheckBox^ Alarm;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ missclick;
	private: System::Windows::Forms::Label^ komunikat;
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
	private: System::Windows::Forms::Button^ button_restart;
	private:
	protected:
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	public:
	private:
	protected:
	public:
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(format::typeid));
			this->button_restart = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->add_minuta = (gcnew System::Windows::Forms::Button());
			this->sub_minuta = (gcnew System::Windows::Forms::Button());
			this->add_sec = (gcnew System::Windows::Forms::Button());
			this->sub_sec = (gcnew System::Windows::Forms::Button());
			this->labelminuty = (gcnew System::Windows::Forms::Label());
			this->labelsekundy = (gcnew System::Windows::Forms::Label());
			this->komunikat = (gcnew System::Windows::Forms::Label());
			this->start_stop = (gcnew System::Windows::Forms::CheckBox());
			this->ustawienie1 = (gcnew System::Windows::Forms::CheckBox());
			this->Alarm = (gcnew System::Windows::Forms::CheckBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->missclick = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_restart
			// 
			this->button_restart->BackColor = System::Drawing::Color::Purple;
			this->button_restart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_restart.BackgroundImage")));
			this->button_restart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_restart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_restart->Location = System::Drawing::Point(317, 471);
			this->button_restart->Name = L"button_restart";
			this->button_restart->Size = System::Drawing::Size(63, 58);
			this->button_restart->TabIndex = 2;
			this->button_restart->UseVisualStyleBackColor = false;
			this->button_restart->Click += gcnew System::EventHandler(this, &format::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &format::timer1_Tick);
			// 
			// add_minuta
			// 
			this->add_minuta->Cursor = System::Windows::Forms::Cursors::Cross;
			this->add_minuta->Location = System::Drawing::Point(105, 111);
			this->add_minuta->Name = L"add_minuta";
			this->add_minuta->Size = System::Drawing::Size(75, 23);
			this->add_minuta->TabIndex = 4;
			this->add_minuta->Text = L"/\\";
			this->add_minuta->UseVisualStyleBackColor = true;
			this->add_minuta->Click += gcnew System::EventHandler(this, &format::button4_Click);
			// 
			// sub_minuta
			// 
			this->sub_minuta->Cursor = System::Windows::Forms::Cursors::Cross;
			this->sub_minuta->Location = System::Drawing::Point(105, 303);
			this->sub_minuta->Name = L"sub_minuta";
			this->sub_minuta->Size = System::Drawing::Size(75, 23);
			this->sub_minuta->TabIndex = 5;
			this->sub_minuta->Text = L"\\/\r\n";
			this->sub_minuta->UseVisualStyleBackColor = true;
			this->sub_minuta->Click += gcnew System::EventHandler(this, &format::button5_Click);
			// 
			// add_sec
			// 
			this->add_sec->BackColor = System::Drawing::Color::Transparent;
			this->add_sec->Cursor = System::Windows::Forms::Cursors::Cross;
			this->add_sec->Location = System::Drawing::Point(357, 111);
			this->add_sec->Name = L"add_sec";
			this->add_sec->Size = System::Drawing::Size(75, 23);
			this->add_sec->TabIndex = 6;
			this->add_sec->Text = L"/\\";
			this->add_sec->UseVisualStyleBackColor = false;
			this->add_sec->Click += gcnew System::EventHandler(this, &format::button6_Click);
			// 
			// sub_sec
			// 
			this->sub_sec->BackColor = System::Drawing::Color::Transparent;
			this->sub_sec->Cursor = System::Windows::Forms::Cursors::Cross;
			this->sub_sec->Location = System::Drawing::Point(357, 303);
			this->sub_sec->Name = L"sub_sec";
			this->sub_sec->Size = System::Drawing::Size(75, 23);
			this->sub_sec->TabIndex = 8;
			this->sub_sec->Text = L"\\/\r\n";
			this->sub_sec->UseVisualStyleBackColor = false;
			this->sub_sec->Click += gcnew System::EventHandler(this, &format::button8_Click);
			// 
			// labelminuty
			// 
			this->labelminuty->AutoSize = true;
			this->labelminuty->BackColor = System::Drawing::Color::Transparent;
			this->labelminuty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelminuty->Location = System::Drawing::Point(38, 147);
			this->labelminuty->Name = L"labelminuty";
			this->labelminuty->Size = System::Drawing::Size(288, 153);
			this->labelminuty->TabIndex = 12;
			this->labelminuty->Text = L"00 :";
			this->labelminuty->Click += gcnew System::EventHandler(this, &format::label2_Click);
			// 
			// labelsekundy
			// 
			this->labelsekundy->AutoSize = true;
			this->labelsekundy->BackColor = System::Drawing::Color::Transparent;
			this->labelsekundy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelsekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelsekundy->Location = System::Drawing::Point(291, 147);
			this->labelsekundy->Name = L"labelsekundy";
			this->labelsekundy->Size = System::Drawing::Size(215, 153);
			this->labelsekundy->TabIndex = 13;
			this->labelsekundy->Text = L"00";
			this->labelsekundy->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// komunikat
			// 
			this->komunikat->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->komunikat->AutoSize = true;
			this->komunikat->BackColor = System::Drawing::Color::Transparent;
			this->komunikat->Cursor = System::Windows::Forms::Cursors::No;
			this->komunikat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->komunikat->Location = System::Drawing::Point(-4, 9);
			this->komunikat->Name = L"komunikat";
			this->komunikat->Size = System::Drawing::Size(0, 76);
			this->komunikat->TabIndex = 14;
			this->komunikat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// start_stop
			// 
			this->start_stop->Appearance = System::Windows::Forms::Appearance::Button;
			this->start_stop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start_stop.BackgroundImage")));
			this->start_stop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->start_stop->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->start_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->start_stop->Location = System::Drawing::Point(142, 471);
			this->start_stop->Name = L"start_stop";
			this->start_stop->Size = System::Drawing::Size(62, 58);
			this->start_stop->TabIndex = 16;
			this->start_stop->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->start_stop->UseVisualStyleBackColor = true;
			this->start_stop->CheckedChanged += gcnew System::EventHandler(this, &format::checkBox1_CheckedChanged);
			// 
			// ustawienie1
			// 
			this->ustawienie1->AutoSize = true;
			this->ustawienie1->BackColor = System::Drawing::Color::Transparent;
			this->ustawienie1->ForeColor = System::Drawing::Color::Black;
			this->ustawienie1->Location = System::Drawing::Point(12, 13);
			this->ustawienie1->Name = L"ustawienie1";
			this->ustawienie1->Size = System::Drawing::Size(192, 17);
			this->ustawienie1->TabIndex = 17;
			this->ustawienie1->Text = L"Wy³¹czyæ komputer po odliczeniu\?";
			this->ustawienie1->UseVisualStyleBackColor = false;
			this->ustawienie1->Visible = false;
			this->ustawienie1->CheckedChanged += gcnew System::EventHandler(this, &format::ustawienie1_CheckedChanged);
			// 
			// Alarm
			// 
			this->Alarm->Appearance = System::Windows::Forms::Appearance::Button;
			this->Alarm->BackColor = System::Drawing::Color::Transparent;
			this->Alarm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Alarm->Checked = true;
			this->Alarm->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Alarm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Alarm->FlatAppearance->BorderSize = 0;
			this->Alarm->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Alarm->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Alarm->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Alarm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Alarm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50));
			this->Alarm->ForeColor = System::Drawing::Color::Red;
			this->Alarm->Location = System::Drawing::Point(64, 111);
			this->Alarm->Name = L"Alarm";
			this->Alarm->Size = System::Drawing::Size(402, 215);
			this->Alarm->TabIndex = 18;
			this->Alarm->Text = L"Wy³¹cz alarm";
			this->Alarm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Alarm->UseVisualStyleBackColor = false;
			this->Alarm->Visible = false;
			this->Alarm->CheckedChanged += gcnew System::EventHandler(this, &format::checkBox1_CheckedChanged_2);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &format::timer2_Tick);
			// 
			// missclick
			// 
			this->missclick->BackColor = System::Drawing::Color::Transparent;
			this->missclick->Cursor = System::Windows::Forms::Cursors::Help;
			this->missclick->DialogResult = System::Windows::Forms::DialogResult::Retry;
			this->missclick->FlatAppearance->BorderSize = 0;
			this->missclick->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->missclick->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->missclick->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->missclick->Location = System::Drawing::Point(249, 213);
			this->missclick->Name = L"missclick";
			this->missclick->Size = System::Drawing::Size(36, 27);
			this->missclick->TabIndex = 19;
			this->missclick->UseVisualStyleBackColor = false;
			this->missclick->Click += gcnew System::EventHandler(this, &format::missclick_Click);
			// 
			// format
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Application;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Purple;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(518, 541);
			this->Controls->Add(this->missclick);
			this->Controls->Add(this->Alarm);
			this->Controls->Add(this->ustawienie1);
			this->Controls->Add(this->add_minuta);
			this->Controls->Add(this->sub_minuta);
			this->Controls->Add(this->start_stop);
			this->Controls->Add(this->sub_sec);
			this->Controls->Add(this->komunikat);
			this->Controls->Add(this->labelsekundy);
			this->Controls->Add(this->labelminuty);
			this->Controls->Add(this->add_sec);
			this->Controls->Add(this->button_restart);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(50, 60);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"format";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Minutnik";
			this->Load += gcnew System::EventHandler(this, &format::format_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void format_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ustawienie1->Checked = false;
	this->ustawienie1->Visible = false;
	this->missclick->Visible = true;
	start_stop->Checked = false;
	komunikat->Text = "";
	timer1->Stop();
	sekundy = 0;
	minuty = 0;
	milisekundy = 1;
	labelminuty->Text = "00 :";
	labelsekundy->Text = "00";
	//labelmilisekundy->Text = ",00";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

							//modu³ odliczania
	if (sekundy == 0)
	{
		sekundy = 59;
		minuty--;
		
	}
	if (minuty == -1)
	{
		timer1->Stop();
		milisekundy = 0;
		sekundy = 0;
		minuty = 0;
	}
	if (sekundy == -1)
	{
		timer1->Stop();
		milisekundy = 0;
		sekundy = 0;
		minuty = 0;
	}
	if (milisekundy == -1)
	{
		timer1->Stop();
		milisekundy = 0;
		sekundy = 0;
		minuty = 0;
	}
										//skoñczenie odliczania
	if (minuty == 0 && sekundy == 0 )
	{
		this->start_stop->Checked = false;
		this->ustawienie1->Visible = false;
		
		timer1->Stop();
		this->missclick->Visible = true;
		this->start_stop->Checked = false;
		this->Alarm->Visible = TRUE;
		this->Alarm->Checked = false;
		sekundy = 0;
		minuty = 0;
		milisekundy = 0;
		this->labelminuty->Text = "00:";
		this->labelsekundy->Text = "00";
		//this->labelmilisekundy->Text = ",00";
		
		timer2->Start();
																	//wy³¹cznie komputera
		if (ustawienie1->Checked)
		{
			if (minuty == 0 && sekundy == 0)
			{

				system("shutdown -s -t 0");
				

			}//koniec czasu
			else
			{
				
			}
		}//wy³¹cz jak zaznaczony 
		else
		{
		
		}//nic nie rób  
	}
															//formatowanie wygladu 
	if (minuty < 10)
	{
		this->labelminuty->Text = "0" + minuty + " :";
	}
	else
	{
		this->labelminuty->Text = "" + minuty + " :";
	}
	if (sekundy < 10)
	{
		this->labelsekundy->Text = "0" + sekundy;
	}
	else
	{
		this->labelsekundy->Text = "" + sekundy;
	}
	sekundy--;
}
																							//ustawianie czasu tutaj here \\									
public: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	minuty++;
	komunikat->Text = "";
	this->labelminuty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->labelsekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	/*this->labelmilisekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));*/
	this->labelminuty->ForeColor = System::Drawing::Color::Black;
	this->labelsekundy->ForeColor = System::Drawing::Color::Black;
	//this->labelmilisekundy->ForeColor = System::Drawing::Color::Black;
	if (minuty < 10)
	{
		this->labelminuty->Text = "0" + minuty + " :";
	}
	else
	{
		this->labelminuty->Text = "" + minuty + " :";
	}
	//label1->Text = minuty + ":" + sekundy + ":" + milisekundy;
}
public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	minuty--;
	komunikat->Text = "";
	this->labelminuty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->labelsekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	/*this->labelmilisekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));*/
	if (minuty > 10 || minuty<0)
	{
		this->labelminuty->Text = "" + minuty + " :";
	}
	else
	{
		this->labelminuty->Text = "0" + minuty + " :";
	}
	if (minuty < 0)
	{
		this->labelminuty->ForeColor = System::Drawing::Color::Red;
		this->labelminuty->Text = minuty+"";
	}
	else
	{
		this->labelminuty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->labelsekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		/*this->labelmilisekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));*/
	}
	//label1->Text = minuty + ":" + sekundy + ":" + milisekundy;
}

public: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	sekundy++;
	komunikat->Text = "";
	this->labelminuty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->labelsekundy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 100, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->labelminuty->ForeColor = System::Drawing::Color::Black;
	this->labelsekundy->ForeColor = System::Drawing::Color::Black;
	/*this->labelmilisekundy->ForeColor = System::Drawing::Color::Black;*/
	if (sekundy < 10)
	{
		this->labelsekundy->Text = "0" + sekundy;
	}
	else
	{
		this->labelsekundy->Text = "" + sekundy;
	}
	//label1->Text = minuty + ":" + sekundy + ":" + milisekundy;
}
public: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	sekundy--;
	komunikat->Text = "";
	if (sekundy > 10 || sekundy < 0)
	{
		this->labelsekundy->Text = "" + sekundy;
	}
	else
	{
		this->labelsekundy->Text = "0" + sekundy;
	}
	//label1->Text = minuty + ":" + sekundy + ":" + milisekundy;
}
public: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelmilisekundy_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (start_stop->Checked)
	{
		if ((sekundy <= -1 || minuty <= -1  ) || (sekundy == 0 && minuty == 0))
		{
			start_stop->Checked = false;
			komunikat->Text = "USTAW CZAS!!!";
			this->labelminuty->ForeColor = System::Drawing::Color::Red;
			this->labelsekundy->ForeColor = System::Drawing::Color::Red;
			this->labelsekundy->ForeColor = System::Drawing::Color::Red;
		}
		else
		{
			this->ustawienie1->Visible = true;
			komunikat->Text = "";
			timer1->Start();
			this->missclick->Visible = false;
		}
	}
	else
	{
		timer1->Stop();
	}
}
private: System::Void ustawienie1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox1_CheckedChanged_2(System::Object^ sender, System::EventArgs^ e) {
	if (Alarm->Checked)
	{
		timer2->Stop();
		Alarm->Visible = false;
		TopMost = false;
	}
	else
	{
		this->Alarm->ForeColor = System::Drawing::Color::Red;
		
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	TopMost = true;
	this->Alarm->ForeColor = System::Drawing::Color::Red;
		Beep(1200, 100);
		Beep(1000, 120);
		Beep(1200, 100);
		Beep(2400, 150);
		Sleep(500);
		
	}
private: System::Void missclick_Click(System::Object^ sender, System::EventArgs^ e) {
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1245, 1000);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1175, 1000);
}
};

}

