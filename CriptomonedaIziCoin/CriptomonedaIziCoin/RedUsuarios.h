#pragma once
#include <string>
#include "Sha256.h"

class RedUsuarios {
	private:
		vector<Usuario>arrUsers;

	public:
		RedUsuarios();
		~RedUsuarios();

		void Distribuir(Transaccion tran);
		void agregarusuario(Usuario user);

};
void RedUsuarios::agregarusuario(Usuario user) {
	arrUsers.push_back(user);
}

void RedUsuarios::Distribuir(Transaccion tran) {
	for (int i = 0; i < arrUsers.size(); ++i) {
		if (arrUsers[i].getBilletera()->HashCode.compare(tran.gethash()) == 0) {
			arrUsers[i].getBilletera()->ReciveUnaTransaccion(tran);
			break;
		}
	}
}