#include <stdio.h>
#include <stdlib.h>
#define N 10 

int main(){
  
  int *arrayOne;
  int *arrayTwo;

  arrayOne = (int*)malloc(sizeof(int)*N);
  arrayTwo = (int*)malloc(sizeof(int)*N);

  for(int i = 0; i < N; i++){
    arrayOne[i] = i;
    arrayTwo[i] = arrayOne[i];
  }

  for(int i = 0; i < N; i++)
    printf("%d ",arrayOne[i]);
  
  printf("\n");
  
  for(int i = 0; i < N; i++)
    printf("%d ",arrayTwo[i]);

  free(arrayOne);
  free(arrayTwo);

  arrayOne = NULL;
  arrayTwo = NULL;

  return 0;
}