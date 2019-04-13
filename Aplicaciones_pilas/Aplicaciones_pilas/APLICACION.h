#pragma once
#include <iostream>
#include <string>
#include "PILA.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop; 
using namespace System::Windows::Forms;
using namespace std;
class APLICACION
{
	PILA pilita;
public:
	APLICACION(void){
		PILA();
	}
	PILA get_pilita(){
		return pilita;
	}
	void set_pilita(PILA x){
		pilita=x; 
	}
	void leer(DataGridView^ g, TextBox^ tam){
		int i;
		i=0;
		CADENA cad;
		while(i < System::Convert::ToInt32(tam->Text)){
			cad.set_cadena(marshal_as<std::string>(System::Convert::ToString(g->Rows[i]->Cells[0]->Value)));
			pilita.insertar(cad);
			i++;
		}
	}
	void mostrar(DataGridView^ g){
		int i=0;
		CADENA cad;
		PILA aux = pilita.apuntador_pila();
		g->RowCount=pilita.get_tope()+1;
		g->ColumnCount=1;
		while(aux.pila_vacia()==false){
			aux.eliminar(cad);
			g->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(cad.get_cadena());
			i++;
		}
	}

	void eliminar_Vocal(TextBox^ t)
	{
		CADENA s, u;
		bool v;
		s.set_cadena(marshal_as<std::string>(System::Convert::ToString(t->Text)));
		PILA aux;
		while(!pilita.pila_vacia())
		{
			v = pilita.eliminar(u);
			if(!u.eliminar_vocal(s))
			{
				aux.insertar(u);
			}
		}
		while(!aux.pila_vacia())
		{
			v = aux.eliminar(u);
			pilita.insertar(u);
		}
	}
};

