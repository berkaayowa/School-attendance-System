#pragma once

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
	/// Summary for Edit_Students
	/// </summary>
	public ref class Edit_Students : public System::Windows::Forms::Form
	{
	private: static OleDbConnection ^ connect = gcnew OleDbConnection();
	public:
		Edit_Students(void)
		{
			InitializeComponent();
			String ^strConn = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\aubrey\\Pictures\\myProject2015\\myProject1\\myProject1\\MyStuden"
				L"ts.accdb";
			connect->ConnectionString = strConn;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit_Students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  cmbClassGroup;

	private: System::Windows::Forms::TextBox^  txtSurname;

	private: System::Windows::Forms::TextBox^  txtName;

	private: System::Windows::Forms::TextBox^  txtStudentNo;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		OleDbCommand ^command;
		OleDbDataReader ^reader;
		String ^updateSQL;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit_Students::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbClassGroup = (gcnew System::Windows::Forms::ComboBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtStudentNo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(611, 111);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(8, 127);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(587, 154);
			this->listView1->TabIndex = 10;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Click += gcnew System::EventHandler(this, &Edit_Students::listView1_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"STUDENT NUMBER";
			this->columnHeader1->Width = 179;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"FIRST_NAME";
			this->columnHeader2->Width = 147;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"SURNAME";
			this->columnHeader3->Width = 124;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"CLASS GROUP";
			this->columnHeader4->Width = 195;
			// 
			// btnEdit
			// 
			this->btnEdit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnEdit.BackgroundImage")));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEdit->Location = System::Drawing::Point(103, 450);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(106, 65);
			this->btnEdit->TabIndex = 11;
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &Edit_Students::btnEdit_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnExit->Location = System::Drawing::Point(413, 450);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(104, 65);
			this->btnExit->TabIndex = 12;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Edit_Students::btnExit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->cmbClassGroup);
			this->groupBox1->Controls->Add(this->txtSurname);
			this->groupBox1->Controls->Add(this->txtName);
			this->groupBox1->Controls->Add(this->txtStudentNo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(8, 295);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(587, 149);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Student Details";
			// 
			// cmbClassGroup
			// 
			this->cmbClassGroup->FormattingEnabled = true;
			this->cmbClassGroup->Location = System::Drawing::Point(397, 92);
			this->cmbClassGroup->Name = L"cmbClassGroup";
			this->cmbClassGroup->Size = System::Drawing::Size(154, 21);
			this->cmbClassGroup->TabIndex = 7;
			this->cmbClassGroup->SelectedIndexChanged += gcnew System::EventHandler(this, &Edit_Students::comboBox1_SelectedIndexChanged);
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(83, 92);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(196, 20);
			this->txtSurname->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(385, 41);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(166, 20);
			this->txtName->TabIndex = 5;
			// 
			// txtStudentNo
			// 
			this->txtStudentNo->Location = System::Drawing::Point(126, 41);
			this->txtStudentNo->Name = L"txtStudentNo";
			this->txtStudentNo->Size = System::Drawing::Size(153, 20);
			this->txtStudentNo->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(324, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Class Group:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(25, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(324, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(25, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Number:";
			// 
			// Edit_Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(607, 515);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Edit_Students";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit_Students";
			this->Load += gcnew System::EventHandler(this, &Edit_Students::Edit_Students_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

			 void LoadComboBox()
		{
			String ^select;
			command = gcnew OleDbCommand();
			select ="select *from attendance";
			try
			{
		    connect->Open();
			command->Connection = connect;
			command->CommandText = select;
			reader = command->ExecuteReader();
			while(reader->Read())
			{
				ListViewItem^ item = gcnew ListViewItem(reader["STD_NUMBER"]->ToString());
					 item->SubItems->Add(reader["STD_NAME"]->ToString());
					 item->SubItems->Add(reader["STD_SURNAME"]->ToString());
					 //item->SubItems->Add(reader["ATD_STATUS"]->ToString());
					 item->SubItems->Add(reader["GROUP_S"]->ToString());
					 listView1->Items->Add(item);
			}
			connect->Close();
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex+ " Could not load student data","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}

		}

			 void EditRecord()
		{
			if(listView1->SelectedItems->Count >0)
			{
				try
			{
			updateSQL = "update attendance SET STD_NUMBER='"+txtStudentNo->Text+"',STD_NAME='"+txtName->Text+"',STD_SURNAME='"+txtSurname->Text+"',GROUP_S='"+cmbClassGroup->Text+"' where STD_NUMBER='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'";
		    connect->Open();
			command->Connection = connect;
			command->CommandText = updateSQL;
			reader = command->ExecuteReader();
			MessageBox::Show("updated student data successfully","deletion",MessageBoxButtons::OK,MessageBoxIcon::Information);
			listView1->Items->Clear();
			while(reader->Read())
			{
				
			}
			connect->Close();
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex+ " Could not delete student data","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
			LoadComboBox();
			}
			else
			{
				MessageBox::Show("Select an item in the listview to edit.","deletion",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			
		}

			 void ExitForm()
			 {
				 if(MessageBox::Show("You are about to exit the Application. Exit Now?",
				 "CLOSE PROGRAMME", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 this->Close();
			  }
			 }
private: System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {

			 txtStudentNo->Text = listView1->SelectedItems[0]->SubItems[0]->Text;
			 txtName->Text  = listView1->SelectedItems[0]->SubItems[1]->Text;
			 txtSurname->Text  = listView1->SelectedItems[0]->SubItems[2]->Text;
			 cmbClassGroup->Text   = listView1->SelectedItems[0]->SubItems[3]->Text;
		 }
private: System::Void Edit_Students_Load(System::Object^  sender, System::EventArgs^  e) {

			 LoadComboBox();
		 }
private: System::Void btnEdit_Click(System::Object^  sender, System::EventArgs^  e) {

			 EditRecord();
		 }
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 ExitForm();
		 }
};
}
