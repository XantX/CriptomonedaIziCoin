#pragma once
class Transaccion {
	private:
		string hashCodeDestino;
		double iziCions;
	public:
		Transaccion(double izicoins, string hashCode);
		~Transaccion();
		string gethash() {return hashCodeDestino;}
		double getIzicoins() { return iziCions; }
};