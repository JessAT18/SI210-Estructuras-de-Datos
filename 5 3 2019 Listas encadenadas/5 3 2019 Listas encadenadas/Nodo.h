#pragma once
#include "Cadena.h"
class Nodo
{
	Cadena nombre_apellido;
	int apuntador;
public:
	Nodo();
	int get_apuntador();
	void set_apuntador(int p);
	Cadena get_nombre_apellido();
	void set_nombre_apellido(Cadena x);
	Nodo this_nodo();
	void this_nodo(Nodo n);
};
