#include "StdAfx.h"
#include "Nodo.h"

Nodo::Nodo()
{
}

int Nodo::get_apuntador()
{
	return apuntador;
}

void Nodo::set_apuntador(int p)
{
	apuntador = p;
}
Cadena Nodo::get_nombre_apellido()
{
	return nombre_apellido;
}
void Nodo::set_nombre_apellido(Cadena x)
{
	nombre_apellido=x;
}
Nodo Nodo::this_nodo()
{
	return *this;
}
Nodo Nodo::this_nodo(Nodo n)
{	*this=n;
}
