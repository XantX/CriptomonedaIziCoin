
#include "Transaccion.h"
//#include "Block.h"
class Wallet {
	private:
		double IziCoins;
		Transaccion *nueva;
	public:
		string HashCode;

		Wallet(string correo, string contraseña) {
			IziCoins = 0;
			HashCode = SHA256::cifrar(correo + contraseña);
			
		}
		void setIzicoins(double Coins) {
			IziCoins = IziCoins + Coins;
		}
		void GenerarTran(double IziCoins, string destino);
		Transaccion* getTransac();
		void RecibeUnaTransaccion(Transaccion *Recivido);
};
void Wallet::GenerarTran(double Izicoins, string destino){
	nueva = new Transaccion(Izicoins, destino, HashCode);
}
Transaccion* Wallet::getTransac() { return nueva; }
void Wallet::RecibeUnaTransaccion(Transaccion *Recivido) {
	setIzicoins(Recivido->getIzicoins());
}
