#pragma once
class Lista
{
	Nodo lista[n];
	int list;
	int disp;
public:
	Lista();
	bool lista_vacia();
	bool lista_llena();
	bool insertar(int pos, int nodo);
	bool eliminar(int p, Nodo &x);
	Nodo get_lista(int p);
	void set_lista(int p, Nodo x);
	Lista this_apuntador();
	void this_apuntador(Lista L);
};
