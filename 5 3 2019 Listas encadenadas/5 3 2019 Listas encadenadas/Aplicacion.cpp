#include "StdAfx.h"
#include "Aplicacion.h"


Aplicacion::Aplicacion(void)
{
}

void Aplicacion::leer(DataGridView^ g, TextBox^ t)
{
	int i; Nodo x; int p=-1;
	for(i=0; i<System::Convert::ToInt32(t->Text); i++)
	{
		x.set_proceso(marshal_as<std::string>(System::Convert::ToString(g->Rows[0]->Cells[i]->Value)));
		x.set_prioridad(System::Convert::ToInt32(g->Rows[1]->Cells[i]->Value));
		if(p==-1)
		{
			insertar(p,x);
			p=primero();
		}
		else
		{
			insertar(p,x);
			p=proximo(p);
		}
		i++;
	}
}

int Aplicacion::longitud()
{
	int contar=0;
	int p=primero();
	while(p!=fin_lista())
	{
		contar++;
		p=proximo(p);
	}
	return contar;
}

void Aplicacion::mostrar(DataGridView^ g, TextBox^ t)
{
	int i=0, p=primero();
	Nodo x;
	g->ColumnCount=longitud();
	g->RowCount=2;
	while(p!=fin_lista())
	{
		x=get_lista(p);
		g->Rows[0]->Cells[i]->Value=marshal_as<System::String^>((x.get_proceso()));
		g->Rows[1]->Cells[i]->Value=System::Convert::ToString(x.get_prioridad());
		p=proximo(p);
		i++;
	}
}
	
