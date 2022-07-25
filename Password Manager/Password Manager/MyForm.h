#pragma once
#include<iostream>
#include<string>
#include<fstream>

int total_sites = 0;
const std::string master_password = "bilal";

namespace PasswordManager {

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
			//
			//TODO: Add the constructor code here
			//
		}

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
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
	private: System::Windows::Forms::Panel^ signin_panel;
	private: System::Windows::Forms::PictureBox^ logo_pic;
	private: System::Windows::Forms::Label^ master_pass_label;
	protected:

	protected:


	private: System::Windows::Forms::Label^ soft_name;
	private: System::Windows::Forms::Button^ signin_panel_exit;


	private: System::Windows::Forms::TextBox^ master_pass_text_box;
	private: System::Windows::Forms::Button^ signin_panel_enter;



	private: System::Windows::Forms::Label^ soft_developer;
	private: System::Windows::Forms::Label^ wrong_password_label;
	private: System::Windows::Forms::Panel^ display_panel;
	private: System::Windows::Forms::Button^ add_display_panel;
	private: System::Windows::Forms::Label^ soft_dev_name_display_panel;
	private: System::Windows::Forms::Button^ remove_display_panel;
	private: System::Windows::Forms::Button^ exit_display_panel;
	private: System::Windows::Forms::PictureBox^ logo_display_panel;
	private: System::Windows::Forms::Label^ soft_name_display_panel;
	private: System::Windows::Forms::PictureBox^ signout_display_panel;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Panel^ site_add_panel;
	private: System::Windows::Forms::Label^ site_added_site_panel;
	private: System::Windows::Forms::TextBox^ site_password_text_box;
	private: System::Windows::Forms::TextBox^ site_name_text_box;
	private: System::Windows::Forms::Label^ site_password_site_panel;
	private: System::Windows::Forms::Label^ site_name_site_panel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ back_site_add_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ about_panel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;







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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->signin_panel = (gcnew System::Windows::Forms::Panel());
			this->display_panel = (gcnew System::Windows::Forms::Panel());
			this->site_add_panel = (gcnew System::Windows::Forms::Panel());
			this->about_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->site_added_site_panel = (gcnew System::Windows::Forms::Label());
			this->site_password_text_box = (gcnew System::Windows::Forms::TextBox());
			this->site_name_text_box = (gcnew System::Windows::Forms::TextBox());
			this->site_password_site_panel = (gcnew System::Windows::Forms::Label());
			this->site_name_site_panel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->back_site_add_panel = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->signout_display_panel = (gcnew System::Windows::Forms::PictureBox());
			this->add_display_panel = (gcnew System::Windows::Forms::Button());
			this->soft_dev_name_display_panel = (gcnew System::Windows::Forms::Label());
			this->remove_display_panel = (gcnew System::Windows::Forms::Button());
			this->exit_display_panel = (gcnew System::Windows::Forms::Button());
			this->logo_display_panel = (gcnew System::Windows::Forms::PictureBox());
			this->soft_name_display_panel = (gcnew System::Windows::Forms::Label());
			this->wrong_password_label = (gcnew System::Windows::Forms::Label());
			this->soft_developer = (gcnew System::Windows::Forms::Label());
			this->signin_panel_enter = (gcnew System::Windows::Forms::Button());
			this->signin_panel_exit = (gcnew System::Windows::Forms::Button());
			this->master_pass_text_box = (gcnew System::Windows::Forms::TextBox());
			this->logo_pic = (gcnew System::Windows::Forms::PictureBox());
			this->master_pass_label = (gcnew System::Windows::Forms::Label());
			this->soft_name = (gcnew System::Windows::Forms::Label());
			this->signin_panel->SuspendLayout();
			this->display_panel->SuspendLayout();
			this->site_add_panel->SuspendLayout();
			this->about_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signout_display_panel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_display_panel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// signin_panel
			// 
			this->signin_panel->BackColor = System::Drawing::Color::Black;
			this->signin_panel->Controls->Add(this->display_panel);
			this->signin_panel->Controls->Add(this->wrong_password_label);
			this->signin_panel->Controls->Add(this->soft_developer);
			this->signin_panel->Controls->Add(this->signin_panel_enter);
			this->signin_panel->Controls->Add(this->signin_panel_exit);
			this->signin_panel->Controls->Add(this->master_pass_text_box);
			this->signin_panel->Controls->Add(this->logo_pic);
			this->signin_panel->Controls->Add(this->master_pass_label);
			this->signin_panel->Controls->Add(this->soft_name);
			this->signin_panel->Location = System::Drawing::Point(0, 0);
			this->signin_panel->Name = L"signin_panel";
			this->signin_panel->Size = System::Drawing::Size(537, 474);
			this->signin_panel->TabIndex = 0;
			// 
			// display_panel
			// 
			this->display_panel->BackColor = System::Drawing::Color::Black;
			this->display_panel->Controls->Add(this->site_add_panel);
			this->display_panel->Controls->Add(this->dataGridView1);
			this->display_panel->Controls->Add(this->signout_display_panel);
			this->display_panel->Controls->Add(this->add_display_panel);
			this->display_panel->Controls->Add(this->soft_dev_name_display_panel);
			this->display_panel->Controls->Add(this->remove_display_panel);
			this->display_panel->Controls->Add(this->exit_display_panel);
			this->display_panel->Controls->Add(this->logo_display_panel);
			this->display_panel->Controls->Add(this->soft_name_display_panel);
			this->display_panel->Location = System::Drawing::Point(0, 0);
			this->display_panel->Name = L"display_panel";
			this->display_panel->Size = System::Drawing::Size(537, 474);
			this->display_panel->TabIndex = 10;
			// 
			// site_add_panel
			// 
			this->site_add_panel->BackColor = System::Drawing::Color::Black;
			this->site_add_panel->Controls->Add(this->about_panel);
			this->site_add_panel->Controls->Add(this->site_added_site_panel);
			this->site_add_panel->Controls->Add(this->site_password_text_box);
			this->site_add_panel->Controls->Add(this->site_name_text_box);
			this->site_add_panel->Controls->Add(this->site_password_site_panel);
			this->site_add_panel->Controls->Add(this->site_name_site_panel);
			this->site_add_panel->Controls->Add(this->button1);
			this->site_add_panel->Controls->Add(this->label1);
			this->site_add_panel->Controls->Add(this->back_site_add_panel);
			this->site_add_panel->Controls->Add(this->pictureBox2);
			this->site_add_panel->Controls->Add(this->label2);
			this->site_add_panel->Location = System::Drawing::Point(0, 0);
			this->site_add_panel->Name = L"site_add_panel";
			this->site_add_panel->Size = System::Drawing::Size(537, 474);
			this->site_add_panel->TabIndex = 12;
			// 
			// about_panel
			// 
			this->about_panel->BackColor = System::Drawing::Color::PaleTurquoise;
			this->about_panel->Controls->Add(this->pictureBox7);
			this->about_panel->Controls->Add(this->label9);
			this->about_panel->Controls->Add(this->label8);
			this->about_panel->Controls->Add(this->label7);
			this->about_panel->Controls->Add(this->pictureBox6);
			this->about_panel->Controls->Add(this->pictureBox5);
			this->about_panel->Controls->Add(this->pictureBox4);
			this->about_panel->Controls->Add(this->label6);
			this->about_panel->Controls->Add(this->label5);
			this->about_panel->Controls->Add(this->pictureBox3);
			this->about_panel->Controls->Add(this->pictureBox1);
			this->about_panel->Location = System::Drawing::Point(0, 0);
			this->about_panel->Name = L"about_panel";
			this->about_panel->Size = System::Drawing::Size(537, 474);
			this->about_panel->TabIndex = 16;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(497, 427);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(37, 43);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 21;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(241, 399);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(161, 29);
			this->label9->TabIndex = 20;
			this->label9->Text = L"bilaltariq360";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(340, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 29);
			this->label8->TabIndex = 19;
			this->label8->Text = L"@ibilaltariq";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(107, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 29);
			this->label7->TabIndex = 18;
			this->label7->Text = L"@ibilaltariq";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(187, 390);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(44, 45);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(287, 325);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(44, 45);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(57, 325);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(49, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(243, 29);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Software Developer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(50, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 29);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Bilal Tariq";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(54, 40);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(102, 141);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(345, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 141);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// site_added_site_panel
			// 
			this->site_added_site_panel->AutoSize = true;
			this->site_added_site_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->site_added_site_panel->ForeColor = System::Drawing::Color::Black;
			this->site_added_site_panel->Location = System::Drawing::Point(180, 128);
			this->site_added_site_panel->Name = L"site_added_site_panel";
			this->site_added_site_panel->Size = System::Drawing::Size(187, 39);
			this->site_added_site_panel->TabIndex = 14;
			this->site_added_site_panel->Text = L"Site Added";
			// 
			// site_password_text_box
			// 
			this->site_password_text_box->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->site_password_text_box->Location = System::Drawing::Point(246, 279);
			this->site_password_text_box->Name = L"site_password_text_box";
			this->site_password_text_box->Size = System::Drawing::Size(212, 27);
			this->site_password_text_box->TabIndex = 13;
			this->site_password_text_box->Click += gcnew System::EventHandler(this, &MyForm::site_password_text_box_Click);
			// 
			// site_name_text_box
			// 
			this->site_name_text_box->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->site_name_text_box->Location = System::Drawing::Point(246, 216);
			this->site_name_text_box->Name = L"site_name_text_box";
			this->site_name_text_box->Size = System::Drawing::Size(212, 27);
			this->site_name_text_box->TabIndex = 12;
			this->site_name_text_box->Click += gcnew System::EventHandler(this, &MyForm::site_name_text_box_Click);
			// 
			// site_password_site_panel
			// 
			this->site_password_site_panel->AutoSize = true;
			this->site_password_site_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->site_password_site_panel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->site_password_site_panel->Location = System::Drawing::Point(39, 279);
			this->site_password_site_panel->Name = L"site_password_site_panel";
			this->site_password_site_panel->Size = System::Drawing::Size(177, 29);
			this->site_password_site_panel->TabIndex = 11;
			this->site_password_site_panel->Text = L"Site Password";
			// 
			// site_name_site_panel
			// 
			this->site_name_site_panel->AutoSize = true;
			this->site_name_site_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->site_name_site_panel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->site_name_site_panel->Location = System::Drawing::Point(39, 216);
			this->site_name_site_panel->Name = L"site_name_site_panel";
			this->site_name_site_panel->Size = System::Drawing::Size(133, 29);
			this->site_name_site_panel->TabIndex = 10;
			this->site_name_site_panel->Text = L"Site Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(287, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(264, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Developed by Bilal Tariq";
			// 
			// back_site_add_panel
			// 
			this->back_site_add_panel->BackColor = System::Drawing::Color::Yellow;
			this->back_site_add_panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_site_add_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_site_add_panel->Location = System::Drawing::Point(130, 400);
			this->back_site_add_panel->Name = L"back_site_add_panel";
			this->back_site_add_panel->Size = System::Drawing::Size(126, 38);
			this->back_site_add_panel->TabIndex = 6;
			this->back_site_add_panel->Text = L"Back";
			this->back_site_add_panel->UseVisualStyleBackColor = false;
			this->back_site_add_panel->Click += gcnew System::EventHandler(this, &MyForm::back_site_add_panel_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(57, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Altone Trial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(138, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password Manager";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Altone Trial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(49, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(444, 262);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->HeaderText = L"Site Name";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->HeaderText = L"Password";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 200;
			// 
			// signout_display_panel
			// 
			this->signout_display_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signout_display_panel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signout_display_panel.Image")));
			this->signout_display_panel->Location = System::Drawing::Point(486, 384);
			this->signout_display_panel->Name = L"signout_display_panel";
			this->signout_display_panel->Size = System::Drawing::Size(37, 37);
			this->signout_display_panel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->signout_display_panel->TabIndex = 10;
			this->signout_display_panel->TabStop = false;
			this->signout_display_panel->Click += gcnew System::EventHandler(this, &MyForm::signout_display_panel_Click);
			// 
			// add_display_panel
			// 
			this->add_display_panel->BackColor = System::Drawing::Color::Yellow;
			this->add_display_panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_display_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_display_panel->Location = System::Drawing::Point(175, 383);
			this->add_display_panel->Name = L"add_display_panel";
			this->add_display_panel->Size = System::Drawing::Size(126, 38);
			this->add_display_panel->TabIndex = 9;
			this->add_display_panel->Text = L"Add";
			this->add_display_panel->UseVisualStyleBackColor = false;
			this->add_display_panel->Click += gcnew System::EventHandler(this, &MyForm::add_display_panel_Click);
			// 
			// soft_dev_name_display_panel
			// 
			this->soft_dev_name_display_panel->AutoSize = true;
			this->soft_dev_name_display_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->soft_dev_name_display_panel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->soft_dev_name_display_panel->Location = System::Drawing::Point(264, 60);
			this->soft_dev_name_display_panel->Name = L"soft_dev_name_display_panel";
			this->soft_dev_name_display_panel->Size = System::Drawing::Size(194, 19);
			this->soft_dev_name_display_panel->TabIndex = 8;
			this->soft_dev_name_display_panel->Text = L"Developed by Bilal Tariq";
			// 
			// remove_display_panel
			// 
			this->remove_display_panel->BackColor = System::Drawing::Color::Yellow;
			this->remove_display_panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->remove_display_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_display_panel->Location = System::Drawing::Point(332, 383);
			this->remove_display_panel->Name = L"remove_display_panel";
			this->remove_display_panel->Size = System::Drawing::Size(126, 38);
			this->remove_display_panel->TabIndex = 7;
			this->remove_display_panel->Text = L"Remove";
			this->remove_display_panel->UseVisualStyleBackColor = false;
			this->remove_display_panel->Click += gcnew System::EventHandler(this, &MyForm::remove_display_panel_Click);
			// 
			// exit_display_panel
			// 
			this->exit_display_panel->BackColor = System::Drawing::Color::Yellow;
			this->exit_display_panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_display_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_display_panel->Location = System::Drawing::Point(18, 383);
			this->exit_display_panel->Name = L"exit_display_panel";
			this->exit_display_panel->Size = System::Drawing::Size(126, 38);
			this->exit_display_panel->TabIndex = 6;
			this->exit_display_panel->Text = L"Exit";
			this->exit_display_panel->UseVisualStyleBackColor = false;
			this->exit_display_panel->Click += gcnew System::EventHandler(this, &MyForm::exit_display_panel_Click);
			// 
			// logo_display_panel
			// 
			this->logo_display_panel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_display_panel.Image")));
			this->logo_display_panel->Location = System::Drawing::Point(57, 19);
			this->logo_display_panel->Name = L"logo_display_panel";
			this->logo_display_panel->Size = System::Drawing::Size(60, 60);
			this->logo_display_panel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo_display_panel->TabIndex = 3;
			this->logo_display_panel->TabStop = false;
			// 
			// soft_name_display_panel
			// 
			this->soft_name_display_panel->AutoSize = true;
			this->soft_name_display_panel->Font = (gcnew System::Drawing::Font(L"Altone Trial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->soft_name_display_panel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->soft_name_display_panel->Location = System::Drawing::Point(138, 19);
			this->soft_name_display_panel->Name = L"soft_name_display_panel";
			this->soft_name_display_panel->Size = System::Drawing::Size(320, 39);
			this->soft_name_display_panel->TabIndex = 1;
			this->soft_name_display_panel->Text = L"Password Manager";
			// 
			// wrong_password_label
			// 
			this->wrong_password_label->AutoSize = true;
			this->wrong_password_label->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wrong_password_label->ForeColor = System::Drawing::Color::Black;
			this->wrong_password_label->Location = System::Drawing::Point(164, 184);
			this->wrong_password_label->Name = L"wrong_password_label";
			this->wrong_password_label->Size = System::Drawing::Size(215, 29);
			this->wrong_password_label->TabIndex = 9;
			this->wrong_password_label->Text = L"Wrong Password";
			// 
			// soft_developer
			// 
			this->soft_developer->AutoSize = true;
			this->soft_developer->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->soft_developer->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->soft_developer->Location = System::Drawing::Point(288, 112);
			this->soft_developer->Name = L"soft_developer";
			this->soft_developer->Size = System::Drawing::Size(194, 19);
			this->soft_developer->TabIndex = 8;
			this->soft_developer->Text = L"Developed by Bilal Tariq";
			// 
			// signin_panel_enter
			// 
			this->signin_panel_enter->BackColor = System::Drawing::Color::Yellow;
			this->signin_panel_enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signin_panel_enter->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin_panel_enter->Location = System::Drawing::Point(287, 383);
			this->signin_panel_enter->Name = L"signin_panel_enter";
			this->signin_panel_enter->Size = System::Drawing::Size(126, 38);
			this->signin_panel_enter->TabIndex = 7;
			this->signin_panel_enter->Text = L"Enter";
			this->signin_panel_enter->UseVisualStyleBackColor = false;
			this->signin_panel_enter->Click += gcnew System::EventHandler(this, &MyForm::signin_panel_enter_Click);
			// 
			// signin_panel_exit
			// 
			this->signin_panel_exit->BackColor = System::Drawing::Color::Yellow;
			this->signin_panel_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signin_panel_exit->Font = (gcnew System::Drawing::Font(L"Altone Trial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin_panel_exit->Location = System::Drawing::Point(130, 383);
			this->signin_panel_exit->Name = L"signin_panel_exit";
			this->signin_panel_exit->Size = System::Drawing::Size(126, 38);
			this->signin_panel_exit->TabIndex = 6;
			this->signin_panel_exit->Text = L"About";
			this->signin_panel_exit->UseVisualStyleBackColor = false;
			this->signin_panel_exit->Click += gcnew System::EventHandler(this, &MyForm::signin_panel_exit_Click);
			// 
			// master_pass_text_box
			// 
			this->master_pass_text_box->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->master_pass_text_box->Location = System::Drawing::Point(262, 247);
			this->master_pass_text_box->MaxLength = 10;
			this->master_pass_text_box->Name = L"master_pass_text_box";
			this->master_pass_text_box->Size = System::Drawing::Size(231, 27);
			this->master_pass_text_box->TabIndex = 4;
			this->master_pass_text_box->UseSystemPasswordChar = true;
			this->master_pass_text_box->TextChanged += gcnew System::EventHandler(this, &MyForm::master_pass_text_box_TextChanged);
			// 
			// logo_pic
			// 
			this->logo_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_pic.Image")));
			this->logo_pic->Location = System::Drawing::Point(56, 52);
			this->logo_pic->Name = L"logo_pic";
			this->logo_pic->Size = System::Drawing::Size(90, 90);
			this->logo_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo_pic->TabIndex = 3;
			this->logo_pic->TabStop = false;
			// 
			// master_pass_label
			// 
			this->master_pass_label->AutoSize = true;
			this->master_pass_label->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->master_pass_label->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->master_pass_label->Location = System::Drawing::Point(44, 247);
			this->master_pass_label->Name = L"master_pass_label";
			this->master_pass_label->Size = System::Drawing::Size(212, 29);
			this->master_pass_label->TabIndex = 2;
			this->master_pass_label->Text = L"Master password";
			// 
			// soft_name
			// 
			this->soft_name->AutoSize = true;
			this->soft_name->Font = (gcnew System::Drawing::Font(L"Altone Trial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->soft_name->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->soft_name->Location = System::Drawing::Point(162, 73);
			this->soft_name->Name = L"soft_name";
			this->soft_name->Size = System::Drawing::Size(320, 39);
			this->soft_name->TabIndex = 1;
			this->soft_name->Text = L"Password Manager";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 472);
			this->Controls->Add(this->signin_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(551, 511);
			this->MinimumSize = System::Drawing::Size(551, 511);
			this->Name = L"MyForm";
			this->Text = L"Password Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->signin_panel->ResumeLayout(false);
			this->signin_panel->PerformLayout();
			this->display_panel->ResumeLayout(false);
			this->display_panel->PerformLayout();
			this->site_add_panel->ResumeLayout(false);
			this->site_add_panel->PerformLayout();
			this->about_panel->ResumeLayout(false);
			this->about_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signout_display_panel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_display_panel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_pic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void signin_panel_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->about_panel->Visible = true;
		this->site_add_panel->Visible = true;
		this->display_panel->Visible = true;
		this->signin_panel->Visible = true;
	}
private: System::Void signin_panel_enter_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->master_pass_text_box->Text == "") {
		this->wrong_password_label->Text = "Enter Password";
		this->wrong_password_label->Location = Point(180, 180);
		this->wrong_password_label->ForeColor = Color::Crimson;
	}
	else {
		if (toStandardString(this->master_pass_text_box->Text) != master_password) {
			this->wrong_password_label->Text = "Wrong Password";
			this->wrong_password_label->ForeColor = Color::Crimson;
		}
	}
}
private: System::Void exit_display_panel_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->about_panel->Visible = false;
	this->site_add_panel->Visible = false;
	this->display_panel->Visible = false;
	this->signin_panel->Visible = true;
}
private: System::Void signout_display_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->master_pass_text_box->Clear();
	this->display_panel->Visible = false;
	this->signin_panel->Visible = true;
}
private: System::Void master_pass_text_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toStandardString(this->master_pass_text_box->Text) == master_password) {
		this->dataGridView1->Rows->Clear();
		this->about_panel->Visible = false;
		this->site_add_panel->Visible = false;
		this->display_panel->Visible = true;
		this->signin_panel->Visible = true;

		this->wrong_password_label->ForeColor = Color::Black;
		this->about_panel->Visible = false;
		this->site_add_panel->Visible = false;
		this->display_panel->Visible = true;
		this->signin_panel->Visible = true;

		this->dataGridView1->Rows->Clear();

		std::string st;


		std::ifstream read;
		read.open("Sites.txt");

		if (!read.is_open()) {
			std::ofstream create_file;
			create_file.open("Sites.txt");
			create_file.close();
			read.open("Sites.txt");
		}
		total_sites = 0;

		while (!read.eof()) {
			getline(read, st);
			st = decryption(st);
			String^ site_name = gcnew String(st.c_str());
			getline(read, st);
			st = decryption(st);
			String^ password = gcnew String(st.c_str());

			if (site_name != "" || password != "") {
				this->dataGridView1->Rows->Add(site_name, password);
				total_sites += 1;
			}
		}

		read.close();
	}
}
private: System::Void back_site_add_panel_Click(System::Object^ sender, System::EventArgs^ e) {


	this->site_added_site_panel->ForeColor = Color::Black;


	this->about_panel->Visible = false;
	this->site_add_panel->Visible = false;
	this->display_panel->Visible = true;
	this->signin_panel->Visible = true;

	this->dataGridView1->Rows->Clear();

	std::string st;

	std::ifstream read;
	read.open("Sites.txt");
	total_sites = 0;

	while (!read.eof()) {
		getline(read, st);
		st = decryption(st);
		String^ site_name = gcnew String(st.c_str());
		getline(read, st);
		st = decryption(st);
		String^ password = gcnew String(st.c_str());

		if (site_name != "" || password != "") {
			this->dataGridView1->Rows->Add(site_name, password);
			total_sites += 1;
		}
	}
	read.close();
}
private: System::Void add_display_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->about_panel->Visible = false;
	this->site_add_panel->Visible = true;
	this->display_panel->Visible = true;
	this->signin_panel->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->site_name_text_box->Text == "" || this->site_password_text_box->Text == "") {
		this->site_added_site_panel->Text = "Missing Information";
		this->site_added_site_panel->ForeColor = Color::Crimson;
		this->site_added_site_panel->Location = Point(110, 128);
	}
	else {
		std::string site_name = toStandardString(this->site_name_text_box->Text);
		std::string site_password = toStandardString(this->site_password_text_box->Text);

		std::ofstream write;
		write.open("Sites.txt", std::ios::app);

		site_name = encryption(site_name);

		site_password = encryption(site_password);

		write << site_name << std::endl;
		write << site_password << std::endl;

		this->site_added_site_panel->Text = "Site Added";
		this->site_added_site_panel->ForeColor = Color::Crimson;
		this->site_added_site_panel->Location = Point(180, 128);

		this->site_name_text_box->Clear();
		this->site_password_text_box->Clear();
	}
}
private: System::Void remove_display_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	int rowIndex = dataGridView1->CurrentCell->RowIndex;
	dataGridView1->Rows->RemoveAt(rowIndex);

	std::string* st = new std::string[total_sites * 2];

	std::ifstream read;

	read.open("Sites.txt");

	for (int i = 0; i < total_sites * 2; i++) {
		read >> st[i];
	}

	read.close();

	std::ofstream write;
	write.open("Sites.txt");

	for (int i = 0, j = 1, k = 0; i < total_sites * 2; i+=2, j+=2, k++) {
		if (k != rowIndex) {
			write << st[i] << std::endl;
			write << st[j] << std::endl;
		}
	}

	total_sites -= 1;


	write.close();
}
private: System::Void site_name_text_box_Click(System::Object^ sender, System::EventArgs^ e) {
	this->site_added_site_panel->ForeColor = Color::Black;
}
private: System::Void site_password_text_box_Click(System::Object^ sender, System::EventArgs^ e) {
	this->site_added_site_panel->ForeColor = Color::Black;
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->master_pass_text_box->Clear();
	this->display_panel->Visible = false;
	this->about_panel->Visible = false;
	this->signin_panel->Visible = true;
}

	   std::string encryption(std::string st) {
		   for (int i = 0; i < st.length(); i++)
		   {
			   if(i % 2 == 0)
				   st[i] += '^';
			   else
				   st[i] += '!';
		   }
		   return st;
	   }

	   std::string decryption(std::string st) {
		   for (int i = 0; i < st.length(); i++)
		   {
			   if (i % 2 == 0)
				   st[i] -= '^';
			   else
				   st[i] -= '!';
		   }
		   return st;
	   }
};
}
