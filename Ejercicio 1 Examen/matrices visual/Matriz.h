#pragma once
#include <iostream>
#include <string>
#include "Producto.h"

using namespace std;
const int N=20;
const int M=20;

class Matriz
{
private:
    Producto matriz[N][M];
    int tamano_fila;
    int tamano_columna;
public:
    //Constructor//
    Matriz(void)
    {
        tamano_fila=0;
        tamano_columna=0;
    }

    //Metodos de Acceso//
    int Get_tamano_fila()
    {
        return tamano_fila;
    }
    int Get_tamano_columna()
    {
        return tamano_columna;
    }
    void Set_tamano_fila(int f)
    {
        tamano_fila=f;
    }
    void Set_tamano_columna(int c)
    {
        tamano_columna=c;
    }
    Producto Get_matriz(int f,int c)
    {
        return matriz[f][c];
    }
    void Set_matriz(int f, int c, Producto x)
    {
        matriz[f][c]=x;
    }
};
