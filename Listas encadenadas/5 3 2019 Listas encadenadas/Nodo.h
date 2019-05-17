#pragma once
#include<string>

using namespace std;

class Nodo
{
	string proceso;
	int prioridad;
	int apuntador;
public:
	Nodo();
	string get_proceso();
	void set_proceso(string s);
	int get_prioridad();
	void set_prioridad(int p);
	int get_apuntador();
	void set_apuntador(int p);
	bool equivalente(Nodo x);
	Nodo this_nodo();
	void this_nodo(Nodo n);
};
