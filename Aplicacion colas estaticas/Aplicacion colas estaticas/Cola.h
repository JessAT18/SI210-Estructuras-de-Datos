#pragma once
class Cola
{
	Persona cola[n];
	int frente, Final;
	//Metodos de acceso
	int get_frente()
	{
		return frente;
	}
	int get_final()
	{
		return Final;
	}
	void set_frente(int f)
	{
		frente = f;
	}
	void set_final(int f)
	{
		Final = f;
	}
	bool cola_vacia()
	{
		if(frente==Final)
		{
			return true;
		}
		else return false;
	}
	bool cola_llena()
	{
		if(Final==n-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	 bool insertar(Persona x) 
	 { 
		 if(cola_llena()) 
		 { 
			 return false; 
			 if(frente!=-1) 
			 { 
				 reestructura();
			 } 
		 } 
		 else 
		 { 
			 Final++; 
			 cola[Final]=x; 
			 return true; 
		 } 
	 }
};

