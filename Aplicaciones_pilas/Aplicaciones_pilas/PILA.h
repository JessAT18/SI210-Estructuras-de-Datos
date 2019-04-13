#pragma once
#include <iostream>
#include <string>
#include "ADENA.h"
using namespace std;

const int N = 20;

class PILA
{
	CADENA pila[N];
	int tope;
public:
	PILA(void){
		tope = -1;
	}
	bool pila_vacia(){
		if(tope == -1){
			return true;
		}else{
			return false;
		}
	}
	bool pila_llena(){
		if(tope == N-1){
			return true;
		}else{
			return false;
		}
	}
	int get_tope(){
		return tope;
	}
	bool insertar(CADENA c){
		if(pila_llena() == true){
			return false;
		}else{
			tope=tope+1;
			pila[tope]=c;
			return true;
		}
	}
	bool eliminar(CADENA &x){
		if(pila_vacia()==true){
			return false;
		}else{
			x=pila[tope];
			tope=tope-1;
			return true;
		}
	}
	PILA apuntador_pila(){
		return *this;
	}
	void apuntador_pila(PILA x){
		*this = x;
	}
};

