#pragma once
#include "Nodo.h"
const int n=20;
class Lista
{
	Nodo lista[n];
	int list, disp;
public:
	Lista();
	bool lista_vacia();
	bool lista_llena();
	int buscar_nodo();
	bool insertar(int p, Nodo x);
	void liberar_nodo(int p);
	bool eliminar(int p, Nodo &x);
	Nodo get_lista(int p);
	void set_lista(int p, Nodo x);
	Lista this_lista();
	void this_lista(Lista L);
};
