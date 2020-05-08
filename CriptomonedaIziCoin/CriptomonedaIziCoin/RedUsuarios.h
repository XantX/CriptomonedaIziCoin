#ifndef REDUSUARIO_H
#define REDUSUARIO_H
class RedUsuarios {
private:
	vector<Usuario*>arrUsers;
public:
	RedUsuarios() {}
	void addUser(Usuario* user);
	void Tranferir(Transaccion* tran);
	vector<Usuario*> ArrUsers() { return arrUsers; }
};

void RedUsuarios::addUser(Usuario *user) {
	arrUsers.push_back(user);
}

void RedUsuarios::Tranferir(Transaccion* tran) {

	for (int i = 0; i < arrUsers.size(); ++i) {
		if (tran->gethashDestino().compare(arrUsers[i]->getBilletera()->HashCode) == 0) {
			arrUsers[i]->getBilletera()->RecibeUnaTransaccion(tran);
		}
	}
}

#endif // !REDUSUARIO_H

