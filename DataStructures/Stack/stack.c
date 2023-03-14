#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>
#include "stack.h"

typedef struct stack{

  int stackSize;
  int stackItemsQuantity;
  int *array;

}Stack;

Stack *stackCreate(int size){

  Stack *myStack = (Stack*)malloc(sizeof(Stack));
  myStack->stackItemsQuantity = 0;
  myStack->stackSize = size;
  myStack->array = (int*)malloc(size*sizeof(int));
  return myStack;

}

void stackFree(Stack *stack){
  free(stack->array);
  free(stack);
}

void stackPush(Stack *stack,int value){
  if(stack->stackItemsQuantity == stack->stackSize) return;
  stack->array[stack->stackItemsQuantity] = value;
  stack->stackItemsQuantity++;
}

int stackPop(Stack *stack){
int valueRemoved;
if(stack->stackItemsQuantity == 0){
  return 1;
}
valueRemoved = stack->array[stack->stackItemsQuantity-1];
stack->array[stack->stackItemsQuantity-1] = (uintptr_t)NULL;
stack->stackItemsQuantity--;
return valueRemoved;
} 

int stackPeek(Stack *stack,int index){
if(stack->stackItemsQuantity == 0){
  return 1;
}
return stack->array[index];
}

int stackTop(Stack *stack){
if(stack->stackItemsQuantity == 0){
  return 1;
}
return stack->array[stack->stackItemsQuantity-1];
}

int stackIsEmpty(Stack *stack){
if(stack->stackItemsQuantity == 0){
  return 1;
}
else{
  return 0;
}
}

int stackIsFull(Stack *stack){
if(stack->stackItemsQuantity == stack->stackSize){
  printf("Stack Is Full");
  return 1;
}
else{
  return 0;
}
}
int main(){
  Stack *stack = stackCreate(3);

  stackPush(stack,1);
  stackPush(stack,2);
  stackPush(stack,3);
  //stackPush(stack,10);
  for(int i = 0; i < stack->stackItemsQuantity;i++){
    printf("%d, ", stackPeek(stack,i));
  }
   stackIsFull(stack);
   stackPop(stack);
   printf("%d ,",stack->array[2]);

/*
  Imprimia certo.
  for(int i = 0; i < stack->stackSize;i++){
    printf("%d, ",stack->array[i]);
  }

  Imprimia mais valores que o tamanho do stack.
  for(int i = 0; i < stack->stackItemsQuantity;i++){
    printf("%d, ",stack->array[i]);
  }

  Obs: Funções empty e full.

*/

  return 0;
}