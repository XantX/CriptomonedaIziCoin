#pragma once

Usuario ConectarConRed( string contraseņa, RedUsuarios red) {
	for (int i = 0; i < red.ArrUsers().size();++i) {
		if (SHA256::cifrar(contraseņa)==red.ArrUsers()[i].getBilletera()->HashCode) {
			return red.ArrUsers()[i];
		}
	}
}
