
class Transaccion {
	private:
		string hashCodeDestino;
		string hashCodeRemitente;
		double iziCions;
	public:
		Transaccion(double izicoins, string hashCode, string hashCodeRemitente) {
			this->iziCions = iziCions;
			this->hashCodeDestino = hashCode;
			this->hashCodeRemitente = hashCodeRemitente;
		}
		string gethash() {return hashCodeDestino;}
		double getIzicoins() { return iziCions; }
		string getHashRemitente() { return hashCodeRemitente; }
};