
class CadenaDeBloques {
	private:
		vector<string> bloquesList;
		ofstream BloqueChain;
		int LongitudArray;
	public:
		CadenaDeBloques(){
			LongitudArray = 0;
		}
		void agregarBloque( Transaccion* trn);
		void escribirBloque(string nombreBloque);

};
void CadenaDeBloques::escribirBloque(string nombreBloque) {
	BloqueChain.open("BlockChain.txt", ios::app);
	if (BloqueChain.fail()) {
		//error
	}else{ BloqueChain << nombreBloque; }
	BloqueChain.close();
}
void CadenaDeBloques::agregarBloque( Transaccion*trn) {
	Block bloque;
	string numeroBloque = to_string(LongitudArray);
	string BloqueNombre = SHA256::cifrar(trn->getHashRemitente() + "Bloque"+ numeroBloque);
	escribirBloque(BloqueNombre);
	if (LongitudArray == 0) {
		bloque.crearPrimerBloque(trn, BloqueNombre);
	}
	else {
		bloque.crearBloque(trn, bloquesList[bloquesList.size()-1], BloqueNombre);
	}
	bloquesList.push_back(BloqueNombre);
	LongitudArray = bloquesList.size();
	
}

