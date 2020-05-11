#pragma once
#include "Conector.h"
#include "RSA.h"
#include "Block.h"
#include "BlockChain.h"
#include <time.h>
#include "DarleMonedasAlminero.h"
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
	/// Resumen de TranferenciasPanel
	/// </summary>
	public ref class TranferenciasPanel : public System::Windows::Forms::Form
	{
	public:
		Wallet*billetera;
		CadenaDeBloques*BlockChain = new CadenaDeBloques();
		
		TranferenciasPanel(void)
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
		~TranferenciasPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Titulo;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  MibilleteraTitulo;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  IziCoinstitulo;
	private: System::Windows::Forms::Label^  Dolarestitulo;
	private: System::Windows::Forms::TextBox^  textBoxCOins;

	private: System::Windows::Forms::TextBox^  TexDolare;

	private: System::Windows::Forms::TextBox^  TexboxHashReceptor;

	private: System::Windows::Forms::Button^  CancelarButton;
	private: System::Windows::Forms::Button^  TranferirButton;


	private: System::Windows::Forms::Label^  TextoDetranferir;
	private: System::Windows::Forms::Label^  IzicoinsEnBilletera;
	private: System::Windows::Forms::Button^  BotonPegar;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TranferenciasPanel::typeid));
			this->Titulo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MibilleteraTitulo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IziCoinstitulo = (gcnew System::Windows::Forms::Label());
			this->Dolarestitulo = (gcnew System::Windows::Forms::Label());
			this->textBoxCOins = (gcnew System::Windows::Forms::TextBox());
			this->TexDolare = (gcnew System::Windows::Forms::TextBox());
			this->TexboxHashReceptor = (gcnew System::Windows::Forms::TextBox());
			this->CancelarButton = (gcnew System::Windows::Forms::Button());
			this->TranferirButton = (gcnew System::Windows::Forms::Button());
			this->TextoDetranferir = (gcnew System::Windows::Forms::Label());
			this->IzicoinsEnBilletera = (gcnew System::Windows::Forms::Label());
			this->BotonPegar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Titulo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MibilleteraTitulo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Titulo
			// 
			this->Titulo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Titulo.Image")));
			this->Titulo->Location = System::Drawing::Point(12, 36);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(275, 40);
			this->Titulo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Titulo->TabIndex = 0;
			this->Titulo->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(247, 210);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MibilleteraTitulo
			// 
			this->MibilleteraTitulo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MibilleteraTitulo.Image")));
			this->MibilleteraTitulo->Location = System::Drawing::Point(12, 128);
			this->MibilleteraTitulo->Name = L"MibilleteraTitulo";
			this->MibilleteraTitulo->Size = System::Drawing::Size(173, 48);
			this->MibilleteraTitulo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->MibilleteraTitulo->TabIndex = 2;
			this->MibilleteraTitulo->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 308);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(147, 43);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(9, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(536, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"*Este proceso es realizado bajo los terminos y condiciones acordados previamente*"
				L"\r\n";
			// 
			// IziCoinstitulo
			// 
			this->IziCoinstitulo->AutoSize = true;
			this->IziCoinstitulo->Location = System::Drawing::Point(67, 210);
			this->IziCoinstitulo->Name = L"IziCoinstitulo";
			this->IziCoinstitulo->Size = System::Drawing::Size(53, 13);
			this->IziCoinstitulo->TabIndex = 5;
			this->IziCoinstitulo->Text = L"IZICOINS";
			// 
			// Dolarestitulo
			// 
			this->Dolarestitulo->AutoSize = true;
			this->Dolarestitulo->Location = System::Drawing::Point(412, 210);
			this->Dolarestitulo->Name = L"Dolarestitulo";
			this->Dolarestitulo->Size = System::Drawing::Size(58, 13);
			this->Dolarestitulo->TabIndex = 6;
			this->Dolarestitulo->Text = L"DOLARES";
			// 
			// textBoxCOins
			// 
			this->textBoxCOins->Location = System::Drawing::Point(40, 239);
			this->textBoxCOins->Name = L"textBoxCOins";
			this->textBoxCOins->Size = System::Drawing::Size(130, 20);
			this->textBoxCOins->TabIndex = 7;
			// 
			// TexDolare
			// 
			this->TexDolare->Location = System::Drawing::Point(387, 239);
			this->TexDolare->Name = L"TexDolare";
			this->TexDolare->Size = System::Drawing::Size(113, 20);
			this->TexDolare->TabIndex = 8;
			// 
			// TexboxHashReceptor
			// 
			this->TexboxHashReceptor->Location = System::Drawing::Point(59, 387);
			this->TexboxHashReceptor->Name = L"TexboxHashReceptor";
			this->TexboxHashReceptor->Size = System::Drawing::Size(441, 20);
			this->TexboxHashReceptor->TabIndex = 9;
			// 
			// CancelarButton
			// 
			this->CancelarButton->Location = System::Drawing::Point(70, 577);
			this->CancelarButton->Name = L"CancelarButton";
			this->CancelarButton->Size = System::Drawing::Size(75, 23);
			this->CancelarButton->TabIndex = 10;
			this->CancelarButton->Text = L"Cancelar";
			this->CancelarButton->UseVisualStyleBackColor = true;
			this->CancelarButton->Click += gcnew System::EventHandler(this, &TranferenciasPanel::CancelarButton_Click);
			// 
			// TranferirButton
			// 
			this->TranferirButton->Location = System::Drawing::Point(415, 577);
			this->TranferirButton->Name = L"TranferirButton";
			this->TranferirButton->Size = System::Drawing::Size(75, 23);
			this->TranferirButton->TabIndex = 11;
			this->TranferirButton->Text = L"Tranferir";
			this->TranferirButton->UseVisualStyleBackColor = true;
			this->TranferirButton->Click += gcnew System::EventHandler(this, &TranferenciasPanel::TranferirButton_Click);
			// 
			// TextoDetranferir
			// 
			this->TextoDetranferir->AutoSize = true;
			this->TextoDetranferir->Location = System::Drawing::Point(56, 509);
			this->TextoDetranferir->Name = L"TextoDetranferir";
			this->TextoDetranferir->Size = System::Drawing::Size(361, 13);
			this->TextoDetranferir->TabIndex = 12;
			this->TextoDetranferir->Text = L"-Para inciar el proceso de transferencia, seleccione el boton de \"Transferir\"";
			// 
			// IzicoinsEnBilletera
			// 
			this->IzicoinsEnBilletera->AutoSize = true;
			this->IzicoinsEnBilletera->Location = System::Drawing::Point(247, 142);
			this->IzicoinsEnBilletera->Name = L"IzicoinsEnBilletera";
			this->IzicoinsEnBilletera->Size = System::Drawing::Size(35, 13);
			this->IzicoinsEnBilletera->TabIndex = 13;
			this->IzicoinsEnBilletera->Text = L"label2";
			// 
			// BotonPegar
			// 
			this->BotonPegar->Location = System::Drawing::Point(394, 430);
			this->BotonPegar->Name = L"BotonPegar";
			this->BotonPegar->Size = System::Drawing::Size(75, 23);
			this->BotonPegar->TabIndex = 14;
			this->BotonPegar->Text = L"Pegar";
			this->BotonPegar->UseVisualStyleBackColor = true;
			this->BotonPegar->Click += gcnew System::EventHandler(this, &TranferenciasPanel::BotonPegar_Click);
			// 
			// TranferenciasPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(550, 640);
			this->Controls->Add(this->BotonPegar);
			this->Controls->Add(this->IzicoinsEnBilletera);
			this->Controls->Add(this->TextoDetranferir);
			this->Controls->Add(this->TranferirButton);
			this->Controls->Add(this->CancelarButton);
			this->Controls->Add(this->TexboxHashReceptor);
			this->Controls->Add(this->TexDolare);
			this->Controls->Add(this->textBoxCOins);
			this->Controls->Add(this->Dolarestitulo);
			this->Controls->Add(this->IziCoinstitulo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->MibilleteraTitulo);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Titulo);
			this->Name = L"TranferenciasPanel";
			this->Text = L"TranferenciasPanel";
			this->Load += gcnew System::EventHandler(this, &TranferenciasPanel::TranferenciasPanel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Titulo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MibilleteraTitulo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void BotonPegar_Click(System::Object^  sender, System::EventArgs^  e) {
	TexboxHashReceptor->Paste();
}
private: System::Void TranferirButton_Click(System::Object^  sender, System::EventArgs^  e) {
	string hashDestino;
	string iziCoins;
	MarshalString(textBoxCOins->Text, iziCoins);
	MarshalString(TexboxHashReceptor->Text, hashDestino);

	if (textBoxCOins->Text == "" || TexboxHashReceptor->Text == "") {
		MessageBox::Show("No ingreso los datos necesario");
	}/*buscar el hash*/
	else if(stod(iziCoins) == 0){
		MessageBox::Show("Tiene que elegir algun monto para enviar");
		textBoxCOins->Clear();
	}else if (hashDestino == billetera->HashCode) {
		MessageBox::Show("No es un codigo de receptor valido");
		TexboxHashReceptor->Clear();
	}
	else if(stod(iziCoins) > billetera->getIzicoins()){
		MessageBox::Show("La cantidad de coins es mayor a su saldo actual");
		textBoxCOins->Clear();
	}else if (HashEnRed(NuevaRed, hashDestino)) {
		//aqui comienza la transacciones
		MessageBox::Show("Se puede transferir");
		double coins = stod(iziCoins);
		billetera->setIzicoins(-coins);
		billetera->GenerarTran(coins, hashDestino);
		BlockChain->agregarBloque(billetera->getTransac());
		NuevaRed.Tranferir(billetera->getTransac());
		
		IzicoinsEnBilletera->Text = billetera->getIzicoins().ToString();
		if (Congruencia_LinealRomper(billetera->getCpublicE(), billetera->getCpublicN()) == billetera->getCprivadaD()) {
			MessageBox::Show("Se confirma la transacion");

			monedas(NuevaRed, hashDestino, billetera->HashCode);
			MessageBox::Show("se entregaron las monedas al minero");
		}
		textBoxCOins->Clear();
		TexboxHashReceptor->Clear();

	}
	else {
		MessageBox::Show("El hash del receptor no se encuentra en nuestra red");
		TexboxHashReceptor->Clear();
	}
	
}
private: System::Void TranferenciasPanel_Load(System::Object^  sender, System::EventArgs^  e) {
	IzicoinsEnBilletera->Text = billetera->getIzicoins().ToString();
}
private: System::Void CancelarButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
