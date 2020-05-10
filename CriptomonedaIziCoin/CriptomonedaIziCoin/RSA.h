#pragma once
//#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
//#include <vector>
//#include <string>
#include <tuple>
#include "InfInt.h"
//#include "Usuario.h"

using namespace std;
using namespace System;

/*
InfInt mcd(InfInt a, InfInt b) {
	if (b != 0) return mcd(b, a % b);
	return a;
}

// ax + by = mcd(a, b)
tuple<InfInt, InfInt, InfInt> euclides(InfInt a, InfInt b) {
	if (a == 0) return make_tuple(b, 0, 1);

	InfInt mcd, x, y;
	tie(mcd, x, y) = euclides(b % a, a);

	return make_tuple(mcd, y - (b / a) * x, x); // (mcd, x, y)
}

struct RSA {
	static void generar();
	static vector<InfInt> encriptar(string, InfInt, InfInt);
	static string desencriptar(string, InfInt, InfInt);
};

inline void RSA::generar() {
	InfInt p, q, n, phi, e, d;
	// Se tiene que modificar
	cout << "Escribe p: ";
	cin >> p;

	cout << "Escribe q: ";
	cin >> q;

	n = p * q;
	phi = (p - 1) * (q - 1);

	do {
		cout << "Escribe e (menor y coprimo con" << phi << "): ";
		cin >> e;
	} while (!(e < phi && mcd(e, phi) == 1));

	d = get<1>(euclides(e, phi));
	while (d < 0) d += phi;

	cout << "Modulo: " << n << endl;
	cout << "Clave publica: " << e << endl;
	cout << "Clave privada: " << d << endl;
}

InfInt modpow(InfInt base, InfInt exp, InfInt mod) {
	InfInt r = 1;

	while (--exp >= 0) {
		r *= base;
		r %= mod;
	}
	return r;
}

inline vector<InfInt> RSA::encriptar(string msg, InfInt e, InfInt n) {
	vector<InfInt> resultado;

	for (auto c : msg) {
		// c^e mod n
		resultado.push_back(modpow((int)c, e, n));
	}
	return resultado;
}

inline string RSA::desencriptar(string msg, InfInt d, InfInt n) {
	vector<InfInt> mensaje;

	string temp("");
	for (auto c : msg) {
		if (c == '-') {
			mensaje.push_back(temp);
			temp = "";
		}
		else temp += c;
	}
	if (temp.length() > 0) mensaje.push_back(temp);

	string resultado("");
	for (auto c : mensaje) {
		// c^d mod n
		auto numero = modpow(c, d, n);
		resultado += (char)(numero.toInt());
	}
	return resultado;
}

*/

string msg_1;
string msg_2;

InfInt mcd(InfInt a, InfInt b) {
	if (b != 0) return mcd(b, a % b);
	return a;
}

// ax + by = mcd(a, b)
tuple<InfInt, InfInt, InfInt> euclides(InfInt a, InfInt b) {
	if (a == 0) return make_tuple(b, 0, 1);

	InfInt mcd, x, y;
	tie(mcd, x, y) = euclides(b % a, a);

	return make_tuple(mcd, y - (b / a) * x, x); // (mcd, x, y)
}

struct RSA {
	static bool generar(Usuario* objUsuario);
	static vector<InfInt> encriptar(InfInt, InfInt);
	static string desencriptar(string, InfInt, InfInt);
	//static string desencriptar_d(string, InfInt, InfInt);
};


InfInt modpow(InfInt base, InfInt exp, InfInt mod) {
	InfInt r = 1;

	while (--exp >= 0) {
		r *= base;
		r %= mod;
	}
	return r;
}

inline vector<InfInt> RSA::encriptar(InfInt e, InfInt n) {
	vector<InfInt> resultado;

	for (auto c : msg_1) {
		// c^e mod n
		resultado.push_back(modpow((int)c, e, n));
	}
	for (int i = 0; i < resultado.size(); i++) {
		//cout << resultado.at(i) << " ";
	}

	return resultado;
}

inline string RSA::desencriptar(string msg, InfInt d, InfInt n) {
	vector<InfInt> mensaje;

	string temp("");
	for (auto c : msg) {
		if (c == '-') {
			mensaje.push_back(temp);
			temp = "";
		}
		else temp += c;
	}
	if (temp.length() > 0) {
		//mensaje.push_back(temp); 
		for (int i = 0; i < temp.size(); i++) {
			mensaje.push_back((int)temp.at(i));
		}
	}

	string resultado("");
	for (auto c : mensaje) {
		// c^d mod n
		auto numero = modpow(c, d, n);
		resultado += (char)(numero.toInt());
	}

	for (int i = 0; i < resultado.size(); i++) {
		//cout << (int)resultado.at(i) << " ";
	}
	return resultado;
}

//-------------------------------------------------------------------//

long long MCD(long long num1, long long num2) {
	long long a, b;
	long long mcd;
	a = max(num1, num2);
	b = min(num1, num2);

	do {
		mcd = b;
		b = a%b;
		a = mcd;
	} while (b != 0);

	return mcd;
}

bool es_Primo(long long num) {
	long long divisor = 1, divisores = 0;

	do {
		if (num % divisor == 0) {
			divisores++;
		}
		divisor++;
	} while (divisor <= num);
	if (divisores == 2) {
		return true;
	}
	else {
		return false;
	}
}

long long make_D(long long phi) {
	long long d; Random r;
	do {
		d = r.Next(1, phi);
	} while (es_Primo(d) != true && MCD(d, phi) != 1);

	//cout << "El valor de d es: " << d << endl;
	return d;
}

