// Implementação do algoritmo de ordenação Insertion Sort.

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int*,int);
void changeVarValue(int *a,int *b);

int main(){


    int array[10],i;

    for ( i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
    }
    
    for (int i = 0; i < 10; ++i)
        printf("%i, ", array[i]);

    insertion_sort(array,10);

        printf("\n");

    for (int i = 0; i < 10; ++i)
        printf("%i, ", array[i]);
    


    return 0;
}
void insertionSort(int *v, int n){

    int i,j;
    int aux;

    for(i = 1; i < n; ++i){
        for(j = i; j > 0; --j){
            if(v[j-1]>v[j]){

                 changeVarValue(&v[j],&v[j-1]);
            }
        }
    }


}
void changeVarValue(int *a,int *b){

int aux;
aux = *a;
*a = *b;
*b = aux;

}
