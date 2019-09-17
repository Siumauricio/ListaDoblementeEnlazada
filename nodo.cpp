#include <iostream>
#include "nodo.h"
#include <string>
#include <sstream> 
#include <fstream>
#include <string.h>
using namespace std;



void insertaralinicio(nodo** raiz, char* cadena) {
	nodo* nuevo = new nodo;
	nuevo->valor = cadena;
	if (*raiz == nullptr)
	{
		(*raiz) = nuevo;
	}
	else
	{
		nuevo->siguiente = *raiz;
		*raiz = nuevo;
	}
}


void insertaralfinal(nodo** raiz, char* cadena) {
	nodo* nuevo = new nodo;
	nuevo->valor = cadena;
	if (*raiz == nullptr)
	{
		(*raiz)=nuevo;
	}
	else
	{
		nodo* actual = *raiz;
		while (actual->siguiente!=0)
		{
			actual = actual->siguiente;
		}
		actual->siguiente = nuevo;
		nuevo->anterior = actual;
		nuevo->siguiente = 0;
	}
}

void imprimir(nodo** raiz) {
	if (*raiz==0)
	{
		return;
	}
	else 
	{
		std::cout << (*raiz)->valor << endl;
		imprimir(&(*raiz)->siguiente);
	}
}
void ordenar(nodo**raiz) {
	nodo* actual = *raiz;
	nodo* aux = nullptr;
	nodo* aux2 = nullptr;
	if (*raiz==nullptr)
	{
		return;
	}
	else 
	{
		while (actual!=nullptr)
		{
			aux = actual->siguiente;
			while (aux!=nullptr)
			{
				if (actual->valor>aux->valor)
				{
					aux->siguiente = actual;
					aux2 = aux;
					aux->siguiente = (*raiz);
					(*raiz) = aux;
					(*raiz)->siguiente = actual;
					actual = *raiz;
					aux =aux->siguiente;
					return;
				}

				aux = aux->siguiente;
			}
			actual = actual->siguiente;
		}
	}
}
 void buscarElemento(nodo**raiz,char* valor) {
		if (*raiz == 0)
		{
			return ;
		}else{
			if ((*raiz)->valor==valor)
			{
				cout << "Elemento Encontrado";
				return;
			}
		}
		buscarElemento(&(*raiz)->siguiente, valor);
}
 void guardararchivo(nodo**raiz,char* nombre) {
	 nodo* actual = *raiz;
	 ofstream lista(nombre, ios::app);

	 if (!lista)
	 {
		 cout << "Error al intentar abrir archivo lista.txt";
		 return;
	 }
	 while (actual!=nullptr)
	 {
		 lista << actual->valor << " ";
		 actual = actual->siguiente;
	 }

	 lista.close();
 }

 
 void cargardesdearchivo(nodo** raiz, char* nombre) {
	 nodo* actual = *raiz;
	 ifstream lista(nombre);

	 if (!lista)
	 {
		 cout << "Error al intentar abrir archivo";
		 return;
	 }
	 string cadena;
	 while (!lista.eof())
	 {
		 getline(lista, cadena);
		 cout << cadena;
	 }
	 lista.close();
 }

