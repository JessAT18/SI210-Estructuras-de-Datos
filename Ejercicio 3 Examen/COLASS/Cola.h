#pragma once
#include "Producto.h"
#include <iostream>
using namespace std;
const int n=20;
class Cola
{
private:
	Producto cola[n];
	int frente;
	int final;

	
public:
	Cola(void){ frente=-1;	final=-1;}

	int Get_frente()
	{	return frente;	}
	void Set_frente (int f)
	{	frente=f;	}

	int Get_final()
	{	return final;	}
	void Set_final(int f)
	{	final=f;	}

	bool Cola_vacia()
	{
		if (frente==final)
			return true;
		else return false;
	}

	bool Cola_llena()
	{
		if (final==n-1)
			return true;
		else return false;
	}

	bool Insertar(Producto x)
	{
		if (Cola_llena()==true)
			return false;
		final++;
		cola[final]=x;
		return true;
	}

	bool Eliminar (Producto &x)
	{
		if(Cola_vacia()==true)
			return false;
		else{
			frente=frente+1;
			if (Cola_llena()==true && frente!=-1)
				Reestructurar(frente);
			x=cola[frente];
			return true;

		}
	}
	
	 void Reestructurar(int f)
	 {
		 int tam=final-f;
		 f++;
		 for (int i=0; i<tam; i++)
		 {
			 cola[i]=cola[f+i];
		 }

		 final=f;
		 frente=-1;

	 }

	 Cola Apuntador()
	 {
		 return *this;
	 }

	 void This_cola (Cola x)
	 {
		 *this=x;
	 }
};

