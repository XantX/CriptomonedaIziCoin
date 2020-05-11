#pragma once
#include "Transaccion.h"

class Wallet {
	private:
		double IziCoins;
		Transaccion *nueva;
		long long CpublicN;
		long long CpublicE;
		long long CprivadaD;
		
	public:
		string HashCode;
		vector<Transaccion*> arrayTransacRealizadas;
		vector<Transaccion*> arrayTransacRecibidas;
		Wallet(string correo, string contraseña) {
			IziCoins = 0;
			HashCode = SHA256::cifrar(correo + contraseña);
			CpublicN = 0;
		}
		void setIzicoins(double Coins) {
			IziCoins = IziCoins + Coins;
		}

		void setCpublicN(long long _cpn) { this->CpublicN = _cpn; }
		
		void setCpublicE(long long _cpe) { this->CpublicE = _cpe; }

		void setCprivadaD(long long _cpd) { this->CprivadaD = _cpd; }

		double getIzicoins() { return IziCoins; }

		long long getCpublicN()  { return CpublicN;  }
		long long getCpublicE()  { return CpublicE;  }
		long long getCprivadaD() { return CprivadaD; }
		vector<Transaccion*> getRealizadas() { return arrayTransacRealizadas; }
		vector<Transaccion*> getRecividas() { return arrayTransacRecibidas; }
		void GenerarTran(double IziCoins, string destino);
		Transaccion* getTransac();
		void RecibeUnaTransaccion(Transaccion *Recivido);
		
};
void Wallet::GenerarTran(double Izicoins, string destino){
	nueva = new Transaccion(Izicoins, destino, HashCode);
	arrayTransacRealizadas.push_back(nueva);
}
Transaccion* Wallet::getTransac() { return nueva; }
void Wallet::RecibeUnaTransaccion(Transaccion *Recivido) {
	setIzicoins(Recivido->getIzicoins());
	arrayTransacRecibidas.push_back(Recivido);
}
