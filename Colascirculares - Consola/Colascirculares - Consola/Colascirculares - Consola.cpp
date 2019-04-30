#include "stdafx.h"
#include "Cola.h"
#include "conio.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Cola q;
	while(q.cola_llena()==false){
	   q.insertar(10);
	}
	int x;
	for(int i=0; i<50; i++){
	  q.eliminar(x);
	  cout << i<< ":" <<x<<endl;
	}
	_getch();


	while(q.cola_llena()==false){
	   q.insertar(20);
	}
	int i=0;
	while(q.cola_vacia()==false){
	  q.eliminar(x);
	  cout << i++<< ":" <<x<<endl;
	}
	_getch();


	return 0;
}