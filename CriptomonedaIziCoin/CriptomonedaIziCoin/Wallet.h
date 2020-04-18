
#include "Transaccion.h"
//#include "Block.h"
class Wallet {
	private:
		double IziCoins;
	public:
		string HashCode;

		Wallet(string correo, string contraseña) {
			IziCoins = 0;
			HashCode = SHA256::cifrar(correo + contraseña);
			
		}
		~Wallet();

		void setIzicoins(double Coins) {
			IziCoins = IziCoins + Coins;
		}
		void GenerarTran(double IziCoins, string destino);

		void ReciveUnaTransaccion(Transaccion &Recivido);
		

};
void Wallet::GenerarTran(double Izicoins, string destino){
	//Transaccion tran(Izicoins, destino);
}

void Wallet::ReciveUnaTransaccion(Transaccion &Recivido) {
	setIzicoins(Recivido.getIzicoins());
}
