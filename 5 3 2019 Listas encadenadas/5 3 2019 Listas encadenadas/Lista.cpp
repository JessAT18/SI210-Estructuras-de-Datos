#include "StdAfx.h"
#include "Lista.h"
#include "Nodo.h"
#include "Cadena.h"

Lista::Lista(void)
{
	list=-1;
	disp=0;
	int i=0;
	for(i=0; i<n-1; i++)
	{
		lista[i].set_apuntador(-1);
	}
}
bool Lista::lista_vacia()
{
	if(list==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Lista::lista_llena()
{
	if(disp==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Lista::buscar_nodo()
{
	int y=disp;
	disp=lista[y].get_apuntador();
	return y;
}
bool Lista::insertar(int p, Nodo x)
{
	int y;
	if(lista_llena())
	{
		return false;
	}
	else
	{
		y=buscar_nodo();
		lista[y]=x;
		if(p==-1)
		{
			lista[y].set_apuntador(list);
			list=y;
		}
		else
		{
			lista[y].set_apuntador(get_lista(p).get_apuntador()); //En vez de get_lista.... lista[p].get_apuntador()
			lista[p].set_apuntador(y);
		}
		return true;
	}
}
bool Lista::eliminar(int p, Nodo &x)
{
	return true;
}

Nodo Lista::get_lista(int p)
{
	return lista[p];
}
void Lista::set_lista(int p, Nodo x)
{
	lista[p]=x;
}
Lista Lista::this_lista()
{
	return *this;
}
void Lista::this_lista(Lista L)
{
	*this=L;
}