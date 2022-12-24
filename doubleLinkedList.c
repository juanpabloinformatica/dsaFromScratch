#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
  int numero;
  struct nodo* anterior;
  struct nodo* siguiente;
}nodo;

nodo* cabeza = NULL;
nodo* cola = NULL;
void agregarNodo(int numero){
  nodo* nuevoNodo = (nodo*)malloc(sizeof(nodo));
  nuevoNodo->numero = numero;
  nuevoNodo->anterior = NULL;
  nuevoNodo->siguiente = NULL;
  if (cabeza==NULL) {
    cabeza = nuevoNodo; 
    cola = nuevoNodo;
  }else{
    nodo* cabezaTemp = cabeza;
    while (cabezaTemp->siguiente != NULL) {
      cabezaTemp = cabezaTemp->siguiente;
    }
    cabezaTemp->siguiente = nuevoNodo;
    nuevoNodo->anterior = cabezaTemp;
    cola = nuevoNodo;
  }

}

void mostrarLista(int orden){
  if(orden == 0){
    nodo* cabezaTemp = cabeza;
    while (cabezaTemp!=NULL) {
      printf("\n%d",cabezaTemp->numero);
      cabezaTemp=cabezaTemp->siguiente;
    }
  }else{
    nodo* cabezaTemp = cola;
    while (cabezaTemp!=NULL) {
      printf("\n%d",cabezaTemp->numero);
      cabezaTemp=cabezaTemp->anterior;
    }
  }
}
int main(){
  agregarNodo(1);
  agregarNodo(2);
  agregarNodo(3);
  mostrarLista(0);
  printf("\n");
  mostrarLista(1);
  return 0;
}
