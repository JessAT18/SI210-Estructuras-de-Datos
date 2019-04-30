#pragma once
#include <iostream>
#include <string>
#include "Cola.h"
#include "Naturales.h"

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
};

