#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
  int numero;
  struct nodo* siguiente;
}nodo;
// nodo* cabeza = (nodo*)malloc(sizeof(nodo));
nodo* cabeza = NULL;

void agregarNodo(int numero){
  nodo* nuevoNodo = (nodo*)malloc(sizeof(nodo));
  nuevoNodo->numero = numero;
  nuevoNodo->siguiente = NULL;
  if (cabeza == NULL) {
    cabeza = nuevoNodo;
  }else {
    nodo* cabezaTemp = cabeza;
    while(cabezaTemp->siguiente != NULL){
      cabezaTemp = cabezaTemp->siguiente;
    }
    cabezaTemp->siguiente = nuevoNodo;
  }

}
void mostrarLista(){
  nodo* cabezaTemp = cabeza;
  while(cabezaTemp != NULL){
    printf("%d",cabezaTemp->numero);
    cabezaTemp = cabezaTemp->siguiente;
  }
  if (cabeza ==NULL) {
    printf("entiendo");
  }
  printf("no entiendo que pasa. ");
  printf(" cabeza desde mostrar lista: %p\n",cabeza);
}
int main(){
  nodo n = {.numero = 1, .siguiente = &n};
  // node_t n = {.numero = 1};
  printf("%p",n.siguiente);
  printf("cabeza informacion: %p\n",cabeza);
  agregarNodo(1);
  printf("cabeza informacion act: %p\n",cabeza);

  agregarNodo(2);
  agregarNodo(3);
  agregarNodo(4);
  agregarNodo(5);
  agregarNodo(6);
  mostrarLista();
  return 0;
  
}
