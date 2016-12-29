#pragma once
#include "Form1.h"
#include "Delete.h"
namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using System::Runtime::InteropServices::Marshal;
	using namespace System::IO;
	/// <summary>
	/// Summary for Log_In
	/// </summary>
	public ref class Log_In : public System::Windows::Forms::Form
	{
	private: static OleDbConnection ^ connect = gcnew OleDbConnection();
	public:
		Log_In(void)
		{
			InitializeComponent();
			String ^strConn = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=MyStudents.accdb";
			connect->ConnectionString = strConn;
		}

		OleDbCommand ^command;
		OleDbDataReader ^reader;
		String ^sqlStatement;
		int count;
	public: 
	//private: OleDbConnection ^connect;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Log_In()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  txtRegisterPin;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnexit;
	private: System::Windows::Forms::Button^  btnLogIn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_In::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtRegisterPin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->txtRegisterPin);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->groupBox1->Location = System::Drawing::Point(14, 105);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(399, 62);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Log In Pin:";
			// 
			// txtRegisterPin
			// 
			this->txtRegisterPin->Location = System::Drawing::Point(149, 23);
			this->txtRegisterPin->Name = L"txtRegisterPin";
			this->txtRegisterPin->PasswordChar = '*';
			this->txtRegisterPin->Size = System::Drawing::Size(232, 22);
			this->txtRegisterPin->TabIndex = 1;
			this->txtRegisterPin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtRegisterPin->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Register Pin:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(434, 98);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, -10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(430, 239);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Log_In::pictureBox1_Click);
			// 
			// btnexit
			// 
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnexit->Location = System::Drawing::Point(305, 188);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(108, 29);
			this->btnexit->TabIndex = 11;
			this->btnexit->Text = L"&Exit";
			this->btnexit->UseVisualStyleBackColor = true;
			this->btnexit->Click += gcnew System::EventHandler(this, &Log_In::btnexit_Click);
			// 
			// btnLogIn
			// 
			this->btnLogIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLogIn->Location = System::Drawing::Point(14, 188);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(114, 29);
			this->btnLogIn->TabIndex = 10;
			this->btnLogIn->Text = L"&Log-In";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &Log_In::btnLogIn_Click);
			// 
			// Log_In
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 229);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnLogIn);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Log_In";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Log_In";
			this->Load += gcnew System::EventHandler(this, &Log_In::Log_In_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
			 void dbConnect()
			 {
				  try
			 {
				 connect->Open();
				 MessageBox::Show("Successfully Connected...","Database Accessed",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 connect->Close();
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex + "Error Connecting Database","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		}

			 void Lecture_Log_In()
			 {
				 count =0;
				 Form1 ^form = gcnew Form1();
				try
				{
					command = gcnew OleDbCommand();
					sqlStatement ="select *from Lecture where LECTURE_ID='"+txtRegisterPin->Text+"'";
					connect->Open();
					command->Connection = connect;
					command->CommandText = sqlStatement;
					reader = command->ExecuteReader();

					while(reader->Read())
					{
						++count;
					}
					if(count ==1)
					{
						//MessageBox::Show("Correct Lecture ID","CONFIRMATION",MessageBoxButtons::OK,MessageBoxIcon::Information);
						this->Hide();
						form->mytitle= txtRegisterPin->Text;
						form->ShowDialog();
						
					}
					else
					{
						MessageBox::Show("Incorrect Lecture ID","ERROR CONFIRMATION",MessageBoxButtons::OK,MessageBoxIcon::Error);
						txtRegisterPin->Text ="";
						txtRegisterPin->Focus();
					}
					connect->Close();
				}
				catch(Exception ^ex)
				{
					MessageBox::Show(ex +" Could not read log_in Details","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
				}
			 }

			 void ExitForm()
			 {
				 if(MessageBox::Show("You are about to exit the Application. Exit Now?",
				 "CLOSE PROGRAMME", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 Application::Exit();
			  }
			 }

private: System::Void Log_In_Load(System::Object^  sender, System::EventArgs^  e) {
			dbConnect();
		 }
private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 Lecture_Log_In();
		 }
private: System::Void btnexit_Click(System::Object^  sender, System::EventArgs^  e) {
			 ExitForm();
		 }
};
}
