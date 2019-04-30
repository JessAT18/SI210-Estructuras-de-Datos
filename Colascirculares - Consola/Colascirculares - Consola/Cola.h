#pragma once
#include "stdafx.h"
#include <iostream>
#include "Cola.h"
using namespace std;
const int MAXN=100;

class Cola
{
int frente;
int final;
int vec[MAXN];
public:
	Cola(){
		frente =final=0;
	}
	bool cola_llena(){
		if(frente==(final+1)%MAXN){
		   return true;
		}	else{
		    return false;
		}
	}
	bool cola_vacia(){
		if (frente==final){
		   return true;
		}else{
		   return false;
		}
	}
	bool insertar (int x){
		if(cola_llena()==true){
		   return false;
		}else{
		   vec[final]=x;
		   final=(final+1)%MAXN;
		   return true;
		}
	}
	bool eliminar(int &x){
		if(cola_vacia()==true){
		    return false;
		}else{
		    x=vec[frente];
			frente=(frente+1)%MAXN;
		}
	}
};