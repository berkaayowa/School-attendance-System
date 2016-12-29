#include"Cal.h"
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
	/// Summary for detailView
	/// </summary>
	public ref class detailView : public System::Windows::Forms::Form
	{
	public:
		detailView(void)
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
		~detailView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(2, 25);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(519, 341);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"STD NUMBER";
			this->columnHeader1->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"STD NAME";
			this->columnHeader2->Width = 86;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"5 LATEST ATTENDANCES";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &detailView::button2_Click);
			// 
			// detailView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"detailView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ATTENDANCE DETAILS";
			this->Load += gcnew System::EventHandler(this, &detailView::detailView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void detailView_Load(System::Object^  sender, System::EventArgs^  e) {
			conDataBase= gcnew OleDbConnection();
			con=L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=MyStudents.accdb";
			conDataBase->ConnectionString = con;
			fillMyList();
			 }
	void fillMyList()
			{
				String^ day1,^day2,^day3,^day4,^day5;
					 try
					 {
						conDataBase->Open();
						OleDbCommand^ cmd= gcnew OleDbCommand( "SELECT * FROM attendance",conDataBase);
						cmd->Connection = conDataBase;
						

						OleDbDataAdapter^ adp= gcnew OleDbDataAdapter();
						adp->SelectCommand=cmd;
						DataTable^ td= gcnew DataTable();
						adp->Fill(td);
						ListViewItem^ list;

						int lastColumn=td->Columns->Count;

						day5=td->Columns[lastColumn-1]->ColumnName;
						day4=td->Columns[lastColumn-2]->ColumnName;
						day3=td->Columns[lastColumn-3]->ColumnName;
						day2=td->Columns[lastColumn-4]->ColumnName;
						day1=td->Columns[lastColumn-5]->ColumnName;



						listView1->Columns->Add(day1);
						listView1->Columns->Add(day2);
						listView1->Columns->Add(day3);
						listView1->Columns->Add(day4);
						listView1->Columns->Add(day5);

						
						for(int i=0;i<td->Rows->Count;i++)
						{
							list= gcnew ListViewItem(td->Rows[i][0]->ToString());
							list->SubItems->Add(td->Rows[i][1]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-5]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-4]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-3]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-2]->ToString());
							list->SubItems->Add(td->Rows[i][lastColumn-1]->ToString());
							listView1->Items->Add(list);

						}
						
							
							adp->Update(td);
					 }
					 catch(Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }

			}
	OleDbConnection^ conDataBase;
	String^ con;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Cal^ cal = gcnew Cal();
				 cal->ShowDialog();
			 }

			 
			 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
		 }
};
}

