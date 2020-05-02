#pragma once
#include"Transferir.h"
namespace CriptomonedaIziCoin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	void MarshalString(String ^ s, string & os)
	{
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	/// <summary>
	/// Resumen de PerfilUsuario
	/// </summary>
	public ref class PerfilUsuario : public System::Windows::Forms::Form
	{
	public:
		String^ Corre = gcnew String(" ");
		String^ Contra = gcnew String(" ");
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
	private: System::Windows::Forms::Button^  BotonTranferir;
	protected:

	private: System::Windows::Forms::Label^  LabelCodHash;


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Label^  Transaccion_titulo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  LabalCantIziCoins;
	private: System::Windows::Forms::Label^  labelCoinDolar;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


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
			this->BotonTranferir = (gcnew System::Windows::Forms::Button());
			this->LabelCodHash = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Transaccion_titulo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LabalCantIziCoins = (gcnew System::Windows::Forms::Label());
			this->labelCoinDolar = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BotonTranferir
			// 
			this->BotonTranferir->Location = System::Drawing::Point(541, 233);
			this->BotonTranferir->Name = L"BotonTranferir";
			this->BotonTranferir->Size = System::Drawing::Size(179, 23);
			this->BotonTranferir->TabIndex = 0;
			this->BotonTranferir->Text = L"Tranferir";
			this->BotonTranferir->UseVisualStyleBackColor = true;
			this->BotonTranferir->Click += gcnew System::EventHandler(this, &PerfilUsuario::button1_Click);
			// 
			// LabelCodHash
			// 
			this->LabelCodHash->AutoSize = true;
			this->LabelCodHash->Location = System::Drawing::Point(182, 61);
			this->LabelCodHash->Name = L"LabelCodHash";
			this->LabelCodHash->Size = System::Drawing::Size(385, 13);
			this->LabelCodHash->TabIndex = 1;
			this->LabelCodHash->Text = L"58a01e1e4103f19c6fb271465e7c280b2bb6b44e0ab43e607bd520e5b3a4a1b1";
			this->LabelCodHash->Click += gcnew System::EventHandler(this, &PerfilUsuario::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(610, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"IziCoins:";
			this->label2->Click += gcnew System::EventHandler(this, &PerfilUsuario::label2_Click);
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(185, 284);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(567, 179);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// Transaccion_titulo
			// 
			this->Transaccion_titulo->AutoSize = true;
			this->Transaccion_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Transaccion_titulo->Location = System::Drawing::Point(181, 236);
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
			this->label3->Location = System::Drawing::Point(610, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Dolares:";
			this->label3->Click += gcnew System::EventHandler(this, &PerfilUsuario::label3_Click_1);
			// 
			// LabalCantIziCoins
			// 
			this->LabalCantIziCoins->AutoSize = true;
			this->LabalCantIziCoins->Location = System::Drawing::Point(708, 34);
			this->LabalCantIziCoins->Name = L"LabalCantIziCoins";
			this->LabalCantIziCoins->Size = System::Drawing::Size(44, 13);
			this->LabalCantIziCoins->TabIndex = 9;
			this->LabalCantIziCoins->Text = L"6,00 izc";
			// 
			// labelCoinDolar
			// 
			this->labelCoinDolar->AutoSize = true;
			this->labelCoinDolar->Location = System::Drawing::Point(697, 68);
			this->labelCoinDolar->Name = L"labelCoinDolar";
			this->labelCoinDolar->Size = System::Drawing::Size(55, 13);
			this->labelCoinDolar->TabIndex = 10;
			this->labelCoinDolar->Text = L"$18,332.4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(182, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Tu Codigo:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 494);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 63);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Transacciones";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Cerra Sesion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PerfilUsuario::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(204, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Copiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PerfilUsuario::button4_Click);
			// 
			// PerfilUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 493);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelCoinDolar);
			this->Controls->Add(this->LabalCantIziCoins);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Transaccion_titulo);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LabelCodHash);
			this->Controls->Add(this->BotonTranferir);
			this->Name = L"PerfilUsuario";
			this->Text = L"PerfilUsuario";
			this->Load += gcnew System::EventHandler(this, &PerfilUsuario::PerfilUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PerfilUsuario_Load(System::Object^  sender, System::EventArgs^  e) {
		string correo;
		string Contraseña;
		MarshalString(Corre, correo);
		MarshalString(Contra, Contraseña);
		Usuario nuevo = ConectarConRed(correo, Contraseña, NuevaRed);
		String^ Hash = gcnew String(nuevo.getBilletera()->HashCode.c_str()); 
		LabelCodHash->Text = Hash;// para el Hash de el usuario
		String^ IziCoins = gcnew String(nuevo.getBilletera()->getIzicoins().ToString());
		LabalCantIziCoins->Text = IziCoins;
		double coinzDolar = nuevo.getBilletera()->getIzicoins() * 3.10;
		String^ IziDolar = gcnew String(coinzDolar.ToString());
		labelCoinDolar->Text = IziDolar;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Transferir^ FormTranferir = gcnew Transferir();
		FormTranferir->Show();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
