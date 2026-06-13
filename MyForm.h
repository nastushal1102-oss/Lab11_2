#pragma once

namespace Lab112 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		value struct Student {
			String^ PIP;
			String^ course;
			String^ group;
			String^ residence;
		};

		// Список для збереження введених студентів у пам'яті
		System::Collections::Generic::List<Student>^ studentList = gcnew System::Collections::Generic::List<Student>();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ПІП;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Курс;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Група;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Місцепроживання;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ПІБ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ПІП = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Курс = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Група = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Місцепроживання = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ПІБ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПІП";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Курс";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Група";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Місце проживання";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(176, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 51);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Додати студента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ПІП, this->Курс,
					this->Група, this->Місцепроживання
			});
			this->dataGridView1->Location = System::Drawing::Point(365, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(580, 178);
			this->dataGridView1->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ПІБ, this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView2->Location = System::Drawing::Point(365, 326);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(580, 221);
			this->dataGridView2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(387, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Дані про студента";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(388, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Місце проживаня";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(667, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 31);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Виконати запит";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ПІП
			// 
			this->ПІП->HeaderText = L"ПІП";
			this->ПІП->MinimumWidth = 6;
			this->ПІП->Name = L"ПІП";
			this->ПІП->Width = 125;
			// 
			// Курс
			// 
			this->Курс->HeaderText = L"Курс";
			this->Курс->MinimumWidth = 6;
			this->Курс->Name = L"Курс";
			this->Курс->Width = 125;
			// 
			// Група
			// 
			this->Група->HeaderText = L"Група";
			this->Група->MinimumWidth = 6;
			this->Група->Name = L"Група";
			this->Група->Width = 125;
			// 
			// Місцепроживання
			// 
			this->Місцепроживання->HeaderText = L"Місце проживання";
			this->Місцепроживання->MinimumWidth = 6;
			this->Місцепроживання->Name = L"Місцепроживання";
			this->Місцепроживання->Width = 125;
			// 
			// ПІБ
			// 
			this->ПІБ->HeaderText = L"ПІП";
			this->ПІБ->MinimumWidth = 6;
			this->ПІБ->Name = L"ПІБ";
			this->ПІБ->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Курс";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Група";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Місце проживання";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 598);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		MessageBox::Show("Будь ласка, введіть хоча б ПІП студента!", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Заповнюємо дані нового студента
	Student s;
	s.PIP = textBox1->Text;
	s.course = textBox2->Text;
	s.group = textBox3->Text;
	s.residence = textBox4->Text;

	// Зберігаємо в пам'ять
	studentList->Add(s);

	// Відображаємо у верхній таблиці
	dataGridView1->Rows->Add(s.PIP, s.course, s.group, s.residence);

	// Очищаємо поля для наступного вводу
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();

	bool found = false;

	// Перебираємо всіх збережених студентів
	for each (Student s in studentList) {
		// Якщо в місці проживання є слово "квартир" (незалежно від регістру)
		if (s.residence->ToLower()->Contains("квартир")) {
			// Виводимо цього студента в нижню таблицю
			dataGridView2->Rows->Add(s.PIP, s.course, s.group, s.residence);
			found = true;
		}
	}

	// Повідомлення, якщо таких немає
	if (!found) {
		MessageBox::Show("Студентів, які проживають на квартирі, не знайдено.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
