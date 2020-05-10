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
	static void generar(Usuario* objUsuario);
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
		cout << resultado.at(i) << " ";
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
		cout << (int)resultado.at(i) << " ";
	}
	return resultado;
}

//-------------------------------------------------------------------//

void Congruente(int a, int b, int n) {
	int num3;

	num3 = max(a, b) - min(a, b);

	if (num3 % n == 0) {
		cout << "Si es congruente" << endl;
	}
	else {
		cout << "No es congruente" << endl;
	}
}

long MCD(long num1, long num2) {
	long a, b;
	long mcd;
	a = max(num1, num2);
	b = min(num1, num2);

	do {
		mcd = b;
		b = a%b;
		a = mcd;
	} while (b != 0);

	return mcd;
}

bool makePrimo(long num) {
	int divisor = 1, divisores = 0;

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

long make_D(long phi) {
	long d; Random r;
	do {
		d = r.Next(2, phi);
	} while (MCD(d, phi) != 1);

	
	return d;
}

//Funcion que nos retorna un valor primo al azar
void getPrimo(long& num) {

	Random r; long a, b;
	a = r.Next(100, 600);
	b = r.Next(600, 1000);
	do {
		num = r.Next(a, b);
	} while (makePrimo(num) != true);
}

void  encontrar_Valores(long num, long &p, long &q) {

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i*j == num) {
				p = i; q = j;
				return;
			}
		}
	}

}
long Congruencia_Lineal_IziCoinRuptura(long e, long phi) { //ClavePublica (e,n)
	//es phi es n me daba flojera cambiar todo n de la funcion
	long m, d = 1, iterador, producto;
	long n;//este es el phi 
	long p, q;
	encontrar_Valores(phi, p, q);//descomponiendo n en sus dos numeros primos
	n = (p-1)*(q-1); // hallando phi
	//a = 8; b = 7; n = 13; // 8x = 7 mod 13
	iterador = 0;

	long n1, n2;
	
	do {
		iterador++;
		producto = e * iterador;
	} while (producto % n != 1);

	e = producto % n; d = (d*iterador) % n;

	return d;
}

long Congruencia_Lineal_IziCoin(long a, long n) {
	long m, b = 1, iterador, producto;

	//a = 8; b = 7; n = 13; // 8x = 7 mod 13
	iterador = 0;

	long n1, n2;

	do {
		iterador++;
		producto = a * iterador;
	} while (producto % n != 1);

	a = producto % n; b = (b*iterador) % n;


	return b;
}

//-------------------------------------------------------------------//


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

	cout << "El valor de phi es: " << _phi << endl << endl;*/

	//Hallar el valor de "d" desde otro usuario
	//long res = Congruencia_Lineal_IziCoin(_e, _phi);

	//Encontrando el valor de p y q
	//encontrar_Valores(_n);

}
