#pragma once
#include "Player.cpp"
#include "GeneralData.cpp"
#include <vector>
#include <string>

namespace GoFish {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	private:
		GeneralData *data;
	private: System::Windows::Forms::Button^  btnStart;

	private: System::Windows::Forms::Button^  btnEnd;
	private: System::Windows::Forms::Button^  btnNew;
	private: System::Windows::Forms::Button^  btnExit;

	public:
		Table(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  picP2C13;
	private: System::Windows::Forms::PictureBox^  picP2C12;
	private: System::Windows::Forms::PictureBox^  picP2C11;
	private: System::Windows::Forms::PictureBox^  picP2C10;
	private: System::Windows::Forms::PictureBox^  picP2C9;
	private: System::Windows::Forms::PictureBox^  picP2C8;
	private: System::Windows::Forms::PictureBox^  picP2C7;
	private: System::Windows::Forms::PictureBox^  picP2C6;
	private: System::Windows::Forms::PictureBox^  picP2C5;
	private: System::Windows::Forms::PictureBox^  picP2C4;
	private: System::Windows::Forms::PictureBox^  picP2C3;
	private: System::Windows::Forms::PictureBox^  picP2C2;
	private: System::Windows::Forms::PictureBox^  picP2C1;


	private: System::Windows::Forms::PictureBox^  picDeck;
	private: System::Windows::Forms::PictureBox^  picP2P20;
	private: System::Windows::Forms::PictureBox^  picP2P19;
	private: System::Windows::Forms::PictureBox^  picP2P18;
	private: System::Windows::Forms::PictureBox^  picP2P17;
	private: System::Windows::Forms::PictureBox^  picP2P16;
	private: System::Windows::Forms::PictureBox^  picP2P15;
	private: System::Windows::Forms::PictureBox^  picP2P14;
	private: System::Windows::Forms::PictureBox^  picP2P13;
	private: System::Windows::Forms::PictureBox^  picP2P12;
	private: System::Windows::Forms::PictureBox^  picP2P11;
	private: System::Windows::Forms::PictureBox^  picP2P10;
	private: System::Windows::Forms::PictureBox^  picP2P9;
	private: System::Windows::Forms::PictureBox^  picP2P8;
	private: System::Windows::Forms::PictureBox^  picP2P7;
	private: System::Windows::Forms::PictureBox^  picP2P6;
	private: System::Windows::Forms::PictureBox^  picP2P5;
	private: System::Windows::Forms::PictureBox^  picP2P4;
	private: System::Windows::Forms::PictureBox^  picP2P3;
	private: System::Windows::Forms::PictureBox^  picP2P2;
	private: System::Windows::Forms::PictureBox^  picP2P1;


	private: System::Windows::Forms::PictureBox^  picP1C1;
	private: System::Windows::Forms::PictureBox^  picP1C2;
	private: System::Windows::Forms::PictureBox^  picP1C3;
	private: System::Windows::Forms::PictureBox^  picP1C4;
	private: System::Windows::Forms::PictureBox^  picP1C5;
	private: System::Windows::Forms::PictureBox^  picP1C6;
	private: System::Windows::Forms::PictureBox^  picP1C7;
	private: System::Windows::Forms::PictureBox^  picP1C8;
	private: System::Windows::Forms::PictureBox^  picP1C9;
	private: System::Windows::Forms::PictureBox^  picP1C10;
	private: System::Windows::Forms::PictureBox^  picP1C11;
	private: System::Windows::Forms::PictureBox^  picP1C12;
	private: System::Windows::Forms::PictureBox^  picP1C13;
	private: System::Windows::Forms::PictureBox^  picP1P1;
	private: System::Windows::Forms::PictureBox^  picP1P2;
	private: System::Windows::Forms::PictureBox^  picP1P3;
	private: System::Windows::Forms::PictureBox^  picP1P4;
	private: System::Windows::Forms::PictureBox^  picP1P5;
	private: System::Windows::Forms::PictureBox^  picP1P6;
	private: System::Windows::Forms::PictureBox^  picP1P7;
	private: System::Windows::Forms::PictureBox^  picP1P8;
	private: System::Windows::Forms::PictureBox^  picP1P9;
	private: System::Windows::Forms::PictureBox^  picP1P10;
	private: System::Windows::Forms::PictureBox^  picP1P11;
	private: System::Windows::Forms::PictureBox^  picP1P12;
	private: System::Windows::Forms::PictureBox^  picP1P13;
	private: System::Windows::Forms::PictureBox^  picP1P14;
	private: System::Windows::Forms::PictureBox^  picP1P15;
	private: System::Windows::Forms::PictureBox^  picP1P16;
	private: System::Windows::Forms::PictureBox^  picP1P17;
	private: System::Windows::Forms::PictureBox^  picP1P18;
	private: System::Windows::Forms::PictureBox^  picP1P19;
	private: System::Windows::Forms::PictureBox^  picP1P20;
private: System::Windows::Forms::Label^  lblPrompt;


	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Table::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->picP2C13 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C12 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C11 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C10 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C9 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C8 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C7 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C6 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C5 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C4 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C3 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C2 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2C1 = (gcnew System::Windows::Forms::PictureBox());
			this->picDeck = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P20 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P19 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P18 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P17 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P16 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P15 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P14 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P13 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P12 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P11 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P10 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P9 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P8 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P7 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P6 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P5 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P4 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P3 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picP2P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C1 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C2 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C3 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C4 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C5 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C6 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C7 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C8 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C9 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C10 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C11 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C12 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1C13 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P3 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P4 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P5 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P6 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P7 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P8 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P9 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P10 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P11 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P12 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P13 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P14 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P15 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P16 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P17 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P18 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P19 = (gcnew System::Windows::Forms::PictureBox());
			this->picP1P20 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPrompt = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnEnd = (gcnew System::Windows::Forms::Button());
			this->btnNew = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDeck))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P20))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"0.png");
			this->imageList1->Images->SetKeyName(1, L"1.png");
			this->imageList1->Images->SetKeyName(2, L"2.png");
			this->imageList1->Images->SetKeyName(3, L"3.png");
			this->imageList1->Images->SetKeyName(4, L"4.png");
			this->imageList1->Images->SetKeyName(5, L"5.png");
			this->imageList1->Images->SetKeyName(6, L"6.png");
			this->imageList1->Images->SetKeyName(7, L"7.png");
			this->imageList1->Images->SetKeyName(8, L"8.png");
			this->imageList1->Images->SetKeyName(9, L"9.png");
			this->imageList1->Images->SetKeyName(10, L"10.png");
			this->imageList1->Images->SetKeyName(11, L"11.png");
			this->imageList1->Images->SetKeyName(12, L"12.png");
			this->imageList1->Images->SetKeyName(13, L"13.png");
			this->imageList1->Images->SetKeyName(14, L"14.png");
			this->imageList1->Images->SetKeyName(15, L"15.png");
			this->imageList1->Images->SetKeyName(16, L"16.png");
			this->imageList1->Images->SetKeyName(17, L"17.png");
			this->imageList1->Images->SetKeyName(18, L"18.png");
			this->imageList1->Images->SetKeyName(19, L"19.png");
			this->imageList1->Images->SetKeyName(20, L"20.png");
			this->imageList1->Images->SetKeyName(21, L"21.png");
			this->imageList1->Images->SetKeyName(22, L"22.png");
			this->imageList1->Images->SetKeyName(23, L"23.png");
			this->imageList1->Images->SetKeyName(24, L"24.png");
			this->imageList1->Images->SetKeyName(25, L"25.png");
			this->imageList1->Images->SetKeyName(26, L"26.png");
			this->imageList1->Images->SetKeyName(27, L"27.png");
			this->imageList1->Images->SetKeyName(28, L"28.png");
			this->imageList1->Images->SetKeyName(29, L"29.png");
			this->imageList1->Images->SetKeyName(30, L"30.png");
			this->imageList1->Images->SetKeyName(31, L"31.png");
			this->imageList1->Images->SetKeyName(32, L"32.png");
			this->imageList1->Images->SetKeyName(33, L"33.png");
			this->imageList1->Images->SetKeyName(34, L"34.png");
			this->imageList1->Images->SetKeyName(35, L"35.png");
			this->imageList1->Images->SetKeyName(36, L"36.png");
			this->imageList1->Images->SetKeyName(37, L"37.png");
			this->imageList1->Images->SetKeyName(38, L"38.png");
			this->imageList1->Images->SetKeyName(39, L"39.png");
			this->imageList1->Images->SetKeyName(40, L"40.png");
			this->imageList1->Images->SetKeyName(41, L"41.png");
			this->imageList1->Images->SetKeyName(42, L"42.png");
			this->imageList1->Images->SetKeyName(43, L"43.png");
			this->imageList1->Images->SetKeyName(44, L"44.png");
			this->imageList1->Images->SetKeyName(45, L"45.png");
			this->imageList1->Images->SetKeyName(46, L"46.png");
			this->imageList1->Images->SetKeyName(47, L"47.png");
			this->imageList1->Images->SetKeyName(48, L"48.png");
			this->imageList1->Images->SetKeyName(49, L"49.png");
			this->imageList1->Images->SetKeyName(50, L"50.png");
			this->imageList1->Images->SetKeyName(51, L"51.png");
			this->imageList1->Images->SetKeyName(52, L"back.png");
			// 
			// picP2C13
			// 
			this->picP2C13->Location = System::Drawing::Point(713, 27);
			this->picP2C13->Name = L"picP2C13";
			this->picP2C13->Size = System::Drawing::Size(120, 175);
			this->picP2C13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C13->TabIndex = 0;
			this->picP2C13->TabStop = false;
			this->picP2C13->Click += gcnew System::EventHandler(this, &Table::picP2C13_Click);
			// 
			// picP2C12
			// 
			this->picP2C12->Location = System::Drawing::Point(673, 27);
			this->picP2C12->Name = L"picP2C12";
			this->picP2C12->Size = System::Drawing::Size(120, 175);
			this->picP2C12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C12->TabIndex = 1;
			this->picP2C12->TabStop = false;
			this->picP2C12->Click += gcnew System::EventHandler(this, &Table::picP2C12_Click);
			// 
			// picP2C11
			// 
			this->picP2C11->Location = System::Drawing::Point(633, 27);
			this->picP2C11->Name = L"picP2C11";
			this->picP2C11->Size = System::Drawing::Size(120, 175);
			this->picP2C11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C11->TabIndex = 2;
			this->picP2C11->TabStop = false;
			this->picP2C11->Click += gcnew System::EventHandler(this, &Table::picP2C11_Click);
			// 
			// picP2C10
			// 
			this->picP2C10->Location = System::Drawing::Point(593, 27);
			this->picP2C10->Name = L"picP2C10";
			this->picP2C10->Size = System::Drawing::Size(120, 175);
			this->picP2C10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C10->TabIndex = 3;
			this->picP2C10->TabStop = false;
			this->picP2C10->Click += gcnew System::EventHandler(this, &Table::picP2C10_Click);
			// 
			// picP2C9
			// 
			this->picP2C9->Location = System::Drawing::Point(553, 27);
			this->picP2C9->Name = L"picP2C9";
			this->picP2C9->Size = System::Drawing::Size(120, 175);
			this->picP2C9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C9->TabIndex = 4;
			this->picP2C9->TabStop = false;
			this->picP2C9->Click += gcnew System::EventHandler(this, &Table::picP2C9_Click);
			// 
			// picP2C8
			// 
			this->picP2C8->Location = System::Drawing::Point(513, 27);
			this->picP2C8->Name = L"picP2C8";
			this->picP2C8->Size = System::Drawing::Size(120, 175);
			this->picP2C8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C8->TabIndex = 5;
			this->picP2C8->TabStop = false;
			this->picP2C8->Click += gcnew System::EventHandler(this, &Table::picP2C8_Click);
			// 
			// picP2C7
			// 
			this->picP2C7->Location = System::Drawing::Point(473, 27);
			this->picP2C7->Name = L"picP2C7";
			this->picP2C7->Size = System::Drawing::Size(120, 175);
			this->picP2C7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C7->TabIndex = 6;
			this->picP2C7->TabStop = false;
			this->picP2C7->Click += gcnew System::EventHandler(this, &Table::picP2C7_Click);
			// 
			// picP2C6
			// 
			this->picP2C6->Location = System::Drawing::Point(433, 27);
			this->picP2C6->Name = L"picP2C6";
			this->picP2C6->Size = System::Drawing::Size(120, 175);
			this->picP2C6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C6->TabIndex = 7;
			this->picP2C6->TabStop = false;
			this->picP2C6->Click += gcnew System::EventHandler(this, &Table::picP2C6_Click);
			// 
			// picP2C5
			// 
			this->picP2C5->Location = System::Drawing::Point(393, 27);
			this->picP2C5->Name = L"picP2C5";
			this->picP2C5->Size = System::Drawing::Size(120, 175);
			this->picP2C5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C5->TabIndex = 8;
			this->picP2C5->TabStop = false;
			this->picP2C5->Click += gcnew System::EventHandler(this, &Table::picP2C5_Click);
			// 
			// picP2C4
			// 
			this->picP2C4->Location = System::Drawing::Point(353, 27);
			this->picP2C4->Name = L"picP2C4";
			this->picP2C4->Size = System::Drawing::Size(120, 175);
			this->picP2C4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C4->TabIndex = 9;
			this->picP2C4->TabStop = false;
			this->picP2C4->Click += gcnew System::EventHandler(this, &Table::picP2C4_Click);
			// 
			// picP2C3
			// 
			this->picP2C3->Location = System::Drawing::Point(313, 27);
			this->picP2C3->Name = L"picP2C3";
			this->picP2C3->Size = System::Drawing::Size(120, 175);
			this->picP2C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C3->TabIndex = 10;
			this->picP2C3->TabStop = false;
			this->picP2C3->Click += gcnew System::EventHandler(this, &Table::picP2C3_Click);
			// 
			// picP2C2
			// 
			this->picP2C2->Location = System::Drawing::Point(273, 27);
			this->picP2C2->Name = L"picP2C2";
			this->picP2C2->Size = System::Drawing::Size(120, 175);
			this->picP2C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C2->TabIndex = 11;
			this->picP2C2->TabStop = false;
			this->picP2C2->Click += gcnew System::EventHandler(this, &Table::picP2C2_Click);
			// 
			// picP2C1
			// 
			this->picP2C1->Location = System::Drawing::Point(233, 27);
			this->picP2C1->Name = L"picP2C1";
			this->picP2C1->Size = System::Drawing::Size(120, 175);
			this->picP2C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2C1->TabIndex = 12;
			this->picP2C1->TabStop = false;
			this->picP2C1->Click += gcnew System::EventHandler(this, &Table::picP2C1_Click);
			// 
			// picDeck
			// 
			this->picDeck->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picDeck.Image")));
			this->picDeck->Location = System::Drawing::Point(455, 249);
			this->picDeck->Name = L"picDeck";
			this->picDeck->Size = System::Drawing::Size(175, 120);
			this->picDeck->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picDeck->TabIndex = 13;
			this->picDeck->TabStop = false;
			this->picDeck->Click += gcnew System::EventHandler(this, &Table::picDeck_Click);
			// 
			// picP2P20
			// 
			this->picP2P20->Location = System::Drawing::Point(10, 27);
			this->picP2P20->Name = L"picP2P20";
			this->picP2P20->Size = System::Drawing::Size(120, 175);
			this->picP2P20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P20->TabIndex = 14;
			this->picP2P20->TabStop = false;
			// 
			// picP2P19
			// 
			this->picP2P19->Location = System::Drawing::Point(30, 27);
			this->picP2P19->Name = L"picP2P19";
			this->picP2P19->Size = System::Drawing::Size(120, 175);
			this->picP2P19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P19->TabIndex = 15;
			this->picP2P19->TabStop = false;
			// 
			// picP2P18
			// 
			this->picP2P18->Location = System::Drawing::Point(50, 27);
			this->picP2P18->Name = L"picP2P18";
			this->picP2P18->Size = System::Drawing::Size(120, 175);
			this->picP2P18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P18->TabIndex = 16;
			this->picP2P18->TabStop = false;
			// 
			// picP2P17
			// 
			this->picP2P17->Location = System::Drawing::Point(70, 27);
			this->picP2P17->Name = L"picP2P17";
			this->picP2P17->Size = System::Drawing::Size(120, 175);
			this->picP2P17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P17->TabIndex = 17;
			this->picP2P17->TabStop = false;
			// 
			// picP2P16
			// 
			this->picP2P16->Location = System::Drawing::Point(10, 59);
			this->picP2P16->Name = L"picP2P16";
			this->picP2P16->Size = System::Drawing::Size(120, 175);
			this->picP2P16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P16->TabIndex = 18;
			this->picP2P16->TabStop = false;
			// 
			// picP2P15
			// 
			this->picP2P15->Location = System::Drawing::Point(30, 59);
			this->picP2P15->Name = L"picP2P15";
			this->picP2P15->Size = System::Drawing::Size(120, 175);
			this->picP2P15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P15->TabIndex = 19;
			this->picP2P15->TabStop = false;
			// 
			// picP2P14
			// 
			this->picP2P14->Location = System::Drawing::Point(50, 59);
			this->picP2P14->Name = L"picP2P14";
			this->picP2P14->Size = System::Drawing::Size(120, 175);
			this->picP2P14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P14->TabIndex = 20;
			this->picP2P14->TabStop = false;
			// 
			// picP2P13
			// 
			this->picP2P13->Location = System::Drawing::Point(70, 59);
			this->picP2P13->Name = L"picP2P13";
			this->picP2P13->Size = System::Drawing::Size(120, 175);
			this->picP2P13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P13->TabIndex = 21;
			this->picP2P13->TabStop = false;
			// 
			// picP2P12
			// 
			this->picP2P12->Location = System::Drawing::Point(10, 91);
			this->picP2P12->Name = L"picP2P12";
			this->picP2P12->Size = System::Drawing::Size(120, 175);
			this->picP2P12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P12->TabIndex = 22;
			this->picP2P12->TabStop = false;
			// 
			// picP2P11
			// 
			this->picP2P11->Location = System::Drawing::Point(30, 91);
			this->picP2P11->Name = L"picP2P11";
			this->picP2P11->Size = System::Drawing::Size(120, 175);
			this->picP2P11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P11->TabIndex = 23;
			this->picP2P11->TabStop = false;
			// 
			// picP2P10
			// 
			this->picP2P10->Location = System::Drawing::Point(50, 91);
			this->picP2P10->Name = L"picP2P10";
			this->picP2P10->Size = System::Drawing::Size(120, 175);
			this->picP2P10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P10->TabIndex = 24;
			this->picP2P10->TabStop = false;
			// 
			// picP2P9
			// 
			this->picP2P9->Location = System::Drawing::Point(70, 91);
			this->picP2P9->Name = L"picP2P9";
			this->picP2P9->Size = System::Drawing::Size(120, 175);
			this->picP2P9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P9->TabIndex = 25;
			this->picP2P9->TabStop = false;
			// 
			// picP2P8
			// 
			this->picP2P8->Location = System::Drawing::Point(10, 123);
			this->picP2P8->Name = L"picP2P8";
			this->picP2P8->Size = System::Drawing::Size(120, 175);
			this->picP2P8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P8->TabIndex = 26;
			this->picP2P8->TabStop = false;
			// 
			// picP2P7
			// 
			this->picP2P7->Location = System::Drawing::Point(30, 123);
			this->picP2P7->Name = L"picP2P7";
			this->picP2P7->Size = System::Drawing::Size(120, 175);
			this->picP2P7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P7->TabIndex = 27;
			this->picP2P7->TabStop = false;
			// 
			// picP2P6
			// 
			this->picP2P6->Location = System::Drawing::Point(50, 123);
			this->picP2P6->Name = L"picP2P6";
			this->picP2P6->Size = System::Drawing::Size(120, 175);
			this->picP2P6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P6->TabIndex = 28;
			this->picP2P6->TabStop = false;
			// 
			// picP2P5
			// 
			this->picP2P5->Location = System::Drawing::Point(70, 123);
			this->picP2P5->Name = L"picP2P5";
			this->picP2P5->Size = System::Drawing::Size(120, 175);
			this->picP2P5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P5->TabIndex = 29;
			this->picP2P5->TabStop = false;
			// 
			// picP2P4
			// 
			this->picP2P4->Location = System::Drawing::Point(10, 155);
			this->picP2P4->Name = L"picP2P4";
			this->picP2P4->Size = System::Drawing::Size(120, 175);
			this->picP2P4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P4->TabIndex = 30;
			this->picP2P4->TabStop = false;
			// 
			// picP2P3
			// 
			this->picP2P3->Location = System::Drawing::Point(30, 155);
			this->picP2P3->Name = L"picP2P3";
			this->picP2P3->Size = System::Drawing::Size(120, 175);
			this->picP2P3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P3->TabIndex = 31;
			this->picP2P3->TabStop = false;
			// 
			// picP2P2
			// 
			this->picP2P2->Location = System::Drawing::Point(50, 155);
			this->picP2P2->Name = L"picP2P2";
			this->picP2P2->Size = System::Drawing::Size(120, 175);
			this->picP2P2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P2->TabIndex = 32;
			this->picP2P2->TabStop = false;
			// 
			// picP2P1
			// 
			this->picP2P1->Location = System::Drawing::Point(70, 155);
			this->picP2P1->Name = L"picP2P1";
			this->picP2P1->Size = System::Drawing::Size(120, 175);
			this->picP2P1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP2P1->TabIndex = 33;
			this->picP2P1->TabStop = false;
			// 
			// picP1C1
			// 
			this->picP1C1->Location = System::Drawing::Point(510, 390);
			this->picP1C1->Name = L"picP1C1";
			this->picP1C1->Size = System::Drawing::Size(120, 175);
			this->picP1C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C1->TabIndex = 46;
			this->picP1C1->TabStop = false;
			this->picP1C1->Click += gcnew System::EventHandler(this, &Table::picP1C1_Click);
			// 
			// picP1C2
			// 
			this->picP1C2->Location = System::Drawing::Point(470, 390);
			this->picP1C2->Name = L"picP1C2";
			this->picP1C2->Size = System::Drawing::Size(120, 175);
			this->picP1C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C2->TabIndex = 45;
			this->picP1C2->TabStop = false;
			this->picP1C2->Click += gcnew System::EventHandler(this, &Table::picP1C2_Click);
			// 
			// picP1C3
			// 
			this->picP1C3->Location = System::Drawing::Point(430, 390);
			this->picP1C3->Name = L"picP1C3";
			this->picP1C3->Size = System::Drawing::Size(120, 175);
			this->picP1C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C3->TabIndex = 44;
			this->picP1C3->TabStop = false;
			this->picP1C3->Click += gcnew System::EventHandler(this, &Table::picP1C3_Click);
			// 
			// picP1C4
			// 
			this->picP1C4->Location = System::Drawing::Point(390, 390);
			this->picP1C4->Name = L"picP1C4";
			this->picP1C4->Size = System::Drawing::Size(120, 175);
			this->picP1C4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C4->TabIndex = 43;
			this->picP1C4->TabStop = false;
			this->picP1C4->Click += gcnew System::EventHandler(this, &Table::picP1C4_Click);
			// 
			// picP1C5
			// 
			this->picP1C5->Location = System::Drawing::Point(350, 390);
			this->picP1C5->Name = L"picP1C5";
			this->picP1C5->Size = System::Drawing::Size(120, 175);
			this->picP1C5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C5->TabIndex = 42;
			this->picP1C5->TabStop = false;
			this->picP1C5->Click += gcnew System::EventHandler(this, &Table::picP1C5_Click);
			// 
			// picP1C6
			// 
			this->picP1C6->Location = System::Drawing::Point(310, 390);
			this->picP1C6->Name = L"picP1C6";
			this->picP1C6->Size = System::Drawing::Size(120, 175);
			this->picP1C6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C6->TabIndex = 41;
			this->picP1C6->TabStop = false;
			this->picP1C6->Click += gcnew System::EventHandler(this, &Table::picP1C6_Click);
			// 
			// picP1C7
			// 
			this->picP1C7->Location = System::Drawing::Point(270, 390);
			this->picP1C7->Name = L"picP1C7";
			this->picP1C7->Size = System::Drawing::Size(120, 175);
			this->picP1C7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C7->TabIndex = 40;
			this->picP1C7->TabStop = false;
			this->picP1C7->Click += gcnew System::EventHandler(this, &Table::picP1C7_Click);
			// 
			// picP1C8
			// 
			this->picP1C8->Location = System::Drawing::Point(230, 390);
			this->picP1C8->Name = L"picP1C8";
			this->picP1C8->Size = System::Drawing::Size(120, 175);
			this->picP1C8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C8->TabIndex = 39;
			this->picP1C8->TabStop = false;
			this->picP1C8->Click += gcnew System::EventHandler(this, &Table::picP1C8_Click);
			// 
			// picP1C9
			// 
			this->picP1C9->Location = System::Drawing::Point(190, 390);
			this->picP1C9->Name = L"picP1C9";
			this->picP1C9->Size = System::Drawing::Size(120, 175);
			this->picP1C9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C9->TabIndex = 38;
			this->picP1C9->TabStop = false;
			this->picP1C9->Click += gcnew System::EventHandler(this, &Table::picP1C9_Click);
			// 
			// picP1C10
			// 
			this->picP1C10->Location = System::Drawing::Point(150, 390);
			this->picP1C10->Name = L"picP1C10";
			this->picP1C10->Size = System::Drawing::Size(120, 175);
			this->picP1C10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C10->TabIndex = 37;
			this->picP1C10->TabStop = false;
			this->picP1C10->Click += gcnew System::EventHandler(this, &Table::picP1C10_Click);
			// 
			// picP1C11
			// 
			this->picP1C11->Location = System::Drawing::Point(110, 390);
			this->picP1C11->Name = L"picP1C11";
			this->picP1C11->Size = System::Drawing::Size(120, 175);
			this->picP1C11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C11->TabIndex = 36;
			this->picP1C11->TabStop = false;
			this->picP1C11->Click += gcnew System::EventHandler(this, &Table::picP1C11_Click);
			// 
			// picP1C12
			// 
			this->picP1C12->Location = System::Drawing::Point(70, 390);
			this->picP1C12->Name = L"picP1C12";
			this->picP1C12->Size = System::Drawing::Size(120, 175);
			this->picP1C12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C12->TabIndex = 35;
			this->picP1C12->TabStop = false;
			this->picP1C12->Click += gcnew System::EventHandler(this, &Table::picP1C12_Click);
			// 
			// picP1C13
			// 
			this->picP1C13->Location = System::Drawing::Point(30, 390);
			this->picP1C13->Name = L"picP1C13";
			this->picP1C13->Size = System::Drawing::Size(120, 175);
			this->picP1C13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1C13->TabIndex = 34;
			this->picP1C13->TabStop = false;
			this->picP1C13->Click += gcnew System::EventHandler(this, &Table::picP1C13_Click);
			// 
			// picP1P1
			// 
			this->picP1P1->Location = System::Drawing::Point(735, 390);
			this->picP1P1->Name = L"picP1P1";
			this->picP1P1->Size = System::Drawing::Size(120, 175);
			this->picP1P1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P1->TabIndex = 66;
			this->picP1P1->TabStop = false;
			// 
			// picP1P2
			// 
			this->picP1P2->Location = System::Drawing::Point(715, 390);
			this->picP1P2->Name = L"picP1P2";
			this->picP1P2->Size = System::Drawing::Size(120, 175);
			this->picP1P2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P2->TabIndex = 65;
			this->picP1P2->TabStop = false;
			// 
			// picP1P3
			// 
			this->picP1P3->Location = System::Drawing::Point(695, 390);
			this->picP1P3->Name = L"picP1P3";
			this->picP1P3->Size = System::Drawing::Size(120, 175);
			this->picP1P3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P3->TabIndex = 64;
			this->picP1P3->TabStop = false;
			// 
			// picP1P4
			// 
			this->picP1P4->Location = System::Drawing::Point(675, 390);
			this->picP1P4->Name = L"picP1P4";
			this->picP1P4->Size = System::Drawing::Size(120, 175);
			this->picP1P4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P4->TabIndex = 63;
			this->picP1P4->TabStop = false;
			// 
			// picP1P5
			// 
			this->picP1P5->Location = System::Drawing::Point(735, 358);
			this->picP1P5->Name = L"picP1P5";
			this->picP1P5->Size = System::Drawing::Size(120, 175);
			this->picP1P5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P5->TabIndex = 62;
			this->picP1P5->TabStop = false;
			// 
			// picP1P6
			// 
			this->picP1P6->Location = System::Drawing::Point(715, 358);
			this->picP1P6->Name = L"picP1P6";
			this->picP1P6->Size = System::Drawing::Size(120, 175);
			this->picP1P6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P6->TabIndex = 61;
			this->picP1P6->TabStop = false;
			// 
			// picP1P7
			// 
			this->picP1P7->Location = System::Drawing::Point(695, 358);
			this->picP1P7->Name = L"picP1P7";
			this->picP1P7->Size = System::Drawing::Size(120, 175);
			this->picP1P7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P7->TabIndex = 60;
			this->picP1P7->TabStop = false;
			// 
			// picP1P8
			// 
			this->picP1P8->Location = System::Drawing::Point(675, 358);
			this->picP1P8->Name = L"picP1P8";
			this->picP1P8->Size = System::Drawing::Size(120, 175);
			this->picP1P8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P8->TabIndex = 59;
			this->picP1P8->TabStop = false;
			// 
			// picP1P9
			// 
			this->picP1P9->Location = System::Drawing::Point(735, 326);
			this->picP1P9->Name = L"picP1P9";
			this->picP1P9->Size = System::Drawing::Size(120, 175);
			this->picP1P9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P9->TabIndex = 58;
			this->picP1P9->TabStop = false;
			// 
			// picP1P10
			// 
			this->picP1P10->Location = System::Drawing::Point(715, 326);
			this->picP1P10->Name = L"picP1P10";
			this->picP1P10->Size = System::Drawing::Size(120, 175);
			this->picP1P10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P10->TabIndex = 57;
			this->picP1P10->TabStop = false;
			// 
			// picP1P11
			// 
			this->picP1P11->Location = System::Drawing::Point(695, 326);
			this->picP1P11->Name = L"picP1P11";
			this->picP1P11->Size = System::Drawing::Size(120, 175);
			this->picP1P11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P11->TabIndex = 56;
			this->picP1P11->TabStop = false;
			// 
			// picP1P12
			// 
			this->picP1P12->Location = System::Drawing::Point(675, 326);
			this->picP1P12->Name = L"picP1P12";
			this->picP1P12->Size = System::Drawing::Size(120, 175);
			this->picP1P12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P12->TabIndex = 55;
			this->picP1P12->TabStop = false;
			// 
			// picP1P13
			// 
			this->picP1P13->Location = System::Drawing::Point(735, 294);
			this->picP1P13->Name = L"picP1P13";
			this->picP1P13->Size = System::Drawing::Size(120, 175);
			this->picP1P13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P13->TabIndex = 54;
			this->picP1P13->TabStop = false;
			// 
			// picP1P14
			// 
			this->picP1P14->Location = System::Drawing::Point(715, 294);
			this->picP1P14->Name = L"picP1P14";
			this->picP1P14->Size = System::Drawing::Size(120, 175);
			this->picP1P14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P14->TabIndex = 53;
			this->picP1P14->TabStop = false;
			// 
			// picP1P15
			// 
			this->picP1P15->Location = System::Drawing::Point(695, 294);
			this->picP1P15->Name = L"picP1P15";
			this->picP1P15->Size = System::Drawing::Size(120, 175);
			this->picP1P15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P15->TabIndex = 52;
			this->picP1P15->TabStop = false;
			// 
			// picP1P16
			// 
			this->picP1P16->Location = System::Drawing::Point(675, 294);
			this->picP1P16->Name = L"picP1P16";
			this->picP1P16->Size = System::Drawing::Size(120, 175);
			this->picP1P16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P16->TabIndex = 51;
			this->picP1P16->TabStop = false;
			// 
			// picP1P17
			// 
			this->picP1P17->Location = System::Drawing::Point(735, 262);
			this->picP1P17->Name = L"picP1P17";
			this->picP1P17->Size = System::Drawing::Size(120, 175);
			this->picP1P17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P17->TabIndex = 50;
			this->picP1P17->TabStop = false;
			// 
			// picP1P18
			// 
			this->picP1P18->Location = System::Drawing::Point(715, 262);
			this->picP1P18->Name = L"picP1P18";
			this->picP1P18->Size = System::Drawing::Size(120, 175);
			this->picP1P18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P18->TabIndex = 49;
			this->picP1P18->TabStop = false;
			// 
			// picP1P19
			// 
			this->picP1P19->Location = System::Drawing::Point(695, 262);
			this->picP1P19->Name = L"picP1P19";
			this->picP1P19->Size = System::Drawing::Size(120, 175);
			this->picP1P19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P19->TabIndex = 48;
			this->picP1P19->TabStop = false;
			// 
			// picP1P20
			// 
			this->picP1P20->Location = System::Drawing::Point(675, 262);
			this->picP1P20->Name = L"picP1P20";
			this->picP1P20->Size = System::Drawing::Size(120, 175);
			this->picP1P20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picP1P20->TabIndex = 47;
			this->picP1P20->TabStop = false;
			// 
			// lblPrompt
			// 
			this->lblPrompt->BackColor = System::Drawing::Color::White;
			this->lblPrompt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPrompt->Location = System::Drawing::Point(230, 294);
			this->lblPrompt->Name = L"lblPrompt";
			this->lblPrompt->Size = System::Drawing::Size(200, 75);
			this->lblPrompt->TabIndex = 67;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(230, 243);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(80, 23);
			this->btnStart->TabIndex = 68;
			this->btnStart->Text = L"Start Turn";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Table::btnStart_Click);
			// 
			// btnEnd
			// 
			this->btnEnd->Location = System::Drawing::Point(337, 243);
			this->btnEnd->Name = L"btnEnd";
			this->btnEnd->Size = System::Drawing::Size(82, 23);
			this->btnEnd->TabIndex = 69;
			this->btnEnd->Text = L"End Turn";
			this->btnEnd->UseVisualStyleBackColor = true;
			this->btnEnd->Click += gcnew System::EventHandler(this, &Table::btnEnd_Click);
			// 
			// btnNew
			// 
			this->btnNew->Location = System::Drawing::Point(899, 243);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(75, 55);
			this->btnNew->TabIndex = 70;
			this->btnNew->Text = L"New Game";
			this->btnNew->UseVisualStyleBackColor = true;
			this->btnNew->Click += gcnew System::EventHandler(this, &Table::btnNew_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(899, 326);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 43);
			this->btnExit->TabIndex = 71;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Table::btnExit_Click);
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 600);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnNew);
			this->Controls->Add(this->btnEnd);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->lblPrompt);
			this->Controls->Add(this->picP1P1);
			this->Controls->Add(this->picP1P2);
			this->Controls->Add(this->picP1P3);
			this->Controls->Add(this->picP1P4);
			this->Controls->Add(this->picP1P5);
			this->Controls->Add(this->picP1P6);
			this->Controls->Add(this->picP1P7);
			this->Controls->Add(this->picP1P8);
			this->Controls->Add(this->picP1P9);
			this->Controls->Add(this->picP1P10);
			this->Controls->Add(this->picP1P11);
			this->Controls->Add(this->picP1P12);
			this->Controls->Add(this->picP1P13);
			this->Controls->Add(this->picP1P14);
			this->Controls->Add(this->picP1P15);
			this->Controls->Add(this->picP1P16);
			this->Controls->Add(this->picP1P17);
			this->Controls->Add(this->picP1P18);
			this->Controls->Add(this->picP1P19);
			this->Controls->Add(this->picP1P20);
			this->Controls->Add(this->picP1C1);
			this->Controls->Add(this->picP1C2);
			this->Controls->Add(this->picP1C3);
			this->Controls->Add(this->picP1C4);
			this->Controls->Add(this->picP1C5);
			this->Controls->Add(this->picP1C6);
			this->Controls->Add(this->picP1C7);
			this->Controls->Add(this->picP1C8);
			this->Controls->Add(this->picP1C9);
			this->Controls->Add(this->picP1C10);
			this->Controls->Add(this->picP1C11);
			this->Controls->Add(this->picP1C12);
			this->Controls->Add(this->picP1C13);
			this->Controls->Add(this->picP2P1);
			this->Controls->Add(this->picP2P2);
			this->Controls->Add(this->picP2P3);
			this->Controls->Add(this->picP2P4);
			this->Controls->Add(this->picP2P5);
			this->Controls->Add(this->picP2P6);
			this->Controls->Add(this->picP2P7);
			this->Controls->Add(this->picP2P8);
			this->Controls->Add(this->picP2P9);
			this->Controls->Add(this->picP2P10);
			this->Controls->Add(this->picP2P11);
			this->Controls->Add(this->picP2P12);
			this->Controls->Add(this->picP2P13);
			this->Controls->Add(this->picP2P14);
			this->Controls->Add(this->picP2P15);
			this->Controls->Add(this->picP2P16);
			this->Controls->Add(this->picP2P17);
			this->Controls->Add(this->picP2P18);
			this->Controls->Add(this->picP2P19);
			this->Controls->Add(this->picP2P20);
			this->Controls->Add(this->picDeck);
			this->Controls->Add(this->picP2C1);
			this->Controls->Add(this->picP2C2);
			this->Controls->Add(this->picP2C3);
			this->Controls->Add(this->picP2C4);
			this->Controls->Add(this->picP2C5);
			this->Controls->Add(this->picP2C6);
			this->Controls->Add(this->picP2C7);
			this->Controls->Add(this->picP2C8);
			this->Controls->Add(this->picP2C9);
			this->Controls->Add(this->picP2C10);
			this->Controls->Add(this->picP2C11);
			this->Controls->Add(this->picP2C12);
			this->Controls->Add(this->picP2C13);
			this->Name = L"Table";
			this->Text = L"Go Fish";
			this->Load += gcnew System::EventHandler(this, &Table::Table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDeck))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP2P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1C13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picP1P20))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Event handler for loading at start.
