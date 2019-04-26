#pragma once
#include "Cadena.h"

using namespace std;

#include "Cadena.h"
#include "Naturales.h"

class Producto
{
	Cadena producto;
	Naturales precio;

public:

	void Set_producto(Cadena pro, Naturales pre)
	{
		producto=pro;
		precio=pre;
	}
	Cadena Get_nombre_prod()
	{
		return producto;
	}
	Naturales Get_precio()
	{
		return precio;
	}
};

