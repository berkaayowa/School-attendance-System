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
	/// Summary for Delete
	/// </summary>
	public ref class Delete : public System::Windows::Forms::Form
	{
	private: static OleDbConnection ^ connect = gcnew OleDbConnection();
	public:
		Delete(void)
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
		~Delete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;













	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnCancel;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		OleDbCommand ^command;
		OleDbDataReader ^reader;
		String ^deleteSql;
		String ^select;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Delete::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(611, 111);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Delete::pictureBox1_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnDelete.BackgroundImage")));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelete->Location = System::Drawing::Point(98, 452);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(100, 76);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Delete::btnDelete_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnCancel.BackgroundImage")));
			this->btnCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancel->Location = System::Drawing::Point(391, 452);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 79);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Delete::btnCancel_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 129);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(587, 317);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"STUDENT NUMBER";
			this->columnHeader1->Width = 148;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"FIRST_NAME";
			this->columnHeader2->Width = 124;
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
			// Delete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(611, 541);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Delete";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete";
			this->Load += gcnew System::EventHandler(this, &Delete::Delete_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void ExitForm()
			 {
				 if(MessageBox::Show("You are about to exit the Application. Exit Now?",
				 "CLOSE PROGRAMME", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 this->Close();
			  }
			 }

		void LoadComboBox()
		{
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
					 item->SubItems->Add(reader["ATD_STATUS"]->ToString());
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

		void deleteRecord()
		{
			if(listView1->SelectedItems->Count >0)
			{
				try
			{
			deleteSql = "delete from attendance where STD_NUMBER='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'";
		    connect->Open();
			command->Connection = connect;
			command->CommandText = deleteSql;
			reader = command->ExecuteReader();
			MessageBox::Show("delete student data successfully","deletion",MessageBoxButtons::OK,MessageBoxIcon::Information);
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
				MessageBox::Show("Select an item in the listview to delete.","deletion",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			
		}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 ExitForm();
			 }
private: System::Void Delete_Load(System::Object^  sender, System::EventArgs^  e) {

			 LoadComboBox();
		 }
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {

			 deleteRecord();
		 }
};
}
