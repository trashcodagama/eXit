#pragma once
#pragma comment(lib, "winmm.lib")
#include<Windows.h>
#include<string>
#include "player_info.h"
#include "jaccard.h"
#include <msclr/marshal_cppstd.h>
#include <mmsystem.h>



player_info p;
player_info* p1 = &p;

namespace game {
	using namespace System::Threading::Tasks;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			startpage->Show();
			info_page->Hide(); 
			loading_page->Hide();
			player_intro_page->Hide();
			barrel->Hide();
			barrel_light->Hide();
			invalid->Hide();
			barrel_move->Hide();
			shout_hallway->Hide();
			enter_hallway->Hide();
			read_note->Hide();
			leave->Hide();
			new_world->Hide();
			read_light->Hide();
			results->Hide();


			PlaySound(TEXT("OST.wav"), NULL, SND_FILENAME | SND_ASYNC);



			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ startpage;
	private: System::Windows::Forms::Label^ start_game;

	private: System::Windows::Forms::PictureBox^ exit_image;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::Panel^ info_page;
	private: System::Windows::Forms::PictureBox^ mrrobot_ascii;
	private: System::Windows::Forms::Label^ info_text;
	private: System::Windows::Forms::LinkLabel^ github_link;
	private: System::Windows::Forms::Label^ back_button;
	private: System::Windows::Forms::Panel^ loading_page;
	private: System::Windows::Forms::Label^ loading_text;
	private: System::Windows::Forms::Panel^ player_intro_page;
	private: System::Windows::Forms::TextBox^ name_input;
	private: System::Windows::Forms::Label^ believe_text;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ no;
	private: System::Windows::Forms::Label^ yes;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ barrel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ barrel_input;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ enter_barrel;
	private: System::Windows::Forms::Panel^ barrel_light;
	private: System::Windows::Forms::Label^ retry;
	private: System::Windows::Forms::PictureBox^ explosion_art;


	private: System::Windows::Forms::Label^ explosion_text;
	private: System::Windows::Forms::Panel^ invalid;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ invalid_text;
	private: System::Windows::Forms::Panel^ barrel_move;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ hallway;

	private: System::Windows::Forms::Label^ barrel_move_text;
	private: System::Windows::Forms::TextBox^ barrel_move_input;
	private: System::Windows::Forms::Label^ enter_2;
	private: System::Windows::Forms::Panel^ shout_hallway;
	private: System::Windows::Forms::Label^ enter_3;
	private: System::Windows::Forms::TextBox^ shout_hallway_input;


	private: System::Windows::Forms::PictureBox^ shout_hallway_image;

	private: System::Windows::Forms::Label^ shout_hallway_text;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ enter_hallway;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ enter_4;
	private: System::Windows::Forms::TextBox^ enter_hallway_input;
	private: System::Windows::Forms::PictureBox^ depressed_man;
	private: System::Windows::Forms::Label^ enter_hallway_text;
	private: System::Windows::Forms::Panel^ read_note;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ enter_5;

	private: System::Windows::Forms::TextBox^ read_note_input;
	private: System::Windows::Forms::PictureBox^ note;
	private: System::Windows::Forms::Label^ read_note_text;
private: System::Windows::Forms::Panel^ leave;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ enter_6;

private: System::Windows::Forms::TextBox^ leave_input;
private: System::Windows::Forms::PictureBox^ beach_image;
private: System::Windows::Forms::Label^ leave_text;
private: System::Windows::Forms::Panel^ new_world;
private: System::Windows::Forms::Label^ result;
private: System::Windows::Forms::PictureBox^ new_world_image;
private: System::Windows::Forms::Label^ new_text;
private: System::Windows::Forms::Panel^ read_light;
private: System::Windows::Forms::Label^ enter_7;

private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ read_light_text;
private: System::Windows::Forms::TextBox^ note_input;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ results;
private: System::Windows::Forms::Label^ result_text;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ generate;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox5;





















