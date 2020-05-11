#pragma once
using namespace std;
#include <string>
#include "Sha256.h"
#include "Usuario.h"
#include "RedUsuarios.h"
#include "IniciadorDeSesion.h"
RedUsuarios NuevaRed;
#include "TranferenciasPanel.h"

#include "PerfilUsuario.h"

namespace CriptomonedaIziCoin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	//using namespace System::Threading::Tasks;
	
	/// <summary>
	/// Resumen de MyForm
	
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Usuario *Usuario1 = new Usuario("pepito", "Contrasena");
		Usuario *Usuario2 = new Usuario("Maurico", "Lupita");
		Usuario *Usuario3 = new Usuario("Lorena", "Tono");
		Usuario *Usuario4 = new Usuario("Senor", "Correr");
		Usuario *Usuario5 = new Usuario("Lupita", "hablar");
		
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(196, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(340, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar sesion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(257, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 279);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(205, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(319, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Correo electronico";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(331, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(277, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(717, 457);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Se convierten los nombre ingresados en las casillas
		String^ Core = gcnew String(textBox1->Text->ToString());
		String^ Con = gcnew String(textBox2->Text->ToString());
		string CoreIf;
		string ConIf;
		MarshalString(Core, CoreIf);
		MarshalString(Con, ConIf);
		
		//Busca en la red al ususario
		if (iniciador(CoreIf, ConIf, NuevaRed)) {//si lo encuentra lo manda al perfil
			PerfilUsuario^ perfil = gcnew PerfilUsuario;
			perfil->Corre = Core;
			perfil->Contra = Con;
			perfil->Show();
		}
		else {//si no lo encuentra muestra el error
			MessageBox::Show("No exite ese usuario");
			textBox1->Clear();
			textBox2->Clear();
		}
				
		
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//añade usuarios a la red
		NuevaRed.addUser(Usuario1);
		NuevaRed.addUser(Usuario2);
		NuevaRed.addUser(Usuario3);
		NuevaRed.addUser(Usuario4);
		NuevaRed.addUser(Usuario5);

		
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}

