#pragma once
#include <iostream>
#include <string>
#include "Naturales.h"
using namespace System::Windows::Forms;
using namespace std;
const int N=20;
const int M=25;

class Matriz
{	private:
	Naturales matriz[N][M];
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
	{return tamano_fila;}
	int Get_tamano_columna()
	{return tamano_columna;}
	void Set_tamano_fila(int f)
	{ tamano_fila=f;}
	void Set_tamano_columna(int c)
	{ tamano_columna=c;}
	Naturales Get_matriz(int f,int c)
	{ return matriz[f][c];}
	void Set_matriz(int f, int c, Naturales x)
	{matriz[f][c]=x;}
	/*
	void Leer()
	{
		int i,j,num;
		Naturales x;
		cout<<"Ingrese el tamano de la fila"<<endl; 
		cin>>tamano_fila;
		cout<<"Ingrese el tamano de la columna"<<endl; 
		cin>>tamano_columna;
		if((tamano_fila<N)&&(tamano_columna<M))
		{
			i=0;
			for(i=0;i<tamano_fila;i++)
			{
				for(j=0;j<tamano_columna;j++)
				{cout<<"Matriz["<<i+1<<"]["<<j+1<<"]=";
				cin>>num;
				x.Set_entero(num);
				matriz[i][j]=x;
				}
			}
		}
	}


		void Mostrar()
		{ int i,j;
			for(i=0;i<tamano_fila;i++)
			{	for(j=0;j<tamano_columna;j++)
				{	cout<<Get_matriz(i,j).Get_entero()<< "  ";
				} cout<<endl;
			}
			
		}*/
		
	Matriz Sumar(Matriz b)
	{	Naturales c;
		Matriz d;
		int i,j;
		int n;
		for(i=0;i<Get_tamano_fila();i++)
		{	for( j=0;j<Get_tamano_columna();j++)
			{  c.Set_entero(Get_matriz(i,j).Get_entero()+b.Get_matriz(i,j).Get_entero());
			   d.Set_matriz(i,j,c);
			   //c.Matriz [i][j]=matriz[i][j].Sumar(b.matriz[i][j]);

			}
		}
		d.Set_tamano_fila(i);
		d.Set_tamano_columna(j);
		return d;
	}

		Matriz Restar(Matriz b)
	{	Naturales c;
		Matriz d;
		int i,j;
		int n;
		for(i=0;i<Get_tamano_fila();i++)
		{	for( j=0;j<Get_tamano_columna();j++)
			{  c.Set_entero(Get_matriz(i,j).Get_entero()-b.Get_matriz(i,j).Get_entero());
				d.Set_matriz(i,j,c);
			}
		}
		d.Set_tamano_fila(i);
		d.Set_tamano_columna(j);
		return d;
	}
    void Leer(DataGridView^ grilla,TextBox^ fil,TextBox^ col){
		int i,j;
		Naturales x;
		while(i<System::Convert::ToInt32(fil->Text)){
		  j=0;
		  while(j<System::Convert::ToInt32(col->Text)){
			 x.Set_entero(System::Convert::ToInt32(grilla->Rows[i]->Cells[j]->Value));
			 matriz[i][j]=x;
			 j++;
		  }
		  i++;
		}
	    Set_tamano_fila(i);
		Set_tamano_columna(j);
	}
	void Mostrar(DataGridView^ grilla){
		int i,j;
		i=0;
		grilla->ColumnCount=Get_tamano_columna();
		grilla->RowCount=Get_tamano_fila();
		while(i<Get_tamano_fila()){
		   j=0;
		   while(j<Get_tamano_columna()){
              grilla->Rows[i]->Cells[j]->Value=System::Convert::ToString(Get_matriz(i,j).Get_entero());
		      j++;
		   }
		   i++;
		}
	
	}	
	bool Matriz:: Verificar(Matriz y)
	{
		if (y.tamano_fila==tamano_columna)
		{
			return true;
		}
		else return false;
	}

};
