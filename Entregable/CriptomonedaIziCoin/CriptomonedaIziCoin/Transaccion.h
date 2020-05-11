#ifndef TRANSACCION_H
#define TRANSACCION_H
class Transaccion {
private:
	string hashCodeDestino;
	string hashCodeRemitente;
	double iziCions;
public:
	Transaccion(double izicoins, string hashCode, string hashCodeRemitente) {
		this->iziCions = izicoins;
		this->hashCodeDestino = hashCode;
		this->hashCodeRemitente = hashCodeRemitente;
	}
	string gethashDestino() { return hashCodeDestino; }
	double getIzicoins() { return iziCions; }
	string getHashRemitente() { return hashCodeRemitente; }
};
#endif // !TRANSACCION_H