private: System::Void Table_Load(System::Object^  sender, System::EventArgs^  e) {
	// Only New Game and Exit button are visible.
	this->btnEnd->Visible = false;
	this->btnStart->Visible = false;
	this->lblPrompt->Visible = false;
	this->picDeck->Visible = false;
}
		 // Event handlers for button clicks.
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
	// Close the form.
	this->Close();
}
private: System::Void btnNew_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = SystemColors::Control;
	// Make visible for other buttons and the deck.
	this->btnEnd->Visible = true;
	this->btnStart->Visible = true;
	this->lblPrompt->Visible = true;
	this->picDeck->Visible = true;
	// Declaring variables for a new game.
	this->data = new GeneralData();
	this->data->p1IsPlaying = true;
	this->data->isAsking = false;
	// Set up deck.
	for (int i = 0; i < 52; i++)
	{
		this->data->deck.push_back(i);
	}
	// Each player draw 7 cards.
	for (int i = 0; i < 7; i++)
	{
		this->data->p1.drawCard(this->data->deck);
		this->data->p2.drawCard(this->data->deck);
	}
	// Clear all the cards face up to start a new game.
	this->cleanCardPlayer1();
	this->cleanCardPlayer2();
	this->cleanPairPlayer1();
	this->cleanPairPlayer2();
	// Put all the card face down to see the number of cards.
	this->hideCardPlayer1();
	this->hideCardPlayer2();
	// Place pairs.
	this->data->p1.placePairAfterDeal();
	this->data->p2.placePairAfterDeal();
	// First turn is of Player 1.
	this->lblPrompt->Text = "Player 1's turn.\n"
		"Click Start Turn to begin.";
	// Change the state of controls.
	this->picDeck->Enabled = false;
	this->btnEnd->Enabled = false;
	this->btnStart->Enabled = true;
	this->checkWinner();
}
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
	this->data->isAsking = true;		// Allow a player to ask for a card.
	if (this->data->p1IsPlaying) {
		this->showCardsPlayer1();
		this->hideCardPlayer2();
		this->showPairsPlayer1();
		this->showPairsPlayer2();
	}
	else {
		this->hideCardPlayer1();
		this->showCardsPlayer2();
		this->showPairsPlayer1();
		this->showPairsPlayer2();
	}
	this->btnStart->Enabled = false;		// Hide the start button.
}
private: System::Void btnEnd_Click(System::Object^  sender, System::EventArgs^  e) {
	// Hide the cards of the playing user, toggle the turn, and prompt.
	if (this->data->p1IsPlaying) {
		this->hideCardPlayer1();
		this->data->p1IsPlaying = false;
		this->lblPrompt->Text = "Player 2's turn.\n"
			"Click Start Turn to play.";
	}
	else {
		this->hideCardPlayer2();
		this->data->p1IsPlaying = true;
		this->lblPrompt->Text = "Player 1's turn.\n"
			"Click Start Turn to play.";
	}
	// Change the state of controls.
	this->btnStart->Enabled = true;
	this->btnEnd->Enabled = false;
}
		 // Event handlers for card clicks (picture box clicks)
