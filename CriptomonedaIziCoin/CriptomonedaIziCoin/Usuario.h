#pragma once
#include <fstream>
#include "Wallet.h"
class Usuario {
private:
	string Correo;
	string Contraseña;
	Wallet *wallet;
public:
	Usuario(string Correo, string Contraseña) {
		wallet = new Wallet(Correo, Contraseña);
		this->Correo = Correo;
		this->Contraseña = Contraseña;
		
	}
	~Usuario();
	string getContraseña() { return Contraseña;}
	string getCorreo() { return Correo; }
	Wallet* getBilletera() { return wallet; }
};