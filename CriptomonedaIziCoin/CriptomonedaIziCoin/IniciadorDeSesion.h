#pragma once

Usuario ConectarConRed( string contrase�a, RedUsuarios red) {
	for (int i = 0; i < red.ArrUsers().size();++i) {
		if (SHA256::cifrar(contrase�a)==red.ArrUsers()[i].getBilletera()->HashCode) {
			return red.ArrUsers()[i];
		}
	}
}
