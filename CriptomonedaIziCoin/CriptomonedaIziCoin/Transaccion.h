
class Transaccion {
	private:
		string hashCodeDestino;
		double iziCions;
	public:
		Transaccion(double izicoins, string hashCode) {
			this->iziCions = iziCions;
			this->hashCodeDestino = hashCode;
		}
		string gethash() {return hashCodeDestino;}
		double getIzicoins() { return iziCions; }
};