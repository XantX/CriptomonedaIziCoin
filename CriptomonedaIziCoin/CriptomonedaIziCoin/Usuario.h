#ifndef USUARIO_H
#define USUARIO_H
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
	Usuario() {
	}
	string getContraseña() { return Contraseña; }
	string getCorreo() { return Correo; }
	Wallet* getBilletera() { return wallet; }
	
	//!!!!!!!!!!!!!! Añadido !!!!!!!!!!!!!!!!!!!
	void setContraseña(string contra) { this->Contraseña = contra; }
	void setCorreo(string corr) { this->Correo = corr; }
	void setWallet(Wallet* obj) { this->wallet = obj; }
};
#endif // "USUARIO_H"
