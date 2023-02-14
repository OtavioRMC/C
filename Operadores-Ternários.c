// Operadores Ternários em c

#include <stdio.h>

int main(){

    int a = 5;
    //int b = 2;
    int b = 5;
    int c = 0;

    //if(a==b) c = 10;
    //else c = 5;

    c = (a == b) ? 10 : 5;
  
    int result = 0;
    
    result = 10 * (a==c) ? 2 : 1;
    
    printf("result: %d\n", result);
    printf(" c: %d\n",c);

    return 0;
}