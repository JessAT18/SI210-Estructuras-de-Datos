#pragma once
#include <string>

using namespace std;

class Cadena
{
	string cadena;
public:
	void Set_cadena(string cad)
	{
		cadena=cad;
	}
	string Get_cadena()
	{
		return cadena;
	}
};

