#pragma once
#include "Naturales.h"
#include <iostream>
using namespace std;
const int n=100;
class Cola
{
private:
    Naturales cola[n];
    int frente;
    int final;

public:
    Cola()
    {
        frente=final=0;
    }

    int Get_frente()
    {
        return frente;
    }
    void Set_frente (int f)
    {
        frente=f;
    }

    int Get_final()
    {
        return final;
    }
    void Set_final(int f)
    {
        final=f;
    }

    bool Cola_llena()
    {
        if (frente==(final+1)%n) //final+1 omite el espacio en blanco y llega al valor de frente, ademas el modulo permite que no se salga del limite
            return true;
        else
            return false;
    }

    bool Cola_vacia()
    {
		if(frente==final)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

    bool Insertar(Naturales x)
    {
        if (Cola_llena())
            return false;
		else
		{
			cola[final]=x;
			final=(final+1)%n;
			return true;
		}
    }

    bool Eliminar (Naturales &x)
    {
        if(Cola_vacia())
            return false;
        else
        {
            x=cola[frente];
            frente=(frente+1)%n;
            return true;
        }
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