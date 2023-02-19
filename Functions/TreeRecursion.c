#include <stdio.h>
#include <stdlib.h> 
 
 
 void printUntilZero(int x){
  if(x < 0) return ;
  printUntilZero(x-1);
  printUntilZero(x-2);
  printf("Recursao valor: %d/n",x);
 }
  

int main(){
  printUntilZero(3);
  return 0;
}