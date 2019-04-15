#pragma once
class Persona
{
	CADENA nombre;
	NATURALES edad;
	//Metodos de acceso
	public:
	CADENA get_nombre()
	{
		return nombre;
	}
	void set_nombre(CADENA c)
	{
		nombre = c;
	}
	NATURALES get_edad()
	{
		return edad;
	}
	void set_edad(NATURALES n)
	{
		edad = n;
	}
	bool igual_nombre(CADENA nom)
	{
		if(nombre.get_cadena() == nom.get_cadena())
		{
			return true;
		}
		else return false;
	}
	bool igual_edad(NATURALES ed)
	{
		if(edad.get_edad()==ed.get_edad())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

