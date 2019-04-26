#pragma once
#include <iostream>
#include <string>
#include "Cola.h"
#include "Producto.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
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
		grilla -> RowCount = 2;
	}

	void Guardar (DataGridView^ grilla, TextBox^ tam)
	{
		int i=0; 
		Naturales y1;
		Cadena y2;
		Producto p;
		while (i< System::Convert::ToInt32( tam->Text))
		{
			y1.Set_entero(System::Convert::ToInt32(grilla -> Rows[1] -> Cells[i] -> Value));
			y2.Set_cadena(marshal_as<std::string>(System::Convert::ToString(grilla -> Rows[0] -> Cells[i] ->Value)));
			p.Set_producto(y2, y1);
			Insertar(p);
			i++;
		}
	}

	void Mostrar(DataGridView^ grilla)
	{
		int i=0;
		int tam= Get_final() - Get_frente();
		Cola aux;
		Producto x;
		aux=Apuntador();
		

		grilla->ColumnCount=tam;
		grilla->RowCount=2;
		while (i<tam)
		{
			aux.Eliminar(x);
			grilla->Rows[1] -> Cells[i] ->	Value=System::Convert::ToInt32(x.Get_precio().Get_entero());
			grilla -> Rows[0] -> Cells[i] -> Value=marshal_as<System::String^>(x.Get_nombre_prod().Get_cadena());
			i++;
		}
	}
};

