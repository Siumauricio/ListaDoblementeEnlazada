#include "nodo.h"
#include <iostream>
using namespace std;

int main() {
	nodo* raiz = 0;
	int opcion = 0;
	bool cerrar = true;
	char nombre[50] ;

			insertaralinicio(&raiz, (char*)"jose");
			insertaralinicio(&raiz, (char*)"pedro");
			insertaralinicio(&raiz, (char*)"antonio");
			insertaralfinal(&raiz, (char*)"carlos");
			insertaralfinal(&raiz, (char*)"julio");
			guardararchivo(&raiz, (char*)"lista.txt");
			cargardesdearchivo(&raiz, (char*)"lista.txt");
			buscarElemento(&raiz, (char*)"julio");
			imprimir(&raiz);


}
