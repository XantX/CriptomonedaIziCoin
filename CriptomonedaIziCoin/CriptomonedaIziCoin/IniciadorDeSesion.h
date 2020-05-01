#pragma once

Usuario ConectarConRed( string contraseña, RedUsuarios red) {
	for (int i = 0; i < red.ArrUsers().size();++i) {
		if (SHA256::cifrar(contraseña)==red.ArrUsers()[i].getBilletera()->HashCode) {
			return red.ArrUsers()[i];
		}
	}
}
