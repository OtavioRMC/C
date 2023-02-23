#include <stdio.h>

 void tailRecursion(int n){
  if(n == 0){
    return;
  }
  else{
    printf("%d ",n);
  }
  return tailRecursion(n - 1);
 }

 void nonTailRecursion(int x){
  if(x == 0) 
    return;
  nonTailRecursion(x - 1);
  printf("%d ",x);
 }


int main(){
  tailRecursion(3);
  printf("\n");
  nonTailRecursion(3);
  
  return 0;
}