	protected:


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startpage = (gcnew System::Windows::Forms::Panel());
			this->loading_page = (gcnew System::Windows::Forms::Panel());
			this->player_intro_page = (gcnew System::Windows::Forms::Panel());
			this->barrel = (gcnew System::Windows::Forms::Panel());
			this->barrel_move = (gcnew System::Windows::Forms::Panel());
			this->enter_hallway = (gcnew System::Windows::Forms::Panel());
			this->read_note = (gcnew System::Windows::Forms::Panel());
			this->read_light = (gcnew System::Windows::Forms::Panel());
			this->results = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->generate = (gcnew System::Windows::Forms::Label());
			this->result_text = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->note_input = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->enter_7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->read_light_text = (gcnew System::Windows::Forms::Label());
			this->leave = (gcnew System::Windows::Forms::Panel());
			this->new_world = (gcnew System::Windows::Forms::Panel());
			this->result = (gcnew System::Windows::Forms::Label());
			this->new_world_image = (gcnew System::Windows::Forms::PictureBox());
			this->new_text = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->enter_6 = (gcnew System::Windows::Forms::Label());
			this->leave_input = (gcnew System::Windows::Forms::TextBox());
			this->beach_image = (gcnew System::Windows::Forms::PictureBox());
			this->leave_text = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->enter_5 = (gcnew System::Windows::Forms::Label());
			this->read_note_input = (gcnew System::Windows::Forms::TextBox());
			this->note = (gcnew System::Windows::Forms::PictureBox());
			this->read_note_text = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->enter_4 = (gcnew System::Windows::Forms::Label());
			this->enter_hallway_input = (gcnew System::Windows::Forms::TextBox());
			this->depressed_man = (gcnew System::Windows::Forms::PictureBox());
			this->enter_hallway_text = (gcnew System::Windows::Forms::Label());
			this->shout_hallway = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->enter_3 = (gcnew System::Windows::Forms::Label());
			this->shout_hallway_input = (gcnew System::Windows::Forms::TextBox());
			this->shout_hallway_image = (gcnew System::Windows::Forms::PictureBox());
			this->shout_hallway_text = (gcnew System::Windows::Forms::Label());
			this->enter_2 = (gcnew System::Windows::Forms::Label());
			this->barrel_move_input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->hallway = (gcnew System::Windows::Forms::PictureBox());
			this->barrel_move_text = (gcnew System::Windows::Forms::Label());
			this->barrel_light = (gcnew System::Windows::Forms::Panel());
			this->retry = (gcnew System::Windows::Forms::Label());
			this->explosion_art = (gcnew System::Windows::Forms::PictureBox());
			this->explosion_text = (gcnew System::Windows::Forms::Label());
			this->invalid = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->invalid_text = (gcnew System::Windows::Forms::Label());
			this->enter_barrel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->barrel_input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->no = (gcnew System::Windows::Forms::Label());
			this->yes = (gcnew System::Windows::Forms::Label());
			this->name_input = (gcnew System::Windows::Forms::TextBox());
			this->believe_text = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->loading_text = (gcnew System::Windows::Forms::Label());
			this->info_page = (gcnew System::Windows::Forms::Panel());
			this->back_button = (gcnew System::Windows::Forms::Label());
			this->github_link = (gcnew System::Windows::Forms::LinkLabel());
			this->info_text = (gcnew System::Windows::Forms::Label());
			this->mrrobot_ascii = (gcnew System::Windows::Forms::PictureBox());
			this->info = (gcnew System::Windows::Forms::Label());
			this->exit_image = (gcnew System::Windows::Forms::PictureBox());
			this->start_game = (gcnew System::Windows::Forms::Label());
			this->startpage->SuspendLayout();
			this->loading_page->SuspendLayout();
			this->player_intro_page->SuspendLayout();
			this->barrel->SuspendLayout();
			this->barrel_move->SuspendLayout();
			this->enter_hallway->SuspendLayout();
			this->read_note->SuspendLayout();
			this->read_light->SuspendLayout();
			this->results->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->leave->SuspendLayout();
			this->new_world->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->new_world_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beach_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->note))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depressed_man))->BeginInit();
			this->shout_hallway->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shout_hallway_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hallway))->BeginInit();
			this->barrel_light->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->explosion_art))->BeginInit();
			this->invalid->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->info_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mrrobot_ascii))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_image))->BeginInit();
			this->SuspendLayout();
			// 
			// startpage
			// 
			this->startpage->AutoScroll = true;
			this->startpage->AutoSize = true;
			this->startpage->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->startpage->Controls->Add(this->loading_page);
			this->startpage->Controls->Add(this->info_page);
			this->startpage->Controls->Add(this->info);
			this->startpage->Controls->Add(this->exit_image);
			this->startpage->Controls->Add(this->start_game);
			this->startpage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startpage->Font = (gcnew System::Drawing::Font(L"Minisystem", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startpage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->startpage->Location = System::Drawing::Point(0, 0);
			this->startpage->Margin = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->startpage->Name = L"startpage";
			this->startpage->Size = System::Drawing::Size(1484, 1061);
			this->startpage->TabIndex = 0;
			// 
			// loading_page
			// 
			this->loading_page->Controls->Add(this->player_intro_page);
			this->loading_page->Controls->Add(this->loading_text);
			this->loading_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loading_page->Location = System::Drawing::Point(0, 0);
			this->loading_page->Name = L"loading_page";
			this->loading_page->Size = System::Drawing::Size(1484, 1061);
			this->loading_page->TabIndex = 4;
			// 
			// player_intro_page
			// 
			this->player_intro_page->AutoScroll = true;
			this->player_intro_page->Controls->Add(this->barrel);
			this->player_intro_page->Controls->Add(this->pictureBox1);
			this->player_intro_page->Controls->Add(this->no);
			this->player_intro_page->Controls->Add(this->yes);
			this->player_intro_page->Controls->Add(this->name_input);
			this->player_intro_page->Controls->Add(this->believe_text);
			this->player_intro_page->Controls->Add(this->name);
			this->player_intro_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->player_intro_page->Location = System::Drawing::Point(0, 0);
			this->player_intro_page->Name = L"player_intro_page";
			this->player_intro_page->Size = System::Drawing::Size(1484, 1061);
			this->player_intro_page->TabIndex = 1;
			this->player_intro_page->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::player_intro_page_Paint);
			// 
			// barrel
			// 
			this->barrel->AutoScroll = true;
			this->barrel->Controls->Add(this->barrel_move);
			this->barrel->Controls->Add(this->barrel_light);
			this->barrel->Controls->Add(this->invalid);
			this->barrel->Controls->Add(this->enter_barrel);
			this->barrel->Controls->Add(this->pictureBox2);
			this->barrel->Controls->Add(this->barrel_input);
			this->barrel->Controls->Add(this->label3);
			this->barrel->Controls->Add(this->label4);
			this->barrel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->barrel->Location = System::Drawing::Point(0, 0);
			this->barrel->Name = L"barrel";
			this->barrel->Size = System::Drawing::Size(1484, 1061);
			this->barrel->TabIndex = 6;
			this->barrel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::barrel_Paint);
			// 
			// barrel_move
			// 
			this->barrel_move->AutoScroll = true;
			this->barrel_move->Controls->Add(this->enter_hallway);
			this->barrel_move->Controls->Add(this->shout_hallway);
			this->barrel_move->Controls->Add(this->enter_2);
			this->barrel_move->Controls->Add(this->barrel_move_input);
			this->barrel_move->Controls->Add(this->label2);
			this->barrel_move->Controls->Add(this->hallway);
			this->barrel_move->Controls->Add(this->barrel_move_text);
			this->barrel_move->Dock = System::Windows::Forms::DockStyle::Fill;
			this->barrel_move->Location = System::Drawing::Point(0, 0);
			this->barrel_move->Name = L"barrel_move";
			this->barrel_move->Size = System::Drawing::Size(1523, 1044);
			this->barrel_move->TabIndex = 18;
			// 
			// enter_hallway
			// 
			this->enter_hallway->AutoScroll = true;
			this->enter_hallway->Controls->Add(this->read_note);
			this->enter_hallway->Controls->Add(this->label6);
			this->enter_hallway->Controls->Add(this->enter_4);
			this->enter_hallway->Controls->Add(this->enter_hallway_input);
			this->enter_hallway->Controls->Add(this->depressed_man);
			this->enter_hallway->Controls->Add(this->enter_hallway_text);
			this->enter_hallway->Dock = System::Windows::Forms::DockStyle::Fill;
			this->enter_hallway->Location = System::Drawing::Point(0, 0);
			this->enter_hallway->Name = L"enter_hallway";
			this->enter_hallway->Size = System::Drawing::Size(1523, 1044);
			this->enter_hallway->TabIndex = 28;
			// 
			// read_note
			// 
			this->read_note->AutoScroll = true;
			this->read_note->Controls->Add(this->read_light);
			this->read_note->Controls->Add(this->leave);
			this->read_note->Controls->Add(this->label7);
			this->read_note->Controls->Add(this->enter_5);
			this->read_note->Controls->Add(this->read_note_input);
			this->read_note->Controls->Add(this->note);
			this->read_note->Controls->Add(this->read_note_text);
			this->read_note->Dock = System::Windows::Forms::DockStyle::Fill;
			this->read_note->Location = System::Drawing::Point(0, 0);
			this->read_note->Name = L"read_note";
			this->read_note->Size = System::Drawing::Size(1523, 1044);
			this->read_note->TabIndex = 33;
			this->read_note->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::read_note_Paint);
			// 
			// read_light
			// 
			this->read_light->AutoScroll = true;
			this->read_light->Controls->Add(this->results);
			this->read_light->Controls->Add(this->note_input);
			this->read_light->Controls->Add(this->label9);
			this->read_light->Controls->Add(this->enter_7);
			this->read_light->Controls->Add(this->pictureBox4);
			this->read_light->Controls->Add(this->read_light_text);
			this->read_light->Dock = System::Windows::Forms::DockStyle::Fill;
			this->read_light->Location = System::Drawing::Point(0, 0);
			this->read_light->Name = L"read_light";
			this->read_light->Size = System::Drawing::Size(1523, 1044);
			this->read_light->TabIndex = 47;
			// 
			// results
			// 
			this->results->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->results->AutoScroll = true;
			this->results->Controls->Add(this->pictureBox6);
			this->results->Controls->Add(this->pictureBox5);
			this->results->Controls->Add(this->generate);
			this->results->Controls->Add(this->result_text);
			this->results->Controls->Add(this->label10);
			this->results->Location = System::Drawing::Point(0, 0);
			this->results->Name = L"results";
			this->results->Size = System::Drawing::Size(1514, 1044);
			this->results->TabIndex = 52;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->Location = System::Drawing::Point(0, 635);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(491, 323);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(934, 635);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(438, 323);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// generate
			// 
			this->generate->AutoSize = true;
			this->generate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->generate->Location = System::Drawing::Point(591, 102);
			this->generate->Name = L"generate";
			this->generate->Size = System::Drawing::Size(302, 29);
			this->generate->TabIndex = 2;
			this->generate->Text = L"click to generate";
			this->generate->Click += gcnew System::EventHandler(this, &MyForm::generate_Click);
			// 
			// result_text
			// 
			this->result_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->result_text->Location = System::Drawing::Point(28, 153);
			this->result_text->Name = L"result_text";
			this->result_text->Size = System::Drawing::Size(1344, 466);
			this->result_text->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Minisystem", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(612, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(263, 58);
			this->label10->TabIndex = 0;
			this->label10->Text = L"results\r\n";
			// 
			// note_input
			// 
			this->note_input->BackColor = System::Drawing::Color::Black;
			this->note_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->note_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->note_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->note_input->Location = System::Drawing::Point(341, 685);
			this->note_input->Name = L"note_input";
			this->note_input->Size = System::Drawing::Size(716, 35);
			this->note_input->TabIndex = 51;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(283, 699);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 29);
			this->label9->TabIndex = 50;
			this->label9->Text = L">>";
			// 
			// enter_7
			// 
			this->enter_7->AutoSize = true;
			this->enter_7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_7->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enter_7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->enter_7->Location = System::Drawing::Point(976, 883);
			this->enter_7->Name = L"enter_7";
			this->enter_7->Size = System::Drawing::Size(115, 35);
			this->enter_7->TabIndex = 49;
			this->enter_7->Text = L"enter";
			this->enter_7->Click += gcnew System::EventHandler(this, &MyForm::enter_7_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(154, 31);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1139, 513);
			this->pictureBox4->TabIndex = 48;
			this->pictureBox4->TabStop = false;
			// 
			// read_light_text
			// 
			this->read_light_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->read_light_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->read_light_text->Location = System::Drawing::Point(335, 581);
			this->read_light_text->Name = L"read_light_text";
			this->read_light_text->Size = System::Drawing::Size(1073, 119);
			this->read_light_text->TabIndex = 47;
			this->read_light_text->Text = L"The note says, \"Don\'t leave me here.\"\r\ndo you leave your friend or stay\?";
			// 
			// leave
			// 
			this->leave->AutoScroll = true;
			this->leave->Controls->Add(this->new_world);
			this->leave->Controls->Add(this->label8);
			this->leave->Controls->Add(this->enter_6);
			this->leave->Controls->Add(this->leave_input);
			this->leave->Controls->Add(this->beach_image);
			this->leave->Controls->Add(this->leave_text);
			this->leave->Dock = System::Windows::Forms::DockStyle::Fill;
			this->leave->Location = System::Drawing::Point(0, 0);
			this->leave->Name = L"leave";
			this->leave->Size = System::Drawing::Size(1523, 1044);
			this->leave->TabIndex = 38;
			this->leave->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// new_world
			// 
			this->new_world->AutoScroll = true;
			this->new_world->Controls->Add(this->result);
			this->new_world->Controls->Add(this->new_world_image);
			this->new_world->Controls->Add(this->new_text);
			this->new_world->Dock = System::Windows::Forms::DockStyle::Fill;
			this->new_world->Location = System::Drawing::Point(0, 0);
			this->new_world->Name = L"new_world";
			this->new_world->Size = System::Drawing::Size(1523, 1044);
			this->new_world->TabIndex = 43;
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Cursor = System::Windows::Forms::Cursors::Hand;
			this->result->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->result->Location = System::Drawing::Point(675, 929);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(135, 35);
			this->result->TabIndex = 46;
			this->result->Text = L"result";
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// new_world_image
			// 
			this->new_world_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"new_world_image.BackgroundImage")));
			this->new_world_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->new_world_image->Location = System::Drawing::Point(1, 92);
			this->new_world_image->Name = L"new_world_image";
			this->new_world_image->Size = System::Drawing::Size(1520, 604);
			this->new_world_image->TabIndex = 44;
			this->new_world_image->TabStop = false;
			// 
			// new_text
			// 
			this->new_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->new_text->Location = System::Drawing::Point(232, 733);
			this->new_text->Name = L"new_text";
			this->new_text->Size = System::Drawing::Size(1073, 119);
			this->new_text->TabIndex = 43;
			this->new_text->Text = L"congratulations, you\'re heading to a new world. the result shows the kind of pers"
				L"on you will be in the new world.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(166, 877);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 29);
			this->label8->TabIndex = 42;
			this->label8->Text = L">>";
			// 
			// enter_6
			// 
			this->enter_6->AutoSize = true;
			this->enter_6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_6->Location = System::Drawing::Point(1144, 990);
			this->enter_6->Name = L"enter_6";
			this->enter_6->Size = System::Drawing::Size(98, 29);
			this->enter_6->TabIndex = 41;
			this->enter_6->Text = L"enter";
			this->enter_6->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// leave_input
			// 
			this->leave_input->BackColor = System::Drawing::Color::Black;
			this->leave_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->leave_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->leave_input->Location = System::Drawing::Point(232, 876);
			this->leave_input->Name = L"leave_input";
			this->leave_input->Size = System::Drawing::Size(1010, 35);
			this->leave_input->TabIndex = 40;
			// 
			// beach_image
			// 
			this->beach_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"beach_image.BackgroundImage")));
			this->beach_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->beach_image->Location = System::Drawing::Point(1, 92);
			this->beach_image->Name = L"beach_image";
			this->beach_image->Size = System::Drawing::Size(1520, 605);
			this->beach_image->TabIndex = 39;
			this->beach_image->TabStop = false;
			// 
			// leave_text
			// 
			this->leave_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->leave_text->Location = System::Drawing::Point(232, 733);
			this->leave_text->Name = L"leave_text";
			this->leave_text->Size = System::Drawing::Size(1073, 119);
			this->leave_text->TabIndex = 38;
			this->leave_text->Text = L"you crawl through the tunnel and the tunnel leads you to a beach. on the shore yo"
				L"u see a boat\r\nwhat do you do\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(166, 877);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 29);
			this->label7->TabIndex = 37;
			this->label7->Text = L">>";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// enter_5
			// 
			this->enter_5->AutoSize = true;
			this->enter_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_5->Location = System::Drawing::Point(1144, 990);
			this->enter_5->Name = L"enter_5";
			this->enter_5->Size = System::Drawing::Size(98, 29);
			this->enter_5->TabIndex = 36;
			this->enter_5->Text = L"enter";
			this->enter_5->Click += gcnew System::EventHandler(this, &MyForm::enter_5_Click);
			// 
			// read_note_input
			// 
			this->read_note_input->BackColor = System::Drawing::Color::Black;
			this->read_note_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->read_note_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->read_note_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->read_note_input->Location = System::Drawing::Point(232, 876);
			this->read_note_input->Name = L"read_note_input";
			this->read_note_input->Size = System::Drawing::Size(1010, 35);
			this->read_note_input->TabIndex = 35;
			this->read_note_input->TextChanged += gcnew System::EventHandler(this, &MyForm::read_note_input_TextChanged);
			// 
			// note
			// 
			this->note->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"note.BackgroundImage")));
			this->note->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->note->Location = System::Drawing::Point(1, 92);
			this->note->Name = L"note";
			this->note->Size = System::Drawing::Size(1520, 605);
			this->note->TabIndex = 34;
			this->note->TabStop = false;
			this->note->Click += gcnew System::EventHandler(this, &MyForm::note_Click);
			// 
			// read_note_text
			// 
			this->read_note_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->read_note_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->read_note_text->Location = System::Drawing::Point(232, 733);
			this->read_note_text->Name = L"read_note_text";
			this->read_note_text->Size = System::Drawing::Size(1073, 119);
			this->read_note_text->TabIndex = 33;
			this->read_note_text->Text = L"it is too dark to read the note. \r\nWhat do you do\?";
			this->read_note_text->Click += gcnew System::EventHandler(this, &MyForm::read_note_text_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(166, 877);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 29);
			this->label6->TabIndex = 32;
			this->label6->Text = L">>";
			// 
			// enter_4
			// 
			this->enter_4->AutoSize = true;
			this->enter_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_4->Location = System::Drawing::Point(1144, 990);
			this->enter_4->Name = L"enter_4";
			this->enter_4->Size = System::Drawing::Size(98, 29);
			this->enter_4->TabIndex = 31;
			this->enter_4->Text = L"enter";
			this->enter_4->Click += gcnew System::EventHandler(this, &MyForm::enter_4_Click);
			// 
			// enter_hallway_input
			// 
			this->enter_hallway_input->BackColor = System::Drawing::Color::Black;
			this->enter_hallway_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->enter_hallway_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enter_hallway_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->enter_hallway_input->Location = System::Drawing::Point(232, 876);
			this->enter_hallway_input->Name = L"enter_hallway_input";
			this->enter_hallway_input->Size = System::Drawing::Size(1010, 35);
			this->enter_hallway_input->TabIndex = 30;
			// 
			// depressed_man
			// 
			this->depressed_man->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"depressed_man.BackgroundImage")));
			this->depressed_man->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->depressed_man->Location = System::Drawing::Point(1, 92);
			this->depressed_man->Name = L"depressed_man";
			this->depressed_man->Size = System::Drawing::Size(1520, 605);
			this->depressed_man->TabIndex = 29;
			this->depressed_man->TabStop = false;
			// 
			// enter_hallway_text
			// 
			this->enter_hallway_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enter_hallway_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->enter_hallway_text->Location = System::Drawing::Point(232, 733);
			this->enter_hallway_text->Name = L"enter_hallway_text";
			this->enter_hallway_text->Size = System::Drawing::Size(1073, 119);
			this->enter_hallway_text->TabIndex = 28;
			this->enter_hallway_text->Text = L"you start to escape but your friend is too weak to go with you. They hand you a n"
				L"ote.\r\nwhat do you do\?";
			this->enter_hallway_text->Click += gcnew System::EventHandler(this, &MyForm::enter_hallway_text_Click);
			// 
			// shout_hallway
			// 
			this->shout_hallway->AutoScroll = true;
			this->shout_hallway->Controls->Add(this->label5);
			this->shout_hallway->Controls->Add(this->enter_3);
			this->shout_hallway->Controls->Add(this->shout_hallway_input);
			this->shout_hallway->Controls->Add(this->shout_hallway_image);
			this->shout_hallway->Controls->Add(this->shout_hallway_text);
			this->shout_hallway->Dock = System::Windows::Forms::DockStyle::Fill;
			this->shout_hallway->Location = System::Drawing::Point(0, 0);
			this->shout_hallway->Name = L"shout_hallway";
			this->shout_hallway->Size = System::Drawing::Size(1523, 1044);
			this->shout_hallway->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(166, 848);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 29);
			this->label5->TabIndex = 27;
			this->label5->Text = L">>";
			// 
			// enter_3
			// 
			this->enter_3->AutoSize = true;
			this->enter_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_3->Location = System::Drawing::Point(1144, 990);
			this->enter_3->Name = L"enter_3";
			this->enter_3->Size = System::Drawing::Size(98, 29);
			this->enter_3->TabIndex = 26;
			this->enter_3->Text = L"enter";
			this->enter_3->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// shout_hallway_input
			// 
			this->shout_hallway_input->BackColor = System::Drawing::Color::Black;
			this->shout_hallway_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->shout_hallway_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shout_hallway_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->shout_hallway_input->Location = System::Drawing::Point(232, 842);
			this->shout_hallway_input->Name = L"shout_hallway_input";
			this->shout_hallway_input->Size = System::Drawing::Size(1010, 35);
			this->shout_hallway_input->TabIndex = 25;
			this->shout_hallway_input->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// shout_hallway_image
			// 
			this->shout_hallway_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shout_hallway_image.BackgroundImage")));
			this->shout_hallway_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->shout_hallway_image->Location = System::Drawing::Point(1, 92);
			this->shout_hallway_image->Name = L"shout_hallway_image";
			this->shout_hallway_image->Size = System::Drawing::Size(1520, 605);
			this->shout_hallway_image->TabIndex = 24;
			this->shout_hallway_image->TabStop = false;
			this->shout_hallway_image->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// shout_hallway_text
			// 
			this->shout_hallway_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shout_hallway_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->shout_hallway_text->Location = System::Drawing::Point(232, 733);
			this->shout_hallway_text->Name = L"shout_hallway_text";
			this->shout_hallway_text->Size = System::Drawing::Size(1073, 87);
			this->shout_hallway_text->TabIndex = 23;
			this->shout_hallway_text->Text = L"your voice echoes throughout the corridor, however you hear faint sound of seagul"
				L"ls, what do you do\?";
			this->shout_hallway_text->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// enter_2
			// 
			this->enter_2->AutoSize = true;
			this->enter_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_2->Location = System::Drawing::Point(1144, 999);
			this->enter_2->Name = L"enter_2";
			this->enter_2->Size = System::Drawing::Size(98, 29);
			this->enter_2->TabIndex = 22;
			this->enter_2->Text = L"enter";
			this->enter_2->Click += gcnew System::EventHandler(this, &MyForm::enter_2_Click);
			// 
			// barrel_move_input
			// 
			this->barrel_move_input->BackColor = System::Drawing::Color::Black;
			this->barrel_move_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->barrel_move_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barrel_move_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->barrel_move_input->Location = System::Drawing::Point(232, 855);
			this->barrel_move_input->Name = L"barrel_move_input";
			this->barrel_move_input->Size = System::Drawing::Size(1010, 35);
			this->barrel_move_input->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(171, 855);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(55, 35);
			this->label2->TabIndex = 20;
			this->label2->Text = L">>";
			// 
			// hallway
			// 
			this->hallway->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hallway.BackgroundImage")));
			this->hallway->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->hallway->Location = System::Drawing::Point(1, 101);
			this->hallway->Name = L"hallway";
			this->hallway->Size = System::Drawing::Size(1520, 605);
			this->hallway->TabIndex = 19;
			this->hallway->TabStop = false;
			// 
			// barrel_move_text
			// 
			this->barrel_move_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barrel_move_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->barrel_move_text->Location = System::Drawing::Point(232, 742);
			this->barrel_move_text->Name = L"barrel_move_text";
			this->barrel_move_text->Size = System::Drawing::Size(1073, 87);
			this->barrel_move_text->TabIndex = 18;
			this->barrel_move_text->Text = L"the barrel rolls aside and reveals a scret hallway. what do you do\?";
			// 
			// barrel_light
			// 
			this->barrel_light->AutoScroll = true;
			this->barrel_light->Controls->Add(this->retry);
			this->barrel_light->Controls->Add(this->explosion_art);
			this->barrel_light->Controls->Add(this->explosion_text);
			this->barrel_light->Dock = System::Windows::Forms::DockStyle::Fill;
			this->barrel_light->Location = System::Drawing::Point(0, 0);
			this->barrel_light->Name = L"barrel_light";
			this->barrel_light->Size = System::Drawing::Size(1523, 1044);
			this->barrel_light->TabIndex = 13;
			// 
			// retry
			// 
			this->retry->AutoSize = true;
			this->retry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->retry->Font = (gcnew System::Drawing::Font(L"Minisystem", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->retry->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->retry->Location = System::Drawing::Point(561, 929);
			this->retry->Name = L"retry";
			this->retry->Size = System::Drawing::Size(339, 38);
			this->retry->TabIndex = 17;
			this->retry->Text = L"turn back time";
			this->retry->Click += gcnew System::EventHandler(this, &MyForm::retry_Click);
			// 
			// explosion_art
			// 
			this->explosion_art->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"explosion_art.BackgroundImage")));
			this->explosion_art->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->explosion_art->Location = System::Drawing::Point(1, 59);
			this->explosion_art->Name = L"explosion_art";
			this->explosion_art->Size = System::Drawing::Size(1520, 605);
			this->explosion_art->TabIndex = 16;
			this->explosion_art->TabStop = false;
			// 
			// explosion_text
			// 
			this->explosion_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->explosion_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->explosion_text->Location = System::Drawing::Point(232, 700);
			this->explosion_text->Name = L"explosion_text";
			this->explosion_text->Size = System::Drawing::Size(1073, 199);
			this->explosion_text->TabIndex = 14;
			this->explosion_text->Text = L"You find matchbox and light the barrel on fire, resulting into a huge explosion a"
				L"nd immediate death of your friend. you can turn back time but at the cost of mor"
				L"ality. if not then <exit> the game...";
			// 
			// invalid
			// 
			this->invalid->AutoScroll = true;
			this->invalid->Controls->Add(this->label1);
			this->invalid->Controls->Add(this->pictureBox3);
			this->invalid->Controls->Add(this->invalid_text);
			this->invalid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->invalid->Location = System::Drawing::Point(0, 0);
			this->invalid->Name = L"invalid";
			this->invalid->Size = System::Drawing::Size(1523, 1044);
			this->invalid->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minisystem", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(505, 980);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(546, 38);
			this->label1->TabIndex = 20;
			this->label1->Text = L"try something different";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(1, 101);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1520, 605);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// invalid_text
			// 
			this->invalid_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invalid_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->invalid_text->Location = System::Drawing::Point(232, 742);
			this->invalid_text->Name = L"invalid_text";
			this->invalid_text->Size = System::Drawing::Size(1073, 199);
			this->invalid_text->TabIndex = 18;
			this->invalid_text->Text = L"you can\'t do that try something else.";
			// 
			// enter_barrel
			// 
			this->enter_barrel->AutoSize = true;
			this->enter_barrel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_barrel->Font = (gcnew System::Drawing::Font(L"Minisystem", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enter_barrel->Location = System::Drawing::Point(1087, 999);
			this->enter_barrel->Name = L"enter_barrel";
			this->enter_barrel->Size = System::Drawing::Size(132, 38);
			this->enter_barrel->TabIndex = 12;
			this->enter_barrel->Text = L"enter";
			this->enter_barrel->Click += gcnew System::EventHandler(this, &MyForm::enter_barrel_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(3, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1520, 605);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// barrel_input
			// 
			this->barrel_input->BackColor = System::Drawing::Color::Black;
			this->barrel_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->barrel_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->barrel_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->barrel_input->Location = System::Drawing::Point(335, 828);
			this->barrel_input->Name = L"barrel_input";
			this->barrel_input->Size = System::Drawing::Size(488, 45);
			this->barrel_input->TabIndex = 8;
			this->barrel_input->TextChanged += gcnew System::EventHandler(this, &MyForm::barrel_input_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Minisystem", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(234, 685);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1071, 118);
			this->label3->TabIndex = 7;
			this->label3->Text = L"You\'re trapped in a dungeon with your friend. You see a barrel.\r\nWhat do you do\?";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(232, 829);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 44);
			this->label4->TabIndex = 6;
			this->label4->Text = L">> ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(3, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1200, 405);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// no
			// 
			this->no->AutoSize = true;
			this->no->Cursor = System::Windows::Forms::Cursors::Hand;
			this->no->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->no->Location = System::Drawing::Point(574, 936);
			this->no->Name = L"no";
			this->no->Size = System::Drawing::Size(71, 44);
			this->no->TabIndex = 4;
			this->no->Text = L"no";
			this->no->Click += gcnew System::EventHandler(this, &MyForm::no_Click);
			// 
			// yes
			// 
			this->yes->AutoSize = true;
			this->yes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->yes->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yes->Location = System::Drawing::Point(816, 936);
			this->yes->Name = L"yes";
			this->yes->Size = System::Drawing::Size(97, 44);
			this->yes->TabIndex = 3;
			this->yes->Text = L"yes";
			this->yes->Click += gcnew System::EventHandler(this, &MyForm::yes_Click);
			// 
			// name_input
			// 
			this->name_input->BackColor = System::Drawing::Color::Black;
			this->name_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_input->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->name_input->Location = System::Drawing::Point(651, 685);
			this->name_input->Name = L"name_input";
			this->name_input->Size = System::Drawing::Size(488, 45);
			this->name_input->TabIndex = 2;
			this->name_input->TextChanged += gcnew System::EventHandler(this, &MyForm::name_input_TextChanged);
			// 
			// believe_text
			// 
			this->believe_text->AutoSize = true;
			this->believe_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->believe_text->Location = System::Drawing::Point(418, 808);
			this->believe_text->Name = L"believe_text";
			this->believe_text->Size = System::Drawing::Size(721, 44);
			this->believe_text->TabIndex = 1;
			this->believe_text->Text = L"do you believe in yourself\?";
			this->believe_text->Click += gcnew System::EventHandler(this, &MyForm::believe_text_Click);
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(418, 685);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(227, 44);
			this->name->TabIndex = 0;
			this->name->Text = L"name >> ";
			this->name->Click += gcnew System::EventHandler(this, &MyForm::name_Click);
			// 
			// loading_text
			// 
			this->loading_text->AutoSize = true;
			this->loading_text->Font = (gcnew System::Drawing::Font(L"Minisystem", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loading_text->Location = System::Drawing::Point(625, 515);
			this->loading_text->Name = L"loading_text";
			this->loading_text->Size = System::Drawing::Size(193, 42);
			this->loading_text->TabIndex = 0;
			this->loading_text->Text = L"loading";
			// 
			// info_page
			// 
			this->info_page->Controls->Add(this->back_button);
			this->info_page->Controls->Add(this->github_link);
			this->info_page->Controls->Add(this->info_text);
			this->info_page->Controls->Add(this->mrrobot_ascii);
			this->info_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->info_page->Location = System::Drawing::Point(0, 0);
			this->info_page->Name = L"info_page";
			this->info_page->Size = System::Drawing::Size(1484, 1061);
			this->info_page->TabIndex = 3;
			// 
			// back_button
			// 
			this->back_button->AutoSize = true;
			this->back_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_button->Location = System::Drawing::Point(1071, 999);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(81, 29);
			this->back_button->TabIndex = 3;
			this->back_button->Text = L"back";
			this->back_button->Click += gcnew System::EventHandler(this, &MyForm::back_button_Click);
			// 
			// github_link
			// 
			this->github_link->AutoSize = true;
			this->github_link->LinkColor = System::Drawing::Color::Cyan;
			this->github_link->Location = System::Drawing::Point(336, 883);
			this->github_link->Name = L"github_link";
			this->github_link->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->github_link->Size = System::Drawing::Size(557, 29);
			this->github_link->TabIndex = 2;
			this->github_link->TabStop = true;
			this->github_link->Text = L"https://github.com/trashcodagama";
			this->github_link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::github_link_LinkClicked);
			// 
			// info_text
			// 
			this->info_text->Location = System::Drawing::Point(336, 596);
			this->info_text->Name = L"info_text";
			this->info_text->Size = System::Drawing::Size(850, 371);
			this->info_text->TabIndex = 1;
			this->info_text->Text = resources->GetString(L"info_text.Text");
			// 
			// mrrobot_ascii
			// 
			this->mrrobot_ascii->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mrrobot_ascii.BackgroundImage")));
			this->mrrobot_ascii->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->mrrobot_ascii->Location = System::Drawing::Point(0, 0);
			this->mrrobot_ascii->Name = L"mrrobot_ascii";
			this->mrrobot_ascii->Size = System::Drawing::Size(1523, 696);
			this->mrrobot_ascii->TabIndex = 0;
			this->mrrobot_ascii->TabStop = false;
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Cursor = System::Windows::Forms::Cursors::Hand;
			this->info->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info->Location = System::Drawing::Point(699, 600);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(123, 44);
			this->info->TabIndex = 2;
			this->info->Text = L"info";
			this->info->Click += gcnew System::EventHandler(this, &MyForm::info_Click);
			// 
			// exit_image
			// 
			this->exit_image->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_image.BackgroundImage")));
			this->exit_image->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_image->Location = System::Drawing::Point(550, 30);
			this->exit_image->Name = L"exit_image";
			this->exit_image->Size = System::Drawing::Size(400, 400);
			this->exit_image->TabIndex = 1;
			this->exit_image->TabStop = false;
			// 
			// start_game
			// 
			this->start_game->AutoSize = true;
			this->start_game->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start_game->Font = (gcnew System::Drawing::Font(L"Minisystem", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_game->Location = System::Drawing::Point(689, 500);
			this->start_game->Name = L"start_game";
			this->start_game->Size = System::Drawing::Size(149, 44);
			this->start_game->TabIndex = 0;
			this->start_game->Text = L"start";
			this->start_game->Click += gcnew System::EventHandler(this, &MyForm::start_game_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1484, 1061);
			this->Controls->Add(this->startpage);
			this->Font = (gcnew System::Drawing::Font(L"Minisystem", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"GAME";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->startpage->ResumeLayout(false);
			this->startpage->PerformLayout();
			this->loading_page->ResumeLayout(false);
			this->loading_page->PerformLayout();
			this->player_intro_page->ResumeLayout(false);
			this->player_intro_page->PerformLayout();
			this->barrel->ResumeLayout(false);
			this->barrel->PerformLayout();
			this->barrel_move->ResumeLayout(false);
			this->barrel_move->PerformLayout();
			this->enter_hallway->ResumeLayout(false);
			this->enter_hallway->PerformLayout();
			this->read_note->ResumeLayout(false);
			this->read_note->PerformLayout();
			this->read_light->ResumeLayout(false);
			this->read_light->PerformLayout();
			this->results->ResumeLayout(false);
			this->results->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->leave->ResumeLayout(false);
			this->leave->PerformLayout();
			this->new_world->ResumeLayout(false);
			this->new_world->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->new_world_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beach_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->note))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depressed_man))->EndInit();
			this->shout_hallway->ResumeLayout(false);
			this->shout_hallway->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shout_hallway_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hallway))->EndInit();
			this->barrel_light->ResumeLayout(false);
			this->barrel_light->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->explosion_art))->EndInit();
			this->invalid->ResumeLayout(false);
			this->invalid->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->info_page->ResumeLayout(false);
			this->info_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mrrobot_ascii))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_image))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//Stupid loadfin function doesnt work --------------------------------------------



