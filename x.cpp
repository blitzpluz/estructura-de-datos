#include <iostream>
#include <stdio.h>
using namespace std;

struct nodo{
	int entero;
	nodo *sig;
	
}	*cabeza;

int main (){
	nodo *uno = new nodo;
	nodo *dos = new nodo;
	nodo *tres = new nodo;
	
	cabeza = uno;
	uno -> sig = dos;
	dos -> sig = tres;
	tres -> sig = NULL;
	
	uno->entero =1;
	dos->entero =2;
	tres->entero =3;
	
	cout<<cabeza->entero<< cabeza->sig->entero<<cabeza->sig->sig->entero<<endl;



}





