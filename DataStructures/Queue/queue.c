#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "queue.h"

typedef enum {false,true} bool;

struct queue{
int queueSize;
int queueItemsQuantity;
int *array;
};

Queue *queueCreate(int size){  
Queue *myQueue = (Queue*)malloc(sizeof(Queue));
if(myQueue != NULL){
myQueue->queueItemsQuantity = 0;
myQueue->queueItemsQuantity = size;
myQueue->array = (int*)malloc(size*sizeof(int));
return myQueue;
}
else{
  myQueue = NULL;
  return myQueue;
}
}

void queueFree(Queue *queue){
  free(queue->array);
  free(queue);
}

int queueIsEmpty(Queue *queue){
  if(queue->queueItemsQuantity == 0){
    return true;
  }
  else{
    return false;
  }
}

int queueIsFull(Queue *queue){
  if(queue->queueItemsQuantity == queue->queueSize){
    return true;
  }
  else{
    return false;
  }
}


void queueEnqueue(Queue *queue,int value){
  if(queueIsFull(queue)) return;
  else{
    queue->array[queue->queueItemsQuantity] = value;
    queue->queueItemsQuantity++;
  }
}

void queueShift(Queue *queue){
   for(int i = 0; i < queue->queueItemsQuantity-1; i++){
      queue->array[i] = queue->array[i+1]; 
     } 
}

int queueDequeue(Queue *queue){
  if(queueIsEmpty(queue)){
  printf("Queue is empty!");
  return;
  }
  else{
    int removedValue = queue->array[0];
     queueShift(queue);
     queue->array[queue->queueItemsQuantity-1] = (uintptr_t)NULL;
     queue->queueItemsQuantity--;
    return removedValue;  
  }


}

int queueFirst(Queue *queue){ 
if(queueIsEmpty(queue)){
  return false;
}
else{
  return queue->array[0];
}
}

int queueLast(Queue* queue){
  if(queueIsEmpty(queue)){
    return false;
  }
  else{
    return queue->array[queue->queueItemsQuantity-1];
  }
}