private: System::Void picDeck_Click(System::Object^  sender, System::EventArgs^  e) {
	// For drawing a card from the deck.
	int beforeDraw, afterDraw;		// Check if have a pair after drawing.
	// Draw a card, compare the number of pair before and after drawing to prompt
	// the right message and place the new pair.
	if (this->data->p1IsPlaying) {
		beforeDraw = this->data->p1.getPairCount();
		this->data->p1.drawCard(this->data->deck);
		this->data->p1.placePair();
		this->showCardsPlayer1();
		afterDraw = this->data->p1.getPairCount();
		if (beforeDraw != afterDraw) {
			this->lblPrompt->Text = "You have a new pair.\n"
				"Click End Turn to hide cards.";
			this->showPairsPlayer1();
		}
		else {
			this->lblPrompt->Text = "You got a new card.\n"
				"Click End Turn to hide cards.";
		}
	}
	else {
		beforeDraw = this->data->p2.getPairCount();
		this->data->p2.drawCard(this->data->deck);
		this->data->p2.placePair();
		this->showCardsPlayer2();
		afterDraw = this->data->p2.getPairCount();
		if (beforeDraw != afterDraw) {
			this->lblPrompt->Text = "You have a new pair.\n"
				"Click End Turn to hide cards.";
			this->showPairsPlayer2();
		}
		else {
			this->lblPrompt->Text = "You got a new card.\n"
				"Click End Turn to hide cards.";
		}
	}
	if (this->data->deck.size() == 0) this->picDeck->Image = nullptr;
	// Change the state of controls.
	this->picDeck->Enabled = false;
	this->btnEnd->Enabled = true;
	this->checkWinner();
}
private: System::Void picP1C1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[0]);
	}
}
private: System::Void picP1C2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C2->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[1]);
	}
}
private: System::Void picP1C3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C3->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[2]);
	}
}
private: System::Void picP1C4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C4->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[3]);
	}
}
private: System::Void picP1C5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C5->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[4]);
	}
}
private: System::Void picP1C6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C6->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[5]);
	}
}
private: System::Void picP1C7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C7->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[6]);
	}
}
private: System::Void picP1C8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C8->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[7]);
	}
}
private: System::Void picP1C9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C9->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[8]);
	}
}
private: System::Void picP1C10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C10->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[9]);
	}
}
private: System::Void picP1C11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C11->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[10]);
	}
}
private: System::Void picP1C12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C12->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[11]);
	}
}
private: System::Void picP1C13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && this->data->p1IsPlaying && this->picP1C13->Image != nullptr) {
		this->p1AskCard(this->data->p1.getCardsOnHand()[12]);
	}
}
private: System::Void picP2C1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying)) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[0]);
	}
}
private: System::Void picP2C2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C2->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[1]);
	}
}
private: System::Void picP2C3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C3->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[2]);
	}
}
private: System::Void picP2C4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C4->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[3]);
	}
}
private: System::Void picP2C5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C5->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[4]);
	}
}
private: System::Void picP2C6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C6->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[5]);
	}
}
private: System::Void picP2C7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C7->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[6]);
	}
}
private: System::Void picP2C8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C8->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[7]);
	}
}
private: System::Void picP2C9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C9->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[8]);
	}
}
private: System::Void picP2C10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C10->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[9]);
	}
}
private: System::Void picP2C11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C11->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[10]);
	}
}
private: System::Void picP2C12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C12->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[11]);
	}
}
private: System::Void picP2C13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->data->isAsking && !(this->data->p1IsPlaying) && this->picP2C13->Image != nullptr) {
		this->p2AskCard(this->data->p2.getCardsOnHand()[12]);
	}
}
		 // Helper methods.
