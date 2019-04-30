#pragma once
#include <iostream>
#include <string>
#include "Cola.h"
using namespace std;
using namespace System::Windows::Forms;
 class Aplicacion:public Cola
{
public:

	Aplicacion(void)
	{
		Cola();
	}

	void Tamano(DataGridView^ grilla, TextBox^ tam)
	{
		grilla -> ColumnCount= System::Convert::ToInt32( tam->Text);
		grilla -> RowCount = 1;
	}

	void Guardar (DataGridView^ grilla, TextBox^ tam)
	{
		int i=0; 
		Naturales y1;
		while (i< System::Convert::ToInt32( tam->Text))
		{
			y1.Set_entero(System::Convert::ToInt32(grilla -> Rows[0] -> Cells[i] -> Value));
			Insertar(y1);
			i++;
		}
	}

	void Mostrar(DataGridView^ grilla)
	{
		int i=0;
		int tam= Get_final() - Get_frente() - 1;
		Cola aux;
		Naturales x;
		aux=Apuntador();
		grilla->ColumnCount=tam;
		grilla->RowCount=1;
		while (i<tam)
		{
			aux.Eliminar(x);
			grilla->Rows[0] -> Cells[i] ->	Value=System::Convert::ToInt32(x.Get_entero());
			i++;
		}
	}
	void eliminarrepetidos(Cola q)
	{
		Naturales x1, x2, x3;
		int tam1 = q.Get_final() - q.Get_frente();
		for(int i=0;i<tam1;i++){
			Cola p=q;
			q.Eliminar(x3);
			q.Insertar(x3);
			int tam2 = p.Get_final() - p.Get_frente();
			p.Eliminar(x1);
			for(int j=1;j<tam2;j++){
				p.Eliminar(x2);
				if(x1.Get_entero()!=x2.Get_entero()){
					p.Insertar(x2);
				}
			}
			q=p;
		}

	}
};

