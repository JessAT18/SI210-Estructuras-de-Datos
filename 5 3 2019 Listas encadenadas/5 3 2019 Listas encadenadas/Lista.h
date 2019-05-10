#pragma once
#include "Nodo.h"
const int n=20;
class Lista
{
	Nodo lista[n];
	int list, disp;

	int buscar_nodo();
	void liberar_nodo(int p);

public:
	
	Lista();
	bool lista_vacia();
	bool lista_llena();
	bool insertar(int p, Nodo x);
	bool eliminar(int p, Nodo &x);
	int primero();
	int proximo(int p);
	int ultimo();
	int	fin_lista()
	Nodo get_lista(int p);
	void set_lista(int p, Nodo x);
	Lista this_lista();
	void this_lista(Lista L);
};
