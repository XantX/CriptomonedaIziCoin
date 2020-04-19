
class CadenaDeBloques {
	private:
		vector<string> bloquesList;
	public:
		CadenaDeBloques(){}
		void agregarBloque(Block bloque, Transaccion* trn);
};
void CadenaDeBloques::agregarBloque(Block bloque, Transaccion*trn) {
	string numeroBloque = to_string(bloquesList.size());
	string BloqueNombre = SHA256::cifrar(trn->getHashRemitente() + "Bloque"+ numeroBloque);
	bloquesList.push_back(BloqueNombre);
	if (bloquesList.size() == 0) {
		bloque.crearPrimerBloque(trn, BloqueNombre);
	}
	else {
		bloque.crearBloque(trn, bloquesList[bloquesList.size()-1], BloqueNombre);
	}
	
}