//Click functions-----------------------------------------------------------------------

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void start_game_Click(System::Object^ sender, System::EventArgs^ e) {
		loading_page->Show();
		player_intro_page->Show();
	}
private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
	info_page->Show();

}
private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	info_page->Hide();
}
private: System::Void github_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void player_intro_page_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void believe_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void no_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string playerName = msclr::interop::marshal_as<std::string>(name_input->Text);
	p1->name = playerName;
	p1->score = -5;
	barrel->Show();
}
private: System::Void yes_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string playerName = msclr::interop::marshal_as<std::string>(name_input->Text);
	p1->name = playerName;
	p1->score = +5;
	barrel->Show();

}


//------------------------------IGNORE--------------------------------------------------
private: System::Void name_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void name_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
//--------------------------------------------------------------------------------------



private: System::Void enter_barrel_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(barrel_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "light") > 33.0 || x.calculateJaccardSimilarity(barrelInput, "open") > 33.0) {
		barrel_light->Show();
		p1->update_score(-10);
	}
	else if (x.calculateJaccardSimilarity(barrelInput, "move") > 33.0 || x.calculateJaccardSimilarity(barrelInput, "open") > 33.0) {

		barrel_move->Show();
		p1->update_score(5);


	}
	else {
		invalid->Show();
		p1->update_score(-3);
	}
}




