#pragma once

namespace CriptomonedaIziCoin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PerfilUsuario
	/// </summary>
	public ref class PerfilUsuario : public System::Windows::Forms::Form
	{
	public:
		PerfilUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PerfilUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  CantIziCoins;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Label^  Transaccion_titulo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  CantDolares;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PerfilUsuario::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CantIziCoins = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Transaccion_titulo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CantDolares = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tranferir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PerfilUsuario::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &PerfilUsuario::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(167, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 117);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"IziCoins:";
			this->label2->Click += gcnew System::EventHandler(this, &PerfilUsuario::label2_Click);
			// 
			// CantIziCoins
			// 
			this->CantIziCoins->AutoSize = true;
			this->CantIziCoins->Location = System::Drawing::Point(237, 197);
			this->CantIziCoins->Name = L"CantIziCoins";
			this->CantIziCoins->Size = System::Drawing::Size(65, 13);
			this->CantIziCoins->TabIndex = 4;
			this->CantIziCoins->Text = L"CantIziCoins";
			this->CantIziCoins->Click += gcnew System::EventHandler(this, &PerfilUsuario::label3_Click);
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(46, 279);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(367, 162);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// Transaccion_titulo
			// 
			this->Transaccion_titulo->AutoSize = true;
			this->Transaccion_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Transaccion_titulo->Location = System::Drawing::Point(42, 245);
			this->Transaccion_titulo->Name = L"Transaccion_titulo";
			this->Transaccion_titulo->Size = System::Drawing::Size(195, 20);
			this->Transaccion_titulo->TabIndex = 6;
			this->Transaccion_titulo->Text = L"Historial de Transacciones";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(131, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Dolares:";
			this->label3->Click += gcnew System::EventHandler(this, &PerfilUsuario::label3_Click_1);
			// 
			// CantDolares
			// 
			this->CantDolares->AutoSize = true;
			this->CantDolares->Location = System::Drawing::Point(237, 221);
			this->CantDolares->Name = L"CantDolares";
			this->CantDolares->Size = System::Drawing::Size(65, 13);
			this->CantDolares->TabIndex = 8;
			this->CantDolares->Text = L"CantDolares";
			// 
			// PerfilUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 493);
			this->Controls->Add(this->CantDolares);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Transaccion_titulo);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->CantIziCoins);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"PerfilUsuario";
			this->Text = L"PerfilUsuario";
			this->Load += gcnew System::EventHandler(this, &PerfilUsuario::PerfilUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PerfilUsuario_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