//Funcion que nos retorna un valor primo al azar
void getPrimo(long long& num) {
	Random r;
	do {
		num = r.Next(100, 800);
		if (es_Primo(num) == true) { break; }

	} while (es_Primo(num) != true);
}

void  encontrar_Valores(long long num, long long &p, long long &q) {
	/*
	for (long long i = 0; i < num; i++) {
		for (long long j = 0; j < num; j++) {
			if (i*j == num && i == getP() && j == getQ()) {
				p = i; q = j;
				cout << "El valor de p es: " << p << " y el valor de q es:" << q << endl;
				p = 0; q = 0;
				return;
			}
		}
	}*/

}

//Funcion para hallar el valor de la CLAVE PRIVADA (d)
long long Congruencia_Lineal_IziCoin_D(long long a, long long n) {
	long long m, b = 1, iterador, verificador;

	unsigned long long producto;

	//a = 8; b = 7; n = 13; // 8x = 7 mod 13
	iterador = 0;
	producto = 0;
	
	do {
		iterador++;
		producto = a * iterador;
		if (iterador > (a * a)) {
			//cout << "TIEMPO EXCEDIDO" << endl << endl;
			return 0;
		}
		else {
			if (producto < 0) {
				//cout << "ERROR, LOS SIGNOS NEGATIVOS NO SON VALIDOS";
				return 0;
			}
			if (producto % n == 1) {
				verificador = producto % n;
				if (verificador != 1) {
					//cout << "Algo salio mal en la comparacion" << endl;
				}
			}
		}
	} while (producto % n != 1);

	//cout << a << "x = " << 1 << " mod " << n << endl;
	a = (a*iterador) % n; b = (b*iterador) % n;

	/*cout << a << "x = " << b << " + " << n << "k" << endl;*/


	return b;
}

//Funcion para crear las CLAVE PUBLICA (e)
long long Congruencia_Lineal_IziCoin(long long a, long long n) {
	long long m, b = 1, iterador, verificador = 0;

	unsigned long long producto;

	//a = 8; b = 7; n = 13; // 8x = 7 mod 13
	iterador = 0;
	producto = 0;

	do {
		iterador++;
		producto = a * iterador;
		if (iterador > (a * a)) {
			//cout << "TIEMPO EXCEDIDO" << endl << endl;
			return 0;
		}
		else {
			if (producto < 0) {
				//cout << "ERROR, LOS SIGNOS NEGATIVOS NO SON VALIDOS";
				return 0;
			}
			if (producto % n == 1) {
				/*cout << a << "*" << iterador << " = " << producto << endl;
				cout << n << "*" << producto / n << " = " << n*(producto / n) << endl;*/
				/*cout << "Residuo: " << producto % n << endl << endl;
				cout << "Iterador: " << iterador << endl;*/

				verificador = producto % n;

				if (verificador != 1) {
					//cout << "Algo salio mal en la comparacion" << endl;
					return 0;
				}
			}
		}
	} while (producto % n != 1);

	//cout << a << "x = " << 1 << " mod " << n << endl;
	a = (a*iterador) % n; b = (b*iterador) % n;

	/*cout << a << "x = " << b << " + " << n << "k" << endl;*/
	


	return b;
}

//-------------------------------------------------------------------//

/*
inline void RSA::generar(Usuario* objUsuario) {
	//InfInt p, q, n, phi, e, d;
	long _d; long _phi; long _e, _p, _q, _n;

	//---------Obtener valor de p y q-------
	getPrimo(_p);

	do {
		getPrimo(_q);
	} while (_q == _p);
	cout << _p << "  " << _q << endl;
	//----------------


	_n = _p * _q;
	_phi = (_p - 1) * (_q - 1);

	_d = make_D(_phi);


	_e = Congruencia_Lineal_IziCoin(_d, _phi);

	objUsuario->getBilletera()->setCpublicN(_n);
	objUsuario->getBilletera()->setCprivadaD(_d);
	objUsuario->getBilletera()->setCpublicE(_e);

	/*cout << "Clave publica: (" << _n << "," << _e << ") " << endl;
	cout << "Clave privada: (" << _n << "," << _d << ") " << endl << endl;

	cout << "El valor de phi es: " << _phi << endl << endl;

	//Hallar el valor de "d" desde otro usuario
	//long res = Congruencia_Lineal_IziCoin(_e, _phi);

	//Encontrando el valor de p y q
	//encontrar_Valores(_n);

}
*/

inline bool RSA::generar(Usuario* objUsuario) {
	//InfInt p, q, n, phi, e, d;
	long long _d; long long _phi; long long _e; long long _n;


	//----------------
	long long p2; getPrimo(p2);
	long long q2;

	do {
		getPrimo(q2);
	} while (q2 == p2);
	//----------------


	_n = p2 * q2;
	_phi = (p2 - 1) * (q2 - 1);

	_d = make_D(_phi);

	_e = Congruencia_Lineal_IziCoin(_d, _phi);


	//--------- MENU
	if (_e == 0) {
		return false;
	}
	else {
		//menu(p2, q2, _n, _phi, _d, _e);

		objUsuario->getBilletera()->setCpublicN(_n);
		objUsuario->getBilletera()->setCprivadaD(_d);
		objUsuario->getBilletera()->setCpublicE(_e);

		//--------------
		/**
		long long res;
		res = Congruencia_Lineal_IziCoin_D(_e, _phi);

		//Reemplazar por objUsuario->CPublica y CPrivada (creo)
		setP(p2); setQ(q2);


		cout << "/-------------------------------/\n";
		cout << "Encontrando el valor de p y q...\n";
		encontrar_Valores(_n);*/
		return true;
	}
}
