#pragma once
#include "Matriz.h"
#include "Producto.h"
#include "Naturales.h"
#include "Cadena.h"
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace System::Windows::Forms;

class Aplicacion:public Matriz
{
	Matriz x;
public:
	void Leer(DataGridView^ grilla,TextBox^ fil,TextBox^ col){
		int i,j, fila, columna;
		Naturales x;
		Cadena y;
		Producto z;
		fila=System::Convert::ToInt32(fil->Text);
		columna=System::Convert::ToInt32(col->Text);
		while(i<fila){
		  j=0;
		  while(j<columna){
			 y.Set_cadena(marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[2*j]->Value)));
			 x.Set_entero(System::Convert::ToInt32(grilla->Rows[i]->Cells[2*j+1]->Value));
			 z.Set_producto(y,x);
			 Set_matriz(i,j,z);
			 j++;
		  }
		  i++;
		}
	    Set_tamano_fila(fila);
		Set_tamano_columna(columna);
	}
	void Mostrar(DataGridView^ grilla){
		int i,j;
		i=0;
		grilla->ColumnCount=Get_tamano_columna()*2;
		grilla->RowCount=Get_tamano_fila();
		while(i<Get_tamano_fila()){
		   j=0;
		   while(j<Get_tamano_columna()){
              grilla->Rows[i]->Cells[2*j]->Value=marshal_as<System::String^>(Get_matriz(i,j).Get_nombre_prod().Get_cadena());
		      grilla->Rows[i]->Cells[2*j+1]->Value=System::Convert::ToString(Get_matriz(i,j).Get_precio().Get_entero());
		      j++;
		   }
		   i++;
		}
	}	
};