//-----------------------------IGNORE-AGAIN-i-messed-up---------------------------------
private: System::Void barrel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void barrel_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
//--------------------------------------------------------------------------------------



private: System::Void retry_Click(System::Object^ sender, System::EventArgs^ e) {
	barrel_light->Hide();
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	invalid->Hide();
	barrel_light->Hide();
}
private: System::Void enter_2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(barrel_move_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "shout") > 33.0) {
		shout_hallway->Show();
		p1->update_score(3);
	}
	else if (x.calculateJaccardSimilarity(barrelInput, "enter") > 33.0 || x.calculateJaccardSimilarity(barrelInput, "run") > 33.0) {

		enter_hallway->Show();
		p1->update_score(5);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "back") > 33.0) {
		barrel_move->Hide();
		p1->update_score(-2);
	}
	else {
		invalid->Show();
		p1->update_score(-2);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(shout_hallway_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "enter") > 33.0) {
		shout_hallway->Hide();
		enter_hallway->Show();
		p1->update_score(5);
	}
	else if (x.calculateJaccardSimilarity(barrelInput, "walk") > 33.0) {
		shout_hallway->Hide();
		enter_hallway->Show();
		p1->update_score(5);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "back") > 33.0) {
		shout_hallway->Hide();
		p1->update_score(-2);

	}
	else {
		invalid->Show();
		p1->update_score(-2);
	}
}



