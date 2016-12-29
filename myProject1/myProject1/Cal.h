#pragma once

namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cal
	/// </summary>
	public ref class Cal : public System::Windows::Forms::Form
	{
	public:
		Cal(void)
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
		~Cal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button1;
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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(5, 6);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Cal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(237, 213);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"Cal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Select date";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
