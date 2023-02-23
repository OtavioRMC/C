// E.g of an indirect recursive function


#include <stdio.h>

void odd();
void even();
int n = 1;

int main(){
  odd();
  return 0;
}
void odd(){
  if(n <= 10){
    printf(" %d ",n+1);
    n++;
    even();
  }
  return;
}

void even(){
  if(n <= 10){
    printf("%d",n-1);
    n++;
    odd();
  }
  return;
}