//----------------------------------------IGNORE--------------------------------------------
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
//----------------------------------------IGNORE--------------------------------------------


private: System::Void enter_hallway_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void enter_4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(enter_hallway_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "read") > 33.0) {
		read_note->Show();
		p1->update_score(5);
	}
//MIGHT HAVE TO CHANGE THIS FOR NOW, CONTINUE TEAR_NOTE AND THEN READ_NOTE BOTH
	else if (x.calculateJaccardSimilarity(barrelInput, "tear") > 33.0) {
		//tear_note->Show();
		p1->update_score(-10);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "leave") > 33.0) {
		read_note->Show();
		leave->Show();
		p1->update_score(-5);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "back") > 33.0) {
		enter_hallway->Hide();
		p1->update_score(0);

	}
	else {
		invalid->Show();
		p1->update_score(-2);
	}

}
private: System::Void enter_5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(read_note_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "leave") > 33.0) {
		leave->Show();
		p1->update_score(2);
	}
	//MIGHT HAVE TO CHANGE THIS FOR NOW, CONTINUE TEAR_NOTE AND THEN READ_NOTE BOTH
	else if (x.calculateJaccardSimilarity(barrelInput, "light") > 33.0) {
		read_light->Show();
		p1->update_score(5);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "back") > 33.0) {
		read_note->Hide();
		p1->update_score(0);

	}

	else {
		invalid->Show();
		p1->update_score(-2);
	}

}

	   //--------------------------------IGNORE-------------------------------------------------
