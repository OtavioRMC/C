#include <stdio.h>
/*
  Pass by reference aka pass by pointer.
  Passing by by reference refers to a method of passing the address of
  an argument in the calling function to a corresponding parameter in the
  called function.
*/ 

void add_one(int *a);

int main(){

  int b;
  b = 5;
  printf("&b : %p",&b);
  add_one(&b);
  printf("\n");
  printf("b: %i\n",b);
  

  return 0;
}
void add_one(int *a){
  printf("\n");
  printf("a : %p ", a);
  *a = *a + 1;
}