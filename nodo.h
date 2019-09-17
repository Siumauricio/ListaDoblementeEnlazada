#pragma once
#pragma once
#include <string.h>

struct nodo {
	char* valor;
	nodo* anterior;
	nodo* siguiente;

	nodo() {
		siguiente = nullptr;
		anterior = nullptr;
		valor = nullptr;
	}
};

void insertaralinicio(nodo**, char*);
void insertaralfinal(nodo**, char*);
void ordenar(nodo**);
void imprimir(nodo** raiz);
void buscarElemento(nodo**,char* valor);
void cargardesdearchivo(nodo**,char*);
void guardararchivo(nodo**,char*);