private: System::Void cleanPairPlayer1() {
	// clean all picture of pairs.
	this->picP1P20->Image = nullptr;
	this->picP1P19->Image = nullptr;
	this->picP1P18->Image = nullptr;
	this->picP1P17->Image = nullptr;
	this->picP1P16->Image = nullptr;
	this->picP1P15->Image = nullptr;
	this->picP1P14->Image = nullptr;
	this->picP1P13->Image = nullptr;
	this->picP1P12->Image = nullptr;
	this->picP1P11->Image = nullptr;
	this->picP1P10->Image = nullptr;
	this->picP1P9->Image = nullptr;
	this->picP1P8->Image = nullptr;
	this->picP1P7->Image = nullptr;
	this->picP1P6->Image = nullptr;
	this->picP1P5->Image = nullptr;
	this->picP1P4->Image = nullptr;
	this->picP1P3->Image = nullptr;
	this->picP1P2->Image = nullptr;
	this->picP1P1->Image = nullptr;
}
private: System::Void cleanPairPlayer2() {
	// clean all picture of pairs.
	this->picP2P20->Image = nullptr;
	this->picP2P19->Image = nullptr;
	this->picP2P18->Image = nullptr;
	this->picP2P17->Image = nullptr;
	this->picP2P16->Image = nullptr;
	this->picP2P15->Image = nullptr;
	this->picP2P14->Image = nullptr;
	this->picP2P13->Image = nullptr;
	this->picP2P12->Image = nullptr;
	this->picP2P11->Image = nullptr;
	this->picP2P10->Image = nullptr;
	this->picP2P9->Image = nullptr;
	this->picP2P8->Image = nullptr;
	this->picP2P7->Image = nullptr;
	this->picP2P6->Image = nullptr;
	this->picP2P5->Image = nullptr;
	this->picP2P4->Image = nullptr;
	this->picP2P3->Image = nullptr;
	this->picP2P2->Image = nullptr;
	this->picP2P1->Image = nullptr;
}
private: System::Void cleanCardPlayer1() {
	// clean all picture of cards
	this->picP1C13->Image = nullptr;
	this->picP1C12->Image = nullptr;
	this->picP1C11->Image = nullptr;
	this->picP1C10->Image = nullptr;
	this->picP1C9->Image = nullptr;
	this->picP1C8->Image = nullptr;
	this->picP1C7->Image = nullptr;
	this->picP1C6->Image = nullptr;
	this->picP1C5->Image = nullptr;
	this->picP1C4->Image = nullptr;
	this->picP1C3->Image = nullptr;
	this->picP1C2->Image = nullptr;
	this->picP1C1->Image = nullptr;
}
private: System::Void cleanCardPlayer2() {
	// clean all picture of cards
	this->picP2C13->Image = nullptr;
	this->picP2C12->Image = nullptr;
	this->picP2C11->Image = nullptr;
	this->picP2C10->Image = nullptr;
	this->picP2C9->Image = nullptr;
	this->picP2C8->Image = nullptr;
	this->picP2C7->Image = nullptr;
	this->picP2C6->Image = nullptr;
	this->picP2C5->Image = nullptr;
	this->picP2C4->Image = nullptr;
	this->picP2C3->Image = nullptr;
	this->picP2C2->Image = nullptr;
	this->picP2C1->Image = nullptr;
}
private: System::Void hideCardPlayer1() {
	// Display the back of all cards.
	this->cleanCardPlayer1();
	switch (this->data->p1.getNumCardOnHand()) {
	case 13:
		this->picP1C13->Image = this->imageList1->Images[52];
	case 12:
		this->picP1C12->Image = this->imageList1->Images[52];
	case 11:
		this->picP1C11->Image = this->imageList1->Images[52];
	case 10:
		this->picP1C10->Image = this->imageList1->Images[52];
	case 9:
		this->picP1C9->Image = this->imageList1->Images[52];
	case 8:
		this->picP1C8->Image = this->imageList1->Images[52];
	case 7:
		this->picP1C7->Image = this->imageList1->Images[52];
	case 6:
		this->picP1C6->Image = this->imageList1->Images[52];
	case 5:
		this->picP1C5->Image = this->imageList1->Images[52];
	case 4:
		this->picP1C4->Image = this->imageList1->Images[52];
	case 3:
		this->picP1C3->Image = this->imageList1->Images[52];
	case 2:
		this->picP1C2->Image = this->imageList1->Images[52];
	case 1:
		this->picP1C1->Image = this->imageList1->Images[52];
	}
}
private: System::Void hideCardPlayer2() {
	// Display the back of all cards.
	this->cleanCardPlayer2();
	switch (this->data->p2.getNumCardOnHand()) {
	case 13:
		this->picP2C13->Image = this->imageList1->Images[52];
	case 12:
		this->picP2C12->Image = this->imageList1->Images[52];
	case 11:
		this->picP2C11->Image = this->imageList1->Images[52];
	case 10:
		this->picP2C10->Image = this->imageList1->Images[52];
	case 9:
		this->picP2C9->Image = this->imageList1->Images[52];
	case 8:
		this->picP2C8->Image = this->imageList1->Images[52];
	case 7:
		this->picP2C7->Image = this->imageList1->Images[52];
	case 6:
		this->picP2C6->Image = this->imageList1->Images[52];
	case 5:
		this->picP2C5->Image = this->imageList1->Images[52];
	case 4:
		this->picP2C4->Image = this->imageList1->Images[52];
	case 3:
		this->picP2C3->Image = this->imageList1->Images[52];
	case 2:
		this->picP2C2->Image = this->imageList1->Images[52];
	case 1:
		this->picP2C1->Image = this->imageList1->Images[52];
	}
}
private: System::Void showCardsPlayer1() {
	// Display the face of all cards.
	this->cleanCardPlayer1();
	vector<int> cardsOnHand = this->data->p1.getCardsOnHand();
	switch (this->data->p1.getNumCardOnHand()) {
	case 13:
		this->picP1C13->Image = this->imageList1->Images[cardsOnHand[12]];
	case 12:
		this->picP1C12->Image = this->imageList1->Images[cardsOnHand[11]];
	case 11:
		this->picP1C11->Image = this->imageList1->Images[cardsOnHand[10]];
	case 10:
		this->picP1C10->Image = this->imageList1->Images[cardsOnHand[9]];
	case 9:
		this->picP1C9->Image = this->imageList1->Images[cardsOnHand[8]];
	case 8:
		this->picP1C8->Image = this->imageList1->Images[cardsOnHand[7]];
	case 7:
		this->picP1C7->Image = this->imageList1->Images[cardsOnHand[6]];
	case 6:
		this->picP1C6->Image = this->imageList1->Images[cardsOnHand[5]];
	case 5:
		this->picP1C5->Image = this->imageList1->Images[cardsOnHand[4]];
	case 4:
		this->picP1C4->Image = this->imageList1->Images[cardsOnHand[3]];
	case 3:
		this->picP1C3->Image = this->imageList1->Images[cardsOnHand[2]];
	case 2:
		this->picP1C2->Image = this->imageList1->Images[cardsOnHand[1]];
	case 1:
		this->picP1C1->Image = this->imageList1->Images[cardsOnHand[0]];
	}
	this->lblPrompt->Text = "Click a card to ask for.";
}
private: System::Void showCardsPlayer2() {
	// Display the face of all cards.
	this->cleanCardPlayer2();
	vector<int> cardsOnHand = this->data->p2.getCardsOnHand();
	switch (this->data->p2.getNumCardOnHand()) {
	case 13:
		this->picP2C13->Image = this->imageList1->Images[cardsOnHand[12]];
	case 12:
		this->picP2C12->Image = this->imageList1->Images[cardsOnHand[11]];
	case 11:
		this->picP2C11->Image = this->imageList1->Images[cardsOnHand[10]];
	case 10:
		this->picP2C10->Image = this->imageList1->Images[cardsOnHand[9]];
	case 9:
		this->picP2C9->Image = this->imageList1->Images[cardsOnHand[8]];
	case 8:
		this->picP2C8->Image = this->imageList1->Images[cardsOnHand[7]];
	case 7:
		this->picP2C7->Image = this->imageList1->Images[cardsOnHand[6]];
	case 6:
		this->picP2C6->Image = this->imageList1->Images[cardsOnHand[5]];
	case 5:
		this->picP2C5->Image = this->imageList1->Images[cardsOnHand[4]];
	case 4:
		this->picP2C4->Image = this->imageList1->Images[cardsOnHand[3]];
	case 3:
		this->picP2C3->Image = this->imageList1->Images[cardsOnHand[2]];
	case 2:
		this->picP2C2->Image = this->imageList1->Images[cardsOnHand[1]];
	case 1:
		this->picP2C1->Image = this->imageList1->Images[cardsOnHand[0]];
	}
	this->lblPrompt->Text = "Click a card to ask for.";
}
private: System::Void showPairsPlayer1() {
	// Display the face of all pairs.
	vector<int> pairs = this->data->p1.getPairList();
	switch (pairs.size()) {
	case 20:
		this->picP1P20->Image = this->imageList1->Images[pairs[19]];
	case 19:
		this->picP1P19->Image = this->imageList1->Images[pairs[18]];
	case 18:
		this->picP1P18->Image = this->imageList1->Images[pairs[17]];
	case 17:
		this->picP1P17->Image = this->imageList1->Images[pairs[16]];
	case 16:
		this->picP1P16->Image = this->imageList1->Images[pairs[15]];
	case 15:
		this->picP1P15->Image = this->imageList1->Images[pairs[14]];
	case 14:
		this->picP1P14->Image = this->imageList1->Images[pairs[13]];
	case 13:
		this->picP1P13->Image = this->imageList1->Images[pairs[12]];
	case 12:
		this->picP1P12->Image = this->imageList1->Images[pairs[11]];
	case 11:
		this->picP1P11->Image = this->imageList1->Images[pairs[10]];
	case 10:
		this->picP1P10->Image = this->imageList1->Images[pairs[9]];
	case 9:
		this->picP1P9->Image = this->imageList1->Images[pairs[8]];
	case 8:
		this->picP1P8->Image = this->imageList1->Images[pairs[7]];
	case 7:
		this->picP1P7->Image = this->imageList1->Images[pairs[6]];
	case 6:
		this->picP1P6->Image = this->imageList1->Images[pairs[5]];
	case 5:
		this->picP1P5->Image = this->imageList1->Images[pairs[4]];
	case 4:
		this->picP1P4->Image = this->imageList1->Images[pairs[3]];
	case 3:
		this->picP1P3->Image = this->imageList1->Images[pairs[2]];
	case 2:
		this->picP1P2->Image = this->imageList1->Images[pairs[1]];
	case 1:
		this->picP1P1->Image = this->imageList1->Images[pairs[0]];
	}
}
private: System::Void showPairsPlayer2() {
	// Display the face of all pairs.
	vector<int> pairs = this->data->p2.getPairList();
	switch (pairs.size()) {
	case 20:
		this->picP2P20->Image = this->imageList1->Images[pairs[19]];
	case 19:
		this->picP2P19->Image = this->imageList1->Images[pairs[18]];
	case 18:
		this->picP2P18->Image = this->imageList1->Images[pairs[17]];
	case 17:
		this->picP2P17->Image = this->imageList1->Images[pairs[16]];
	case 16:
		this->picP2P16->Image = this->imageList1->Images[pairs[15]];
	case 15:
		this->picP2P15->Image = this->imageList1->Images[pairs[14]];
	case 14:
		this->picP2P14->Image = this->imageList1->Images[pairs[13]];
	case 13:
		this->picP2P13->Image = this->imageList1->Images[pairs[12]];
	case 12:
		this->picP2P12->Image = this->imageList1->Images[pairs[11]];
	case 11:
		this->picP2P11->Image = this->imageList1->Images[pairs[10]];
	case 10:
		this->picP2P10->Image = this->imageList1->Images[pairs[9]];
	case 9:
		this->picP2P9->Image = this->imageList1->Images[pairs[8]];
	case 8:
		this->picP2P8->Image = this->imageList1->Images[pairs[7]];
	case 7:
		this->picP2P7->Image = this->imageList1->Images[pairs[6]];
	case 6:
		this->picP2P6->Image = this->imageList1->Images[pairs[5]];
	case 5:
		this->picP2P5->Image = this->imageList1->Images[pairs[4]];
	case 4:
		this->picP2P4->Image = this->imageList1->Images[pairs[3]];
	case 3:
		this->picP2P3->Image = this->imageList1->Images[pairs[2]];
	case 2:
		this->picP2P2->Image = this->imageList1->Images[pairs[1]];
	case 1:
		this->picP2P1->Image = this->imageList1->Images[pairs[0]];
	}
}
private: System::Void p1AskCard(int cardToAsk) {
	// Player 1 is asking for a card.
	if (this->data->p1.askCard(cardToAsk, this->data->p2)) {
		// Got a card. Place the new pair.
		this->data->p1.placePair();
		this->showCardsPlayer1();
		this->hideCardPlayer2();
		this->showPairsPlayer1();
		// Prompt the player and change the state of controls.
		this->lblPrompt->Text = "You got a card from your opponent and have a new pair.\n"
			"Click End Turn to hide cards.";
		this->btnEnd->Enabled = true;
		this->data->isAsking = false;
		this->checkWinner();
	}
	else {
		// No card back.
		this->lblPrompt->Text = "GO FISH!!!\n"
			"Click the deck to draw a card.";
		// Change the state of controls.
		this->data->isAsking = false;
		this->picDeck->Enabled = true;
	}
}
private: System::Void p2AskCard(int cardToAsk) {
	// Player 2 is asking for a card.
	if (this->data->p2.askCard(cardToAsk, this->data->p1)) {
		// Got a card. Place the new pair.
		this->data->p2.placePair();
		this->hideCardPlayer1();
		this->showCardsPlayer2();
		this->showPairsPlayer2();
		// Prompt the player and change the state of controls.
		this->lblPrompt->Text = "You got a card from your opponent and have a new pair.\n"
			"Click End Turn to hide cards.";
		this->btnEnd->Enabled = true;
		this->data->isAsking = false;
		this->checkWinner();
	}
	else {
		// No card back.
		this->lblPrompt->Text = "GO FISH!!!\n"
			"Click the deck to draw a card.";
		// Change the state of controls.
		this->data->isAsking = false;
		this->picDeck->Enabled = true;
	}
}
		 // Check who is the winner
