#include "StdAfx.h"
#include "Cadena.h"

Cadena::Cadena()
{
}
string Cadena::get_cadena()
{
	return cadena;
}
void Cadena::set_cadena(string s)
{
	cadena=s;
}