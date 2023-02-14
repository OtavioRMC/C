// Ponteiros e vetores


#include <stdio.h>

int main(void){

    int vetor[3] = {1,2,3};

    int x = 10,*p;
    
    p = &x;
 
    int *ponteiro = vetor;
    int *ponteiro2 = &vetor[1];

    //Aponta para o primeiro valor do meu vetor.
    printf("%d",*ponteiro);

    //Aponta para a segunda posição do vetor.
    printf("%d",*ponteiro2);

    return 0;
}