#pragma once

namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for ManuelCap
	/// </summary>
	public ref class ManuelCap : public System::Windows::Forms::Form
	{
	public:
		ManuelCap(void)
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
		~ManuelCap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cmbStdList;
	protected: 

	protected: 
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  cmbGroup;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;

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
			this->cmbStdList = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cmbGroup = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cmbStdList
			// 
			this->cmbStdList->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmbStdList->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmbStdList->FormattingEnabled = true;
			this->cmbStdList->Location = System::Drawing::Point(22, 126);
			this->cmbStdList->Name = L"cmbStdList";
			this->cmbStdList->Size = System::Drawing::Size(294, 21);
			this->cmbStdList->TabIndex = 0;
			this->cmbStdList->SelectedIndexChanged += gcnew System::EventHandler(this, &ManuelCap::cmbStdList_SelectedIndexChanged);
			this->cmbStdList->TextChanged += gcnew System::EventHandler(this, &ManuelCap::cmbStdList_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(22, 77);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Student #";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ManuelCap::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(108, 77);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(94, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Student Name";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ManuelCap::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(208, 77);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(108, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Student Surname";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &ManuelCap::checkBox3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Load ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManuelCap::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(241, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Present";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManuelCap::button2_Click);
			// 
			// cmbGroup
			// 
			this->cmbGroup->FormattingEnabled = true;
			this->cmbGroup->Location = System::Drawing::Point(22, 25);
			this->cmbGroup->Name = L"cmbGroup";
			this->cmbGroup->Size = System::Drawing::Size(294, 21);
			this->cmbGroup->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Group";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Sign by ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 153);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 45);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Finish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ManuelCap::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Student list";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(296, 42);
			this->button4->TabIndex = 11;
			this->button4->Text = L"New ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ManuelCap::button4_Click);
			// 
			// ManuelCap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 258);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbGroup);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->cmbStdList);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ManuelCap";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ManuelCap";
			this->Load += gcnew System::EventHandler(this, &ManuelCap::ManuelCap_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			public : 
					String ^b;
			private :
			OleDbConnection^ conDataBase;
			String^ con;
			void fillMyGroups()
			{
					 try
					 {
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM groups",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						
						for(int i=0;i<td->Rows->Count;i++)
						{
							cmbGroup->Items->Add(td->Rows[i][1]->ToString());
							
						}
							
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
						 
						String^ name,^a;
						DateTime myDate;
						name = myDate.Today.ToShortDateString();
							
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "UPDATE attendance set "+name+"='YES' where "+b+"='"+cmbStdList->Text+"'");
						
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
						
			void seachTyping()
			{
					 try
					 {
						 if (cmbGroup->Text!="")
						{

								cmbGroup->Items->Clear();
								conDataBase->Open();
								OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT "+b+" FROM attendance where GROUP_S='"+cmbGroup->Text+"';",conDataBase);
								cmd->Connection = conDataBase;
								//cmd->CommandText= "SELECT * FROM Booking";

								OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
								adp->SelectCommand=cmd;
								DataTable^ td= gcnew DataTable();
								adp->Fill(td);
								ListViewItem^ list;
								for(int i=0;i<td->Rows->Count;i++)
								{
									cmbStdList->Items->Add(td->Rows[i][0]->ToString());
							
								}
						 }
						 else 
						 {
								cmbGroup->Items->Clear();
								conDataBase->Open();
								OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT "+b+" FROM attendance ;",conDataBase);
								cmd->Connection = conDataBase;
								//cmd->CommandText= "SELECT * FROM Booking";

								OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
								adp->SelectCommand=cmd;
								DataTable^ td= gcnew DataTable();
								adp->Fill(td);
								ListViewItem^ list;
								for(int i=0;i<td->Rows->Count;i++)
								{
									cmbStdList->Items->Add(td->Rows[i][0]->ToString());
							
								}

						 }
						
							
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
				try
				{
							String^ name,^a=" ";
							DateTime myDate;
							name = myDate.Today.ToShortDateString();
							
							
						    

							conDataBase->Open();

							OleDbCommand^ cmd= gcnew OleDbCommand("ALTER TABLE [attendance] ADD ["+name+"] Text  ");
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
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void ManuelCap_Load(System::Object^  sender, System::EventArgs^  e) {
				conDataBase= gcnew OleDbConnection();
				con=L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=MyStudents.accdb";
				conDataBase->ConnectionString = con;

				fillMyGroups();

		 }
private: System::Void cmbStdList_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void cmbStdList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 seachTyping();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkBox2->Checked=false;
			 checkBox3->Checked=false;
			 b="";
			 b="STD_NUMBER";
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkBox1->Checked=false;
			 checkBox3->Checked=false;
			 b="";
			 b="STD_NAME";
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			
			 checkBox2->Checked=false;
			 checkBox1->Checked=false;
			 b="";
			 b="STD_SURNAME";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 addcolumn();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 present();
		 }
};
}
