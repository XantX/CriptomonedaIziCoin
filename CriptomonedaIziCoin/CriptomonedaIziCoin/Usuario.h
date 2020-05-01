
#include "Wallet.h"
class Usuario {
private:
	
	string Correo;
	string Contrase�a;
	Wallet *wallet;
public:
	
	Usuario(string Correo, string Contrase�a) {
		wallet = new Wallet( Contrase�a);
		this->Correo = Correo;
		this->Contrase�a = Contrase�a;
	}
	Usuario() {
	}
	string getContrase�a() { return Contrase�a;}
	string getCorreo() { return Correo; }
	Wallet* getBilletera() { return wallet; }
};