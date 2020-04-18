#ifndef REDUSUARIOS_H_
#define REDUSUARIOS_H_

class RedUsuarios{
	private:
		vector<Usuario>arrUsers;
	public:
		RedUsuarios();
		~RedUsuarios();
		void addUser(Usuario user);

};
#endif