#pragma once

namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Student(void)
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
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cmbClassGroup;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtSurname;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtStNum;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnSave;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->cmbClassGroup = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtStNum = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbClassGroup
			// 
			this->cmbClassGroup->FormattingEnabled = true;
			this->cmbClassGroup->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"2A", L"2B", L"2C", L"2D"});
			this->cmbClassGroup->Location = System::Drawing::Point(24, 253);
			this->cmbClassGroup->Name = L"cmbClassGroup";
			this->cmbClassGroup->Size = System::Drawing::Size(202, 28);
			this->cmbClassGroup->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbClassGroup);
			this->groupBox1->Controls->Add(this->txtSurname);
			this->groupBox1->Controls->Add(this->txtName);
			this->groupBox1->Controls->Add(this->txtStNum);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Location = System::Drawing::Point(12, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(256, 309);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Student Details";
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(24, 127);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(202, 26);
			this->txtSurname->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(24, 190);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(202, 26);
			this->txtName->TabIndex = 5;
			// 
			// txtStNum
			// 
			this->txtStNum->Location = System::Drawing::Point(24, 65);
			this->txtStNum->Name = L"txtStNum";
			this->txtStNum->Size = System::Drawing::Size(202, 26);
			this->txtStNum->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(20, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Class Group\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(20, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Student Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(20, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Student Surname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(20, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Number";
			// 
			// btnSave
			// 
			this->btnSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnSave.BackgroundImage")));
			this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSave->Location = System::Drawing::Point(12, 320);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(69, 56);
			this->btnSave->TabIndex = 8;
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Student::btnSave_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(208, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 56);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 388);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->button1);
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Student";
			this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Student_Load(System::Object^  sender, System::EventArgs^  e) {

			this->Text=title;
			 if(title=="UPDATE STUDENT")
			 {
				 txtStNum->Text = num;
				 txtSurname->Text = sname;
				 txtName->Text = name;
				 cmbClassGroup->SelectedItem = groups;

			 }

			 }
			  String^ num,^name,^sname,^ groups;
	public : void getValueToUpdate(String ^ &stdNum,String^ &stdSn,String^ &stdName,String^ &group)
		 {
			 num= stdNum;
			 sname = stdSn;
			 name = stdName;
			 groups= group;
		 }
			 void returnValueToUpdate(String ^ &stdNum,String^ &stdSn,String^ &stdName,String^ &group)
		 {
			 stdNum =txtStNum->Text ;
			 stdSn=txtSurname->Text;
			 stdName=txtName->Text;
			 group=cmbClassGroup->Text;
		 }
      String ^ title;
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
