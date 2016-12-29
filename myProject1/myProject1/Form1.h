#pragma once
//#include"ManuelCap.h"
#include"detailView.h"
#include"staticForm.h"
#include "Student.h"
//#include "Delete.h"
//#include "Edit_Students.h"
namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private :
			OleDbConnection^ conDataBase;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


	private: System::Windows::Forms::ImageList^  imageList2;

			 String^ con;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;



	public : String^ cname;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ImageList^  imageList1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(741, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->ImageList = this->imageList1;
			this->tabControl1->Location = System::Drawing::Point(7, 160);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(726, 516);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox7);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(718, 486);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"STUDENT  ATTENDANCE";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button10);
			this->groupBox5->Controls->Add(this->button11);
			this->groupBox5->Location = System::Drawing::Point(538, 407);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(174, 71);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"STUDENT";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(117, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 40);
			this->button9->TabIndex = 2;
			this->button9->Text = L"DELETE";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(56, 20);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 40);
			this->button10->TabIndex = 1;
			this->button10->Text = L"UPDATE";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 20);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(44, 40);
			this->button11->TabIndex = 0;
			this->button11->Text = L"ADD";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button6);
			this->groupBox7->Controls->Add(this->dateTimePicker1);
			this->groupBox7->Location = System::Drawing::Point(433, 22);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(279, 62);
			this->groupBox7->TabIndex = 5;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Date";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(211, 22);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"New Day";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Location = System::Drawing::Point(9, 23);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(191, 20);
			this->dateTimePicker1->TabIndex = 6;
			this->dateTimePicker1->Value = System::DateTime(2015, 10, 28, 0, 0, 0, 0);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Location = System::Drawing::Point(6, 407);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(144, 71);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"CAPTURE OPTIONS";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(75, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Absent";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 20);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 40);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Present";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Location = System::Drawing::Point(300, 407);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(232, 71);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"STATISTIC OPTIONS";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(154, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 40);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Student Stc Up to Now";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(76, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 40);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Weekly Student Stc";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 40);
			this->button5->TabIndex = 0;
			this->button5->Text = L" Groups Statictic";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(156, 407);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(138, 71);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ADVANCED OPTIONS";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 40);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Attendance Detail View";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(6, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 62);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Search";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"By";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"DATE", L"LATEST", L"2A", L"2B", L"2C", L"2D"});
			this->comboBox1->Location = System::Drawing::Point(46, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(188, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"LATEST";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(6, 100);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(706, 301);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"STD NUMBER";
			this->columnHeader1->Width = 107;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"STD NAME";
			this->columnHeader2->Width = 141;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"STD SURNAME";
			this->columnHeader3->Width = 132;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"GROUP";
			this->columnHeader4->Width = 138;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripMenuItem1, 
				this->toolStripMenuItem2});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(114, 48);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(113, 22);
			this->toolStripMenuItem1->Text = L"Present";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(113, 22);
			this->toolStripMenuItem2->Text = L"Absent";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"tabbg.JPG");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(737, 111);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"statusStrip1.BackgroundImage")));
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel2});
			this->statusStrip1->Location = System::Drawing::Point(0, 679);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(741, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(175, 17);
			this->toolStripStatusLabel2->Text = L"Developed by berka and Aubrey";
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"SCOI0084-summary-icon-100x100.gif");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(741, 701);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				this->Text="My ID : "+mytitle;
				conDataBase= gcnew OleDbConnection();
				con=L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=MyStudents.accdb";
				conDataBase->ConnectionString = con;
				fillMyList();
			 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(listView1->SelectedItems->Count > 0)
			    {
					 if (comboBox1->Text=="DATE")
					{
						present();
						searchByDay();
				
				    }
					else if (comboBox1->Text=="LATEST")
					{
						present();
						latestList();
					}
				
				}
			 else
			 {
				 MessageBox::Show("Select Student Plz","No student selected");
			 }

			

		 }
		

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 detailView^ dv= gcnew detailView();
			 dv->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 chartMaker();
			 
		 }
		 int daysAttended,max;
		 int g1,g2,g3,g4;
		 int g1numOfStudent,g2numOfStudent,g3numOfStudent,g4numOfStudent;
		 
		 String^ name;
		 void chartf()
		 {
			 
			 
			
		 }
		 void fillMyList()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;

						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void chartMaker()
			{


				if(listView1->SelectedItems->Count > 0)
			    {
				int count=0;
					 try
					 {
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where STD_NUMBER= '"+listView1->SelectedItems[0]->SubItems[0]->Text+"'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;

						

						int col= lastColumn-1;
						daysAttended=0;

						while(count < 5)
						{
							if(td->Rows[0][col]->ToString()=="YES")
							{
							  daysAttended++;
							}
							col--;
							count++;

						}
						
						
							
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

					 staticForm^ f= gcnew staticForm();
					f->value=daysAttended;
					f->max=5;
					f->title="Latest Week Statistic";
					f->stdNum=listView1->SelectedItems[0]->SubItems[0]->Text;
					f->ShowDialog();
				}
				else
			    {
				    MessageBox::Show("Select a student","No student selected");
			    }


			}

		 void chartGroupMaker()
			{


				
				int count1=0;
					 try
					 {
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance ",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;

						

						int col= lastColumn-1;
						daysAttended=0;
						g1=0;

						g1numOfStudent=g2numOfStudent=g3numOfStudent=g4numOfStudent=0;
						for(int i=0;i<td->Rows->Count;i++)
						{
							if(td->Rows[i][4]->ToString()=="2A")
							{
								///getting number of   group2a student
								g1numOfStudent++;

								//count number of attendance 
								while(col > 4)
								{
									if(td->Rows[i][col]->ToString()=="YES")
									{
										g1++;
									}
									col--;
									//count1++;
								}
								col= lastColumn-1;
							}
							else if (td->Rows[i][4]->ToString()=="2B")
							{
								///getting number of   group2a student
								g2numOfStudent++;
								//count number of attendance 
								while(col > 4)
								{
									if(td->Rows[i][col]->ToString()=="YES")
									{
										g2++;
									}
									col--;
									//count1++;
								}
								col= lastColumn-1;


							}
							else if (td->Rows[i][4]->ToString()=="2C")
							{
								g3numOfStudent++;
								///getting number of   group2a student
								//count number of attendance 
								while(col > 4)
								{
									if(td->Rows[i][col]->ToString()=="YES")
									{
										g3++;
									}
									col--;
									//count1++;
								}
								col= lastColumn-1;

							}
							else if (td->Rows[i][4]->ToString()=="2D")
							{
								g4numOfStudent++;

								//count number of attendance 
								while(col > 4)
								{
									if(td->Rows[i][col]->ToString()=="YES")
									{
										g4++;
									}
									col--;
									//count1++;
								}
								col= lastColumn-1;
							}
						}

						//calculating percentage of attendance for each group;
						double g1Total= g1numOfStudent * (lastColumn-5);
						double g1result= g1/g1Total;
						int rg1=g1result*100;

						double g2Total= g2numOfStudent * (lastColumn-5);
						double g2result= g2/g2Total;
						int rg2=g2result*100;

						double g3Total= g3numOfStudent * (lastColumn-5);
						double g3result= g3/g3Total;
						int rg3=g3result*100;

						double g4Total= g4numOfStudent * (lastColumn-5);
						double g4result= g4/g4Total;
						int rg4=g4result*100;
						//MessageBox::Show(""+rg3);
					 
						staticForm^ f= gcnew staticForm();
						f->loads(rg1,rg2,rg3,rg4);
						f->title="";
						f->ShowDialog();

						g1numOfStudent=g2numOfStudent=g3numOfStudent=g4numOfStudent=0;
						g1=g2=g3=g4=0;

						
						
							
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

					 
				

			}
		 void addcolumn()
			{
				String^ today=dateTimePicker1->Value.ToShortDateString();
						String^ Today="";
						for(int i=0;i<today->Length;i++)
						{
							if(today[i]=='-')
							{
								
							}
							else
							{
								Today=Today+today[i];
							}
						}
				try
				{
							
							conDataBase->Open();

							OleDbCommand^ cmd= gcnew OleDbCommand("ALTER TABLE [attendance] ADD ["+Today+"] Text  ");
							cmd->Connection = conDataBase;
							cmd->ExecuteNonQuery();
							
				}
				catch(Exception^ex)
				{
					MessageBox::Show(ex->Message);
				}
				finally
				{
					conDataBase->Close();
				}
			}
		 void present()
			{
					 try
					 {
						String^ today=dateTimePicker1->Value.ToShortDateString();
						String^ Today="";
						for(int i=0;i<today->Length;i++)
						{
							if(today[i]=='-')
							{
								
							}
							else
							{
								Today=Today+today[i];
							}
						}
							
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand("UPDATE  attendance set "+Today+"='YES' where STD_NUMBER ='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'");
						
						cmd->Connection = conDataBase;
						cmd->ExecuteNonQuery();
							

							
					 }
					 
					 catch(Exception^ex)
					 {
						 if(ex->Message=="No value given for one or more required parameters.")
						 {
							 MessageBox::Show("Plz Select current date ","Current Date not setted");
						 }
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void absent()
			{
					 try
					 {
						String^ today=dateTimePicker1->Value.ToShortDateString();
						String^ Today="";
						for(int i=0;i<today->Length;i++)
						{
							if(today[i]=='-')
							{
								
							}
							else
							{
								Today=Today+today[i];
							}
						}
							
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand("UPDATE  attendance set "+Today+"='NO' where STD_NUMBER ='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'");
						
						cmd->Connection = conDataBase;
						cmd->ExecuteNonQuery();
							

							
					 }
					 catch(Exception^ex)
					 {
						if(ex->Message->ToString()=="No value given for one or more required parameters.")
						 {
							 MessageBox::Show("Plz Select current date ","Current Date not setted");
						 }
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void refresh()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void latestList()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);
						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}

		 void searchByDay()
		 {
			 
				 try
						
					 {
						String^ today=dateTimePicker1->Value.ToShortDateString();
						String^ Today="";
						for(int i=0;i<today->Length;i++)
						{
							if(today[i]=='-')
							{
								//Today=Today+"_";
							}
							else
							{
								Today=Today+today[i];
							}
						}

						//MessageBox::Show(Today);
						 listView1->Items->Clear();

						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT  STD_NUMBER,STD_NAME,STD_SURNAME,GROUP_S,["+Today+"] FROM attendance",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][3]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						  //MessageBox::Show(ex->Message);
						 if(ex->Message->ToString()=="No value given for one or more required parameters.")
						 {
							 MessageBox::Show("There is no record for the given date  ","No data founded");
						 }
					 }
					 finally
					 {
						 conDataBase->Close();
					 }



		 }
		 void progressCharPerStudent()
			{
				int mumOfDay=0;

				if(listView1->SelectedItems->Count > 0)
			    {
				int count=0;
					 try
					 {
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where STD_NUMBER= '"+listView1->SelectedItems[0]->SubItems[0]->Text+"'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;

						

						int col= lastColumn-1;
						daysAttended=0;
						
						mumOfDay=lastColumn-5;
						while(col > 5)
						{
							
							if(td->Rows[0][col]->ToString()=="YES")
							{
							  daysAttended++;
							}
							col--;
							

						}
						
						
							
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }
					// mumOfDay;
					 double nOfday=mumOfDay;
					 double percentage=daysAttended/nOfday;
					 int p=percentage*100;
					  //MessageBox::Show(""+percentage);
					 staticForm^ f= gcnew staticForm();
					f->title="Up to Now";
					f->loads( p,listView1->SelectedItems[0]->SubItems[0]->Text);
					
					f->ShowDialog();
				}
				else
			    {
				    MessageBox::Show("Select a student","No student selected");
			    }


			}

		 void search2A()
		 {
			  try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2A'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);
						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

		 }
		 void search2B()
		 {
			  try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2B'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);
						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

		 }
		 void search2C()
		 {
			  try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2C'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);
						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

		 }
		 void search2D()
		 {
			  try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2D'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);
						cname=td->Columns[lastColumn-1]->ColumnName;

						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

		 }

		 void refresh2A()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2A'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void refresh2B()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2B'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void refresh2C()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2C'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
		 void refresh2D()
			{
				
					 try
						
					 {
						   listView1->Items->Clear();
						   
					
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance where GROUP_S='2D'",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;
						listView1->Columns->Remove(listView1->Columns[4]);

						cname=td->Columns[lastColumn-1]->ColumnName;
						
						listView1->Columns->Add(cname);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][2]->ToString());
							list->SubItems->Add(td->Rows[i][4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
			
											
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 finally
					 {
						 conDataBase->Close();
					 }

			}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 chartGroupMaker();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 addcolumn();
			 refresh();
			 
			
		 }

private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (comboBox1->Text=="DATE")
			 {
				  present();
				  searchByDay();
				
			 }
			  else if (comboBox1->Text=="LATEST")
			 {
				 present();
				 latestList();
			 }
			  else if (comboBox1->Text=="2A")
			 {
				 present();
				 refresh2A();
			 }
			 else if (comboBox1->Text=="2B")
			 {
				 present();
				 refresh2B();
			 }
			 else if (comboBox1->Text=="2C")
			 {
				 present();
				 refresh2C();
			 }
			 else if (comboBox1->Text=="2D")
			 {
				  present();
				 refresh2D();
			 }
			 
			 
			
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (comboBox1->Text=="DATE")
			 {
				 searchByDay();
			 }
			 else if (comboBox1->Text=="LATEST")
			 {
				 latestList();
			 }
			 else if (comboBox1->Text=="2A")
			 {
				 search2A();
			 }
			 else if (comboBox1->Text=="2B")
			 {
				 search2B();
			 }
			 else if (comboBox1->Text=="2C")
			 {
				 search2C();
			 }
			 else if (comboBox1->Text=="2D")
			 {
				 search2D();
			 }
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {

			  if (comboBox1->Text=="DATE")
			 {
				  absent();
				  searchByDay();
				
			 }
			  else if (comboBox1->Text=="LATEST")
			 {
				 absent();
				 refresh();
			 }

			 
			 else if (comboBox1->Text=="2A")
			 {
				 absent();
				 refresh2A();
			 }
			 else if (comboBox1->Text=="2B")
			 {
				 absent();
				 refresh2B();
			 }
			 else if (comboBox1->Text=="2C")
			 {
				 absent();
				 refresh2C();
			 }
			 else if (comboBox1->Text=="2D")
			 {
				 absent();
				 refresh2D();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(listView1->SelectedItems->Count > 0)
			    {
					 if (comboBox1->Text=="DATE")
					{
						absent();
						searchByDay();
				
				    }
					else if (comboBox1->Text=="LATEST")
					{
						absent();
						latestList();
					}
				
				}
			 else
			 {
				 MessageBox::Show("Select Student Plz","No student selected");
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

			 progressCharPerStudent();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				operation="add";
				Student^ f= gcnew Student();
				//f->ShowDialog();
	
				String^ num="",^name="",^sname="",^ groups="";

				f->title="NEW STUDENT";
				f->ShowDialog();
				f->returnValueToUpdate(num,sname,name,groups);
				if(num!="" && groups!="" )
			    {
				   if(operation=="add")
				   {
					addStudent(num,sname,name,groups);
					latestList();

				   }
				}
				else
			    {
				  MessageBox::Show("Fill all student details","Empty fields detected");
			
			    }
			 
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(listView1->SelectedItems->Count >0)
			{

			 if(MessageBox::Show("You are about delete a student. are you sure ?",
				 "Deleting student", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					

			    deleteRecord();
			    latestList();
			 }
			 }
			 else
			{
				MessageBox::Show("Select an item in the listview to delete.","deletion",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			
			 
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(listView1->SelectedItems->Count > 0)
			 {
				  operation="update";
				  String^ num="",^name="",^sname="",^ groups="";

				  num=listView1->SelectedItems[0]->SubItems[0]->Text;
				  name=listView1->SelectedItems[0]->SubItems[1]->Text;
				  sname=listView1->SelectedItems[0]->SubItems[2]->Text;
				  groups= listView1->SelectedItems[0]->SubItems[3]->Text;

				 Student^ updateForm= gcnew Student();
				
				
				updateForm->getValueToUpdate(num,sname,name,groups);
				updateForm->title="UPDATE STUDENT";
				updateForm->ShowDialog();
				updateForm->returnValueToUpdate(num,sname,name,groups);
				if(operation=="update")
				{

					if(MessageBox::Show("Do you want to save this changes ?",
				 "Updating student", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){

					EditRecord(num,sname,name,groups);
					latestList();
					}

				}


			  }
			 else
			 {
				 MessageBox::Show("Select Student to update  Plz","No student selected");
			 }
		 }

		 String ^operation;

	      void EditRecord(String ^ stdNum,String^ stdSn,String^ stdName,String^ group)
		{
			if(listView1->SelectedItems->Count >0)
			{
				try
				{
					String^ updateSQL = "update attendance SET STD_NUMBER='"+stdNum+"',STD_NAME='"+stdName+"',STD_SURNAME='"+stdSn+"',GROUP_S='"+group+"' where STD_NUMBER='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'";
					conDataBase->Open();
					OleDbCommand^ cmd= gcnew OleDbCommand(updateSQL);
					cmd->Connection = conDataBase;
					cmd->ExecuteNonQuery();
					
			
					MessageBox::Show("updated student  successfully","Update successfully",MessageBoxButtons::OK,MessageBoxIcon::Information);
			
			
					
				}
				catch(Exception ^ex)
				{
					MessageBox::Show(ex+ " Could not delete student data","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
				}
				finally
				{
					conDataBase->Close();
				}
			
			}
			else
			{
				MessageBox::Show("Select an item in the listview to edit.","No student selected",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			
		}
		  void addStudent(String ^ stdNum,String^ stdSn,String^ stdName,String^ group)
		  {
			  if(stdNum!="" && group!="" )
			  {
				  try
				  {
					  
					    conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand("insert into attendance (STD_NUMBER,STD_NAME,STD_SURNAME,GROUP_S) values('"+stdNum+"','"+stdName+"','"+stdSn+"','"+group+"')" );
						
						cmd->Connection = conDataBase;
						cmd->ExecuteNonQuery();
						MessageBox::Show("Adding  student  successfully","Add successfully",MessageBoxButtons::OK,MessageBoxIcon::Information);
			
				  }
				  catch (Exception ^ ex)
				  {
					  MessageBox::Show(" Could not add student data","ERROR");
				  }
				  finally
				  {
					  conDataBase->Close();
				  }

			  }
			  else
			  {
				  MessageBox::Show("Fill all student details","Empty fields detected");
			
			  }
		  }
		 void deleteRecord()
		{
			if(listView1->SelectedItems->Count >0)
			{
				try
					{


					conDataBase->Open();
					OleDbCommand^ cmd= gcnew OleDbCommand("delete from attendance where STD_NUMBER='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'" );
						
					cmd->Connection = conDataBase;
					cmd->ExecuteNonQuery();


					MessageBox::Show("delete student successfully","Successfully delected",MessageBoxButtons::OK,MessageBoxIcon::Information);
					
			
			
					}
				catch (Exception ^ ex)
				  {
					  MessageBox::Show(ex->Message);
				  }
				  finally
				  {
					  conDataBase->Close();
				  }

			  
			}
			else
			{
				MessageBox::Show("Select an item in the listview to delete.","deletion",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			
		}
		 public : String^ mytitle;

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }
};
}


