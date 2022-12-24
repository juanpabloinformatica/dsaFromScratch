#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 10

typedef struct pila{
  int pilaArreglo[STACK_SIZE];
  int top ;
}pila;
int pop(pila* pila){

   if(pila->top >=0){
     int valor = pila->pilaArreglo[pila->top];
     pila->top--;
     return valor;
   }

}
void push(int numero,pila* pila){
 
    pila->top++;
 if(pila->top<STACK_SIZE){
    printf("\nentro en push.");
    pila->pilaArreglo[pila->top] =  numero;
    printf("\n%d",pila->top);
 }else{
   printf("la pila esta llena");
 }
}
int top(pila* pila){
  return pila->pilaArreglo[pila->top];
}
bool isEmpty(pila* pila){
  if(pila->top ==STACK_SIZE&&pila->top!=-1){
    printf("pila llena.");
    return false;
  }else {
   printf("todavia hay espacio. "); 
   return true;
  }
} 
int main(){
   pila p1 = {.top=-1};
   isEmpty(&p1);
   push(1,&p1);
   push(2,&p1);
   push(3,&p1);
   push(4,&p1);
   push(5,&p1);
   push(6,&p1);
   push(7,&p1);
   push(7,&p1);
   push(8,&p1);
   printf("\npop:%d",top(&p1));
   printf("\npop:%d",top(&p1));
  return 0;
}
