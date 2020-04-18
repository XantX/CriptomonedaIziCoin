
#include <fstream>
class Block {
	private:
		ofstream Bloque;
	public:
		Block();
		void crearBloque(Transaccion *trn, string Bloqueanterior, string nombreBlock);

};

void Block::crearBloque(Transaccion *trn, string Blockanterior, string nombreBlock) {
	Bloque.open(nombreBlock, ios::out);
	if (Bloque.fail()) {
		//Mensaje de error
	}
	else {
		Bloque << "Bloque anterior:" << Blockanterior<<endl;
		Bloque <<"Destino,"<<trn->gethashDestino()<<endl;
		Bloque << "Remitente," << trn->getHashRemitente()<<endl;
		Bloque << "Cantidad," << trn->getIzicoins()<<endl;
	}
	Bloque.close();

}