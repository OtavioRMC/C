/*Manipulando valores dos vetores com ponteiros*/

#include <stdio.h>

int main(){

    int vetor[3] = {13,422,33};

    int *ponteiro = vetor;
    printf("%p\n",ponteiro);

    ponteiro = &vetor[1];
    printf("%p\n",ponteiro);

    ponteiro = &vetor[2];
    printf("%p\n",ponteiro);


    return 0;

}