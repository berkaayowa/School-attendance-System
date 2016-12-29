#pragma once

namespace myProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for staticForm
	/// </summary>
	public ref class staticForm : public System::Windows::Forms::Form
	{
	public:
		staticForm(void)
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
		~staticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(364, 239);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &staticForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &staticForm::button1_Click_1);
			// 
			// staticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(273, 284);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"staticForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"staticForm";
			this->Load += gcnew System::EventHandler(this, &staticForm::staticForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


				
			 }
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void staticForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 if(title=="Latest Week Statistic")
				 {
					load(value,stdNum);
					this->Text=title;
				 }
				 //else if(title=="Up to Now")
				 //{
				 //}
				 this->Text=title;
				 
			 }
	public :
			 String^ stdNum,^title;
			 int max,week1,week2,week3,week4,week5;
			 int value;
			 void load(int val,String^ stnum)
			 {
				 this->chart1->Series["Series1"]->Points->AddXY(stdNum,val);
				 this->chart1->Series["Series1"]->Points->AddXY("Max",max);
			 }
			 void loads(int g1,int g2,int g3, int g4)
			 {
				 this->chart1->Series["Series1"]->Points->AddXY("2A",g1);
				 this->chart1->Series["Series1"]->Points->AddXY("2B",g2);
				 this->chart1->Series["Series1"]->Points->AddXY("2C",g3);
				 this->chart1->Series["Series1"]->Points->AddXY("2D",g4);
				 this->chart1->Series["Series1"]->Points->AddXY("Max",100);
			 }
			 void loads(double std,String ^ stdNum)
			 {
				 this->chart1->Series["Series1"]->Points->AddXY(stdNum,std);
				 
				 this->chart1->Series["Series1"]->Points->AddXY("Max",100);
			 }


private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}


