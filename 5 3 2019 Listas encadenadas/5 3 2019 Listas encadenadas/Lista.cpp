#include "StdAfx.h"
#include "Lista.h"

Lista::Lista(void)
{
	list=-1;
	disp=0;
	int i;
	for(i=0; i<n-1; i++)
	{
		lista[i].set_apuntador(i+1);
	}
	lista[i].set_apuntador(-1);
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
void Lista::liberar_nodo(int p)
{
	lista[p].set_apuntador(disp);
	disp=p;
}
bool Lista::eliminar(int p, Nodo &x)
{
	int y;		//Usé "y" en vez de "p", ya que utilizo "p" para la variable "pos"
	if(lista_vacia())
	{
		return false;
	}
	else
	{
		if(p==-1)
		{
			x=lista[list];
			p=list;
			list=lista[list].get_apuntador();
		}
		else
		{
			if(lista[p].get_apuntador()==-1)
			{
				return false;
			}
			else
			{
				y=lista[p].get_apuntador();
				x=lista[y];
				lista[p].set_apuntador(lista[y].get_apuntador());
			}
		}
		liberar_nodo(y);
		return true;
	}
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