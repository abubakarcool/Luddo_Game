#pragma once
#include "MyForm2.h"

namespace LuddoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^First_Player;
		String^Second_Player;
		String^Third_Player;
	private: System::Windows::Forms::Label^  label6;
	public: 
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox1;
			 String^Forth_Player;
		
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(233, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(401, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"HOW MANY PLAYERS ARE GOING TO PLAY";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Orange;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(237, 273);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(42, 29);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"2";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Orange;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(237, 328);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(42, 29);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"3";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Orange;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(237, 385);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(42, 29);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"4";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(467, 270);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(467, 317);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(167, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(467, 365);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(467, 411);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(167, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(380, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"1st player name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(376, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2nd player name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(379, 366);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"3rd player name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(379, 411);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"4th player name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(559, 466);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(780, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(306, 31);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Instructions and Rules";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(773, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"1. All the rules are of that of classic Ludo game.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(773, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(250, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"2. At one position maximum 4 tokens can be placed";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(773, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(378, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"3. You strictly have to follow the Action box, because it tells u what is going o" 
				L"n.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Location = System::Drawing::Point(773, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(474, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"4. If any 1st player get all his 4 tokens pass through rescue path, he will win a" 
				L"nd game will b closed.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(773, 327);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(380, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"5. Don\'t click random, the tokens can b lost so be carefull while moving tokens.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(773, 364);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(490, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"6. As its Classic Ludo, 1st u have to click token to pick and click next location" 
				L" where u want it to place";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Location = System::Drawing::Point(773, 399);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(512, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"7. U can beat upto 3 tokens at a time not 4 tokens, in that case either u can\'t m" 
				L"ove or move another token.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(773, 436);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(346, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"8. The turn of for rolling dice is in this order Red,Yellow,Blue than Green.";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::LightGray;
			this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->checkBox1->FlatAppearance->BorderSize = 5;
			this->checkBox1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(786, 515);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(381, 24);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"i have read all the above Instructions and Rules";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1284, 729);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	label2->Visible = true;
	label3->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
			 label4->Visible=false;
			 label5->Visible=false;
			 textBox3->Visible=false;
			 textBox4->Visible=false;

		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 label2->Visible = true;
			 label3->Visible = true;
			 textBox1->Visible = true;
			 textBox2->Visible = true;
			 textBox3->Visible = true;
			 label4->Visible = true;
			 label5->Visible=false;
			 textBox4->Visible=false;
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 label2->Visible = true;
			 label3->Visible = true;
			 textBox1->Visible = true;
			 textBox2->Visible = true;
			 textBox3->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 textBox4->Visible = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	StreamWriter^abc = gcnew StreamWriter("players.txt");
			 if (radioButton1->Checked == true)
			 {
				 abc->WriteLine("2");
				 abc->WriteLine(textBox1->Text);
				 abc->WriteLine(textBox2->Text);}
			 if (radioButton2->Checked == true)
			 {
				 abc->WriteLine("3");
				 abc->WriteLine(textBox1->Text);
				 abc->WriteLine(textBox2->Text);
				 abc->WriteLine(textBox3->Text);
			 }
			 if (radioButton3->Checked == true)
			 {
				 abc->WriteLine("4");
				 abc->WriteLine(textBox1->Text);
				 abc->WriteLine(textBox2->Text);
				 abc->WriteLine(textBox3->Text);
				 abc->WriteLine(textBox4->Text);
			 }

			 delete abc;
 
		this->Hide();
			 MyForm2^Form2 = gcnew MyForm2();
			 Form2->Show();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true)
			 {
			 button1->Visible=true;
			 label6->Visible=false;
			 label7->Visible=false;
			 label8->Visible=false;
			 label9->Visible=false;
			 label10->Visible=false;
			 label11->Visible=false;
			 label12->Visible=false;
			 label13->Visible=false;
			 label14->Visible=false;
			 checkBox1->Visible=false;
			 }
		 }
};
}
