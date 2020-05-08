
void guardar(Usuario *user) {
	ofstream UserArchivo;
	UserArchivo.open("Usuarios", ios::app);
	if (UserArchivo.fail()==0) {

	}
	else {
		UserArchivo << user->getCorreo() << endl;
		UserArchivo<< user->getContraseña()<<endl;
		UserArchivo << user->getBilletera()->getIzicoins();
		UserArchivo << user->getBilletera()->HashCode<<endl;
	}
	UserArchivo.close();
}
void GuardarUsuarios(vector<Usuario*> arr) {
	for (int i = 0; i < arr.size();++i) {
		guardar(arr[i]);
	}
}