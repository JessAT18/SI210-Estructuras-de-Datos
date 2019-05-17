#include "StdAfx.h"
#include "Nodo.h"

Nodo::Nodo()
{
	apuntador=-1;
}

string Nodo::get_proceso()
{
	return proceso;
}

void Nodo::set_proceso(string s)
{
	proceso=s;
}

int Nodo::get_prioridad()
{
	return prioridad;
}

void Nodo::set_prioridad(int p)
{
	prioridad=p;
}

int Nodo::get_apuntador()
{
	return apuntador;
}

void Nodo::set_apuntador(int p)
{
	apuntador = p;
}
bool Nodo::equivalente(Nodo x)
{
	if(x.proceso==proceso && x.prioridad==prioridad)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Nodo Nodo::this_nodo()
{
	return *this;
}
void Nodo::this_nodo(Nodo n)
{	
	*this=n;
}
