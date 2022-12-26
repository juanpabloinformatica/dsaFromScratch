/*This implementation consider queue that the rear is in the left of 
 * the array and the front is the riht side of the array, we have to 
 * implement the circular idea to don't waste chunk of memory.*/
#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10

typedef struct Queue {
  int queue[QUEUE_SIZE];
  int front;
  int rear;
}Queue;
int enqueue (int numero, Queue* queue){
  queue->queue[queue->rear] = numero;
  queue->rear--;
}
int peek(Queue* queue){
  if(isEmpty(queue)){
    printf("esta vacia la cola");
    return -1;
  }else{
    return queue->queue[queue->front];
  }
}
int isEmpty(Queue* queue){
  if(queue->rear ==-1 ){
    printf("queue lleno");
    return 1;
  }else{
    return 0;
  }
}
int dequeue(Queue* queue){
  queue->front--;
}
int main(){
  Queue q1 = {.front = QUEUE_SIZE-1,.rear = QUEUE_SIZE-1};
  enqueue(1,&q1);
  enqueue(2,&q1);
  enqueue(3,&q1);
  enqueue(4,&q1);
  enqueue(5,&q1);
  enqueue(6,&q1);
  enqueue(7,&q1);
  enqueue(8,&q1);
  
  printf("esta lleno: %d",isEmpty(&q1));
  enqueue(9,&q1);
  enqueue(10,&q1);
  printf("numero en el front. %d",peek(&q1));
  printf("esta lleno: %d",isEmpty(&q1));
  return 0;
}
