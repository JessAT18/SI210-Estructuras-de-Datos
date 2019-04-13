#pragma once
#include "string"
#include "iostream"
using namespace std;

class CADENA
{
	string cadena;
public:
	string get_cadena(){
		return cadena;
	}
	void set_cadena(string s){
		cadena = s;
	}
	void leer_c(){
		fflush(stdin);
		cout << "Ingrese la cadena: ";
		getline(cin, cadena);
	}
	void mostrar_c(){
		cout << "El valor de la cadena es: " << cadena << endl;
	}
	CADENA invertir(){
		CADENA c;
		int n;
		string x;
		n = cadena.size();
		for (int a = n-1; a >= 0; a--){
			x+=cadena[a];
		}
		c.set_cadena(x);
		return c;
	}

	bool eliminar_vocal(CADENA x)
	{
		if(cadena.find(x.get_cadena())==-1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};
