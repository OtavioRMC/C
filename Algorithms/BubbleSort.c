/*Implementação do algoritmo de ordenação Bubble Sort */
#include <stdlib.h>
#include <stdio.h>

void bubble_sort(int *v,int n);

int main(){

    int vetor[9] = {3,4,5,8,9,13,56,34,66};
     
   bubble_sort(vetor,9);

   printf("\n");
  for (int i = 0; i < 9; ++i)
    printf("%i, ", vetor[i]);



    return 0;
}

void bubble_sort(int *v,int n){
    int i,j;
    int aux;
    for(i = 0; i < n - 1; ++i)
    {
        for(j = n - 1; j > i; --j)
        {
            if(v[j-1] > v[j])
            {
               aux = v[j];
               v[j] = v[j-1];
               v[j-1] = aux;
            }

        }
    }
}    




