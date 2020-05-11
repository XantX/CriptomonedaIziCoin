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
		Usuario *nuevo;
		RedUsuarios* objRed;
		RSA* objRSA;
		
		String^ Corre = gcnew String(" ");
	private: System::Windows::Forms::TextBox^  TexboxHash;
	private: System::Windows::Forms::ColumnHeader^  Cantidad;

	private: System::Windows::Forms::ColumnHeader^  Destino;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  RecidividoDe;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;




	public:
		String^ Contra = gcnew String(" ");
		PerfilUsuario(void)
		{
			InitializeComponent();
			objRed = new RedUsuarios();
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
	private: System::Windows::Forms::Button^  BotonDeCopiado;



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
			this->BotonTranferir = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Cantidad = (gcnew System::Windows::Forms::ColumnHeader());
			this->Destino = (gcnew System::Windows::Forms::ColumnHeader());
			this->Transaccion_titulo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LabalCantIziCoins = (gcnew System::Windows::Forms::Label());
			this->labelCoinDolar = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->BotonDeCopiado = (gcnew System::Windows::Forms::Button());
			this->TexboxHash = (gcnew System::Windows::Forms::TextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->RecidividoDe = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// BotonTranferir
			// 
			this->BotonTranferir->Location = System::Drawing::Point(12, 208);
			this->BotonTranferir->Name = L"BotonTranferir";
			this->BotonTranferir->Size = System::Drawing::Size(137, 23);
			this->BotonTranferir->TabIndex = 0;
			this->BotonTranferir->Text = L"Tranferir";
			this->BotonTranferir->UseVisualStyleBackColor = true;
			this->BotonTranferir->Click += gcnew System::EventHandler(this, &PerfilUsuario::button1_Click);
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
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Cantidad, this->Destino });
			this->listView1->Location = System::Drawing::Point(185, 247);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(567, 132);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Cantidad
			// 
			this->Cantidad->Text = L"Cantidad";
			this->Cantidad->Width = 71;
			// 
			// Destino
			// 
			this->Destino->Text = L"Destino";
			this->Destino->Width = 253;
			// 
			// Transaccion_titulo
			// 
			this->Transaccion_titulo->AutoSize = true;
			this->Transaccion_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Transaccion_titulo->Location = System::Drawing::Point(181, 208);
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
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 560);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(382, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PerfilUsuario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 526);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Cerra Sesion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PerfilUsuario::button3_Click);
			// 
			// BotonDeCopiado
			// 
			this->BotonDeCopiado->Location = System::Drawing::Point(204, 97);
			this->BotonDeCopiado->Name = L"BotonDeCopiado";
			this->BotonDeCopiado->Size = System::Drawing::Size(75, 23);
			this->BotonDeCopiado->TabIndex = 15;
			this->BotonDeCopiado->Text = L"Copiar";
			this->BotonDeCopiado->UseVisualStyleBackColor = true;
			this->BotonDeCopiado->Click += gcnew System::EventHandler(this, &PerfilUsuario::button4_Click);
			// 
			// TexboxHash
			// 
			this->TexboxHash->Location = System::Drawing::Point(185, 61);
			this->TexboxHash->Name = L"TexboxHash";
			this->TexboxHash->Size = System::Drawing::Size(382, 20);
			this->TexboxHash->TabIndex = 16;
			this->TexboxHash->Text = L"CodigoHash";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->RecidividoDe });
			this->listView2->Location = System::Drawing::Point(185, 422);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(567, 127);
			this->listView2->TabIndex = 21;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &PerfilUsuario::listView2_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Cantidad";
			this->columnHeader1->Width = 71;
			// 
			// RecidividoDe
			// 
			this->RecidividoDe->Text = L"Recibido de";
			this->RecidividoDe->Width = 489;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(182, 392);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Historial de Transaciones recibidas";
			this->label1->Click += gcnew System::EventHandler(this, &PerfilUsuario::label1_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(146, 151);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// PerfilUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 561);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BotonTranferir);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->TexboxHash);
			this->Controls->Add(this->BotonDeCopiado);
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
			this->Name = L"PerfilUsuario";
			this->Text = L"PerfilUsuario";
			this->Load += gcnew System::EventHandler(this, &PerfilUsuario::PerfilUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PerfilUsuario_Load(System::Object^  sender, System::EventArgs^  e) {
		string correo;
		string Contraseña;
		
		bool validar = false;
		//Convierte Los String^ en string para usarlos en clases
		MarshalString(Corre, correo);
		MarshalString(Contra, Contraseña);
		// Busca al usuario ingresado en la red de usuarios
		nuevo = ConectarConRed(correo, Contraseña, NuevaRed);

		if (nuevo->getIngreso()) {
			nuevo->getBilletera()->setIzicoins(10);
			nuevo->setIngreso();
		}
		String^ Hash = gcnew String(nuevo->getBilletera()->HashCode.c_str());
		//muestra el hash de la billetera del usuario logeado
		TexboxHash->Text = Hash;//hash para que se le transfieran monedas
		//obtiene las monedas de la billetera de usuario
		String^ IziCoins = gcnew String(nuevo->getBilletera()->getIzicoins().ToString());
		LabalCantIziCoins->Text = IziCoins;
		//Convierte las monedas a dolares 
		double coinzDolar = nuevo->getBilletera()->getIzicoins() * 3.10;
		
		String^ IziDolar = gcnew String(coinzDolar.ToString());
		labelCoinDolar->Text = IziDolar;

		//!GENERANDO CLAVE PRIVADA Y PUBLICA
		if (nuevo->getBilletera()->getCpublicN() == 0) {
			do {
				validar = objRSA->generar(nuevo);
			}while(validar == false);
		}
		else {
			//No generar de nuevo
		}
		
		button2_Click(sender, e);
		

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		TranferenciasPanel^Pnle = gcnew TranferenciasPanel;
		Pnle->billetera = nuevo->getBilletera();
		Pnle->Show();

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
	TexboxHash->SelectAll();
	TexboxHash->Copy();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	listView1->Items->Clear();
	listView2->Items->Clear();
	String^ IziCoins = gcnew String(nuevo->getBilletera()->getIzicoins().ToString());
	LabalCantIziCoins->Text = IziCoins;
	double coinzDolar = nuevo->getBilletera()->getIzicoins() * 3.10;
	String^ IziDolar = gcnew String(coinzDolar.ToString());
	labelCoinDolar->Text = IziDolar;
	if (nuevo->getBilletera()->arrayTransacRealizadas.size() != 0) {
		for (long i = 0; i < nuevo->getBilletera()->arrayTransacRealizadas.size(); ++i) {
			ListViewItem ^lv1 = gcnew ListViewItem(nuevo->getBilletera()->arrayTransacRealizadas[i]->getIzicoins().ToString());
			String^hashdestin = gcnew String(nuevo->getBilletera()->arrayTransacRealizadas[i]->gethashDestino().c_str());
			lv1->SubItems->Add(hashdestin);//destino
			listView1->Items->Add(lv1);
		}
	}
	else { MessageBox::Show("No tiene histotial de transaciones realizadas"); }
	if (nuevo->getBilletera()->arrayTransacRecibidas.size() != 0) {
		for (long i = 0; i < nuevo->getBilletera()->arrayTransacRecibidas.size(); ++i) {
			ListViewItem ^lv2 = gcnew ListViewItem(nuevo->getBilletera()->arrayTransacRecibidas[i]->getIzicoins().ToString());
			String^hashRemitente = gcnew String(nuevo->getBilletera()->arrayTransacRecibidas[i]->getHashRemitente().c_str());
			lv2->SubItems->Add(hashRemitente);//remitente
			listView2->Items->Add(lv2);
		}
	}
	else { MessageBox::Show("No tiene historias de transaciones recibidas"); }
	
	
}
private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