private: System::Void read_note_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void read_note_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void note_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void read_note_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //--------------------------------IGNORE-------------------------------------------------

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(leave_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "leave") > 33.0) {
		new_world->Show();
		p1->update_score(-7);
	}
	//MIGHT HAVE TO CHANGE THIS FOR NOW, CONTINUE TEAR_NOTE AND THEN READ_NOTE BOTH
	else if (x.calculateJaccardSimilarity(barrelInput, "enter") > 33.0) {
		new_world->Show();
		p1->update_score(-7);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "boat") > 33.0) {
		new_world->Show();
		p1->update_score(-7);

	}
	else if (x.calculateJaccardSimilarity(barrelInput, "back") > 33.0) {
		leave->Hide();
		read_note->Hide();
		p1->update_score(5);

	}

	else {
		invalid->Show();
		p1->update_score(-2);
	}

}
	   //------------------------NEW_WORLD--RESULT----------------------------
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
	new_world->Hide();
	leave->Hide();
	read_note->Show();
	read_light->Show();
	results->Show();

}
private: System::Void enter_7_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string barrelInput = msclr::interop::marshal_as<std::string>(note_input->Text);
	jaccard x;

	if (x.calculateJaccardSimilarity(barrelInput, "stay") > 33.0) {
		results->Show();
		p1->update_score(10);
	}
	else if (x.calculateJaccardSimilarity(barrelInput, "leave") > 33.0) {
		read_light->Hide();
		read_note->Hide();
		leave->Show();
		p1->update_score(-20);

	}
	else {
		invalid->Show();
		p1->update_score(-2);
	}
}
private: System::Void generate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p1->score > 15) {
		result_text->Text = L"You emanate an extraordinary level of empathy and compassion, standing as a true champion for a kinder and more compassionate world. Your deep emotional connection with others inspires positive change, and your genuine concern for the well-being of those around you makes you a powerful force for good. You actively contribute to creating a better world, fostering connections and nurturing a sense of unity.";
	}
	else if (p1->score < 15 && p1->score > 10) {
		result_text->Text = L"you strike a balance between empathy and practicality. Your personality is a nuanced blend of idealism and realism, allowing you to navigate life's complexities with a measured approach. You may possess a thoughtful mix of qualities that shape your beliefs and actions, contributing to a unique perspective that reflects both empathy and a practical understanding of the world.";
	}
	else if (p1->score > 10 && p1->score < 0) {
		result_text->Text = L"your personality exhibits shades of ambiguity, presenting a canvas for exploration and self-discovery. Your outlook may be multifaceted, incorporating a variety of traits and perspectives. It's within this gray area that you navigate the complexities of life, potentially embracing a blend of contrasting qualities that make your character intriguing and adaptable.";
	}
	else if (p1->score < -10 && p1->score > -20) {
		result_text->Text = L"your personality delves into the intriguing complexities of human nature. There may be moments where self-interest and a pragmatic mindset guide your actions, navigating the gray areas of morality. While your decisions might be driven by personal goals, there's an acknowledgment of the nuanced nature of life. Your character resides in the shadows, exploring a diverse range of perspectives and contributing to the intricate tapestry of the human experience.";
	}
	else if (p1->score < -20) {
		result_text->Text = L"your character embraces a unique and unconventional perspective on life. There's a certain depth and complexity that sets you apart, as you navigate the world with a distinct disregard for conventional morality. Your actions may be driven by a desire for personal gain, yet there's an intriguing aspect to your approach that defies simple categorization. While your choices may be unconventional, they contribute to the rich diversity of human experiences, adding depth to the collective narrative.";
	}
}
};
}
