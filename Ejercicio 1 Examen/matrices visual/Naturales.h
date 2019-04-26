#pragma once
#include <iostream>
#include <string>
using namespace std;
class Naturales
{private:
   int entero;
 public:
	 int Get_entero(){
	    return entero;
	 }
	 void Set_entero(int e){
	     entero=e;
	 }
	 Naturales Sumar(Naturales x){
	     Naturales c;
		 c.entero=entero+x.entero;
		 return c;
	 }
	 
};

