#pragma once
#include "Naturales.h"
#include <iostream>
using namespace std;
const int n=20;
class Cola
{
private:
    Naturales cola[n];
    int frente;
    int final;

public:
    Cola(void)
    {
        frente=0;
        final=0;
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

    bool Cola_vacia()
    {
        if (frente==final)
            return true;
        else
            return false;
    }

    bool Cola_llena()
    {
        if (frente==(final+1)%n)
            return true;
        else
            return false;
    }

    bool Insertar(Naturales x)
    {
        if (Cola_llena()==true)
            return false;
        final=(final+1)%n;
        cola[final]=x;
        return true;
    }

    bool Eliminar (Naturales x)
    {
        if(Cola_vacia()==true)
            return false;
        else
        {
            frente=(frente+1)%n;
            x=cola[frente];
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

