class Conector {
private:
public:
	Conector();
	void ConectarRedToUser(RedUsuarios red, Usuario User);

};
void Conector::ConectarRedToUser(RedUsuarios Red, Usuario User) {
	Red.Tranferir(User.getBilletera()->getTransac());
}