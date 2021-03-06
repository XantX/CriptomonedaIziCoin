#pragma once

Usuario* ConectarConRed(string correo, string contraseņa, RedUsuarios red) {
	for (int i = 0; i < red.ArrUsers().size();++i) {
		if (SHA256::cifrar(correo+contraseņa)==red.ArrUsers()[i]->getBilletera()->HashCode) {
			return red.ArrUsers()[i];
		}
	}
}


bool iniciador(string correo, string contraseņa, RedUsuarios red ) {
	for (int i = 0; i < red.ArrUsers().size(); ++i) {
		if (SHA256::cifrar(correo + contraseņa) == red.ArrUsers()[i]->getBilletera()->HashCode) {
			return true;
		}
	}
	return false;
}

bool HashEnRed(RedUsuarios red, string hash) {
	for (int i = 0; i < red.ArrUsers().size();++i) {
		if (hash == red.ArrUsers()[i]->getBilletera()->HashCode) {
			return true;
		}
	}
	return false;
}