private: System::Void checkWinner() {
	if (this->data->p1.getNumCardOnHand() == 0 && this->data->p2.getNumCardOnHand() == 0) {
		this->picDeck->Enabled = false;
		this->btnEnd->Enabled = false;
		this->btnStart->Enabled = false;
		this->showPairsPlayer1();
		this->showPairsPlayer2();
		this->BackColor = Color::Blue;
		this->lblPrompt->Text = "It's a tie.\n"
			"The game is ended.";
	}
	else if (this->data->p1.getNumCardOnHand() == 0) {
		this->picDeck->Enabled = false;
		this->btnEnd->Enabled = false;
		this->btnStart->Enabled = false;
		this->showCardsPlayer2();
		this->showPairsPlayer1();
		this->showPairsPlayer2();
		this->BackColor = Color::Blue;
		this->lblPrompt->Text = "Player 1 won.";
	}
	else if (this->data->p2.getNumCardOnHand() == 0) {
		this->picDeck->Enabled = false;
		this->btnEnd->Enabled = false;
		this->btnStart->Enabled = false;
		this->showCardsPlayer1();
		this->showPairsPlayer1();
		this->showPairsPlayer2();
		this->BackColor = Color::Blue;
		this->lblPrompt->Text = "Player 2 won.";
	}
}
};
}