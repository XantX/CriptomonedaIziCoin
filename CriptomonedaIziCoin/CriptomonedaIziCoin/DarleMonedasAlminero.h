#pragma once
void monedas(RedUsuarios &red, string hashDestino, string hashEnvio) {
	srand(time(NULL));

	int num = rand() % red.ArrUsers().size();
	while (true)
	{
		if (red.ArrUsers()[num]->getBilletera()->HashCode == hashDestino || red.ArrUsers()[num]->getBilletera()->HashCode == hashEnvio) {
			num = rand() % red.ArrUsers().size();
		}
		else {
			break;
		}
	}

	red.ArrUsers()[num]->getBilletera()->setIzicoins(2);
	
}