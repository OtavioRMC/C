// Implementação do algoritmo de ordenação Insertion Sort.

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int*,int);
void troca(int *a,int *b);

int main(){


    int vetor[10],i;

    for ( i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 100;
    }
    
    for (int i = 0; i < 10; ++i)
        printf("%i, ", vetor[i]);

    insertion_sort(vetor,10);

        printf("\n");

    for (int i = 0; i < 10; ++i)
        printf("%i, ", vetor[i]);
    


    return 0;
}
void insertion_sort(int *v, int n){

    int i,j;
    int aux;

    for(i = 1; i < n; ++i){
        for(j = i; j > 0; --j){
            if(v[j-1]>v[j]){

                 troca(&v[j],&v[j-1]);
            }
        }
    }


}
void troca(int *a,int *b){

int aux;
aux = *a;
*a = *b;
*b = aux;

}
