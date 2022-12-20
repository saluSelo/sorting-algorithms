#pragma once

namespace Project3 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button7;
		   int* n;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 18);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 256);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(396, 18);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 449);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Bubble Algo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 58);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insertion Algo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(735, 18);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(374, 449);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(197, 292);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"array before sorting";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(501, 470);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"array after sorting";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(887, 470);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"swapping steps";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 57);
			this->button3->TabIndex = 8;
			this->button3->Text = L"sele algo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(31, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 60);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Merg algo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(31, 357);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 60);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Quick algo";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(200, 346);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 60);
			this->button6->TabIndex = 11;
			this->button6->Text = L"binary search";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(501, 499);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"key for search";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(887, 499);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"found or not for search";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(200, 426);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 60);
			this->button7->TabIndex = 14;
			this->button7->Text = L"seq search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->ClientSize = System::Drawing::Size(1121, 524);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int Binary_Search_algo(int a[], int n, int k)
		{
			int l = -1;
			int r = n;
			while (l + 1 != r)
			{
				int i = (l + r) / 2;
				if (k < a[i])
					r = i;
				if (k < a[i])
					r = i;
				if (k == a[i])
					return i;
				if (k > a[i])
					l = i;

			}
			return  n;
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void swapp(int ar[], int i, int j)
		{ int temp;
		temp = ar[i];
		ar[i] = ar[j]
			; ar[j] = temp; 
		}
		////////////////////////////////////////////////////////
		void selesort(int ar[], int n) {
			textBox3->Text = "";
			for (int i = 0; i < n - 1; i++) {
				int lowindex = i;
				for (int j = n - 1; j > i; j--)
					if (ar[j] < ar[lowindex]) {
						swapp(ar, j, lowindex);

						for (int i = 0; i < n; i++)
							textBox3->Text = textBox3->Text + Convert::ToInt32(ar[i]) + ",";
						textBox3->Text = textBox3->Text + "\r\n";

					}
			}
		}


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void bubbleSort(int ar[], int n)
		{
			textBox3->Text ="";
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = n - 1; j > i; j--)
					if (ar[j] < ar[j - 1]) {
						swapp(ar, j, j - 1);

						for (int i = 0; i < n; i++)
							textBox3->Text = textBox3->Text + Convert::ToInt32(ar[i]) + ",";
						textBox3->Text = textBox3->Text + "\r\n";
					}
			}
		}

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void insertion(int array_insertion[], int n)
		{
			textBox3->Text = "";

			for (int i = 1; i < n; i++)
			{

				for (int j = i; (j > 0) && (array_insertion[j] < array_insertion[j - 1]); j--)
					swapp(array_insertion, j, j - 1);
					for (int i = 0; i < n; i++)
				textBox3->Text = textBox3->Text + Convert::ToInt32(array_insertion[i]) + ",";
				textBox3->Text = textBox3->Text + "\r\n";
			}
		}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void merge(int data[], size_t n1, size_t n2) {
			int* temp;
			size_t c = 0;
			size_t c1 = 0;
			size_t c2 = 0;
			size_t i;
			temp = new int[n1 + n2];
			while ((c1 < n1) && (c2 < n2)) {
				if (data[c1] < (data + n1)[c2])
					temp[c++] = data[c1++];
				else
					temp[c++] = (data + n1)[c2++];
			}
			while (c1 < n1)
				temp[c++] = data[c1++];
			while (c2 < n2)
				temp[c++] = (data + n1)[c2++];
			for (i = 0; i < n1 + n2; i++)
				data[i] = temp[i];
			delete[] temp;


		}
		void mergesort(int data[], size_t n)
		{
			size_t n1;
			size_t n2;
			if (n > 1) {
				n1 = n / 2;
				n2 = n - n1;
				mergesort(data, n1);
				for (int i = 0; i < n; i++)
				{

					textBox3->Text = textBox3->Text + "  " + Convert::ToString(data[i]) + "  " + "\r";
				}
				textBox3->Text = textBox3->Text + "\n";
				mergesort((data + n1), n2);
				merge(data, n1, n2);

				for (int i = 0; i < n; i++)
				{

					textBox3->Text = textBox3->Text + "  " + Convert::ToString(data[i]) + "  " + "\r";
				}
				textBox3->Text = textBox3->Text + "\n";
			}

		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		void partition(int data[], size_t n, int& pivot_index)
		{
			int pivot = data[0];
			int too_big = 1;
			int too_small = n - 1;
			while (too_big <= too_small) {
				while (too_big < n && data[too_big] <= pivot) {
					too_big++;
				}
				while (data[too_small] > pivot) {
					too_small--;
				}
				if (too_big < too_small) {
					int temp;
					temp = data[too_big];
					data[too_big] = data[too_small];
					data[too_small] = temp;
				}
			}
			pivot_index = too_small;
			if (data[pivot_index] <= pivot)
				data[0] = data[pivot_index];
			data[pivot_index] = pivot;
		}

		void quicksort(int data[], int n)
		{
			int pivot_index;
			int n1;
			int n2;
			if (n > 1) {
				partition(data, n, pivot_index);
				n1 = pivot_index;
				n2 = n - n1 - 1;
				quicksort(data, n1);
				
				quicksort((data + pivot_index + 1), n2);

				for (int i = 0; i < n; i++)
					textBox3->Text = textBox3->Text + Convert::ToInt32(data[i]) + ",";
				textBox3->Text = textBox3->Text + "," "\r\n";
			}
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   /////////////////////////////////////////////////////////////////////////////////
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = textBox1->Lines->Length;
	int i =0;
	int* array_bubble = new int[n];
	for (i =0; i < n; i++)
		array_bubble[i] = Convert::ToInt32(textBox1->Lines[i]);	
	bubbleSort(array_bubble, n); textBox2->Text = ""; 
	for ( i =0; i < n; i++) 
		textBox2->Text = textBox2->Text + Convert::ToInt32(array_bubble[i]) + "\r\n"; }



	   /////////////////////////////////////////////////////////////////////////////////////
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int n = textBox1->Lines->Length;
	int* ar = new int[n];
	for (int i = 0; i < n; i++)
		ar[i] = Convert::ToInt32(textBox1->Lines[i]);
	insertion(ar, n); textBox2->Text = "";
	for (int i = 0; i < n; i++)
		textBox2->Text = textBox2->Text + Convert::ToInt32(ar[i]) + "\r\n"; }
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int n = textBox1->Lines->Length;
	int* ar = new int[n];
	for (int i = 0; i < n; i++)
		ar[i] = Convert::ToInt32(textBox1->Lines[i]);
	selesort(ar, n); textBox2->Text = "";
	for (int i = 0; i < n; i++)
		textBox2->Text = textBox2->Text + Convert::ToInt32(ar[i]) + "\r\n"; 


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
	textBox3->Text = "";

	int n = textBox1->Lines->Length;
	int* ar = new int[n];

	for (int i = 0; i < n; i++)
		ar[i] = System::Convert::ToInt32(textBox1->Lines[i]);
	mergesort(ar, n);
	
	
	for (int i = 0; i < n; i++)
		textBox2->Text = textBox2->Text + Convert::ToInt32(ar[i]) + "\r\n";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
	textBox3->Text = "";

	int n = textBox1->Lines->Length;
	int* ar = new int[n];

	for (int i = 0; i < n; i++)
		ar[i] = System::Convert::ToInt32(textBox1->Lines[i]);
	quicksort(ar, n);

	for (int i = 0; i < n; i++)
		textBox2->Text = textBox2->Text + Convert::ToInt32(ar[i]) + "," "\r";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {


	textBox2->Text = "";
	int input_length = textBox1->Lines->Length;
	int* arr;
	arr = new int[input_length];
	int key;
	for (int i = 0; i < input_length; i++)
	{
		arr[i] = System::Convert::ToInt32(textBox1->Lines[i]);
	}
	key = System::Convert::ToInt32(textBox3->Text);
	int length = input_length;
	
	int s = Binary_Search_algo(arr, length, key);



	textBox2->Text = textBox2->Text +"found at index" + Convert::ToString(s) + "\r";



}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	int n = textBox1->Lines->Length;

	int* a = new int[n];

	Boolean y = false;
	for (int i = 0; i < n; i++)
		a[i] = Convert::ToInt32(textBox1->Lines[i]);


	for (int i = 0; i < n; i++)
		if (a[i] == Convert::ToInt32(textBox2->Text))
		{
			textBox3->Text = "found";
			y = true;
		}
	if (y == false)
		textBox3->Text = "not found";



}
};
}
