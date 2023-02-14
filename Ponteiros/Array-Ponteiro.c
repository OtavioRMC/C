#include <stdio.h>



int main(){

    int vet[5] = {1,2,3,4,5};


    // Método 1
    int *ptr  = vet;


    // Método 2
    int *ptr2 = &vet[0];

    printf("ptr: %d\n",vet);
    printf("ptr2: %d\n",&vet[0]);

    return 0;
}