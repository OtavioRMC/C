/*
    Algoritmo de busca binária caso recursivo e não recursivo
*/
#include <stdio.h>
#include <stdlib.h>

int main(){


    int vet[] = {1,5,15,20,24,25,45,67,76}; //x=15.
    int resultado;

    resultado = binarySearch(vet,0,8,22);
    printf("%d",resultado);
    
    return 0;

}
int binarySearch(int *dados, int l, int r, int x){

int m = (l + r) / 2; //l é a posição 0

if(l>r) return -1; /*caso base*/

if(dados[m]==x) return m; /*caso base*/

else if(x > dados[m])
    return binarySearch(dados,m+1,r,x); //Caso Recursivo
else 
    return binarySearch(dados,l,m-1,x); // Caso Recursivo   
}

