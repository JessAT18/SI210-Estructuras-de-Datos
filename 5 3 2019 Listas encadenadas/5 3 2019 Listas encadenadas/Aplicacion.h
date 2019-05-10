#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Lista.h"

using namespace std;
using namespace System::Windows::Forms;
using namespace msclr::interop;

class Aplicacion:public Lista	//Herencia
{
public:
	Aplicacion(void);
	void leer(DataGridView^ g, TextBox^ t);
	void mostrar(DataGridView^ g, TextBox^ t);
	void eliminar_palabras_fin_s();
};

