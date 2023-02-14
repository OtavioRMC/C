#include <stdio.h>
#include <stdlib.h>

int main()
{
    //O que é e como criar um ponteiro.
    // int *p = &x; == p = &x;
    int x = 10;
    int *p; // P é um ponteiro para uma região de memória que guarda um valor inteiro.
    //Toda variavel possui um endereço unico na memoria.
    //p = x; P não pode armazenar x pois só armazena um endereço de memória.
    p = &x; 
    int b = &p;
    
    printf("%d\n",&x); // É o mesmo que a linha 18 porem em base decimal.
    printf("%p\n",x); //Imprime o valor 10 na base hexadecimal.
    
    
    printf("Valor de x: %d\n",x);
    printf("Endereco de x: %p\n",&x);
    printf("Valor de p: %p\n",p);
    printf("Valor apontado por p : %i\n",*p);
    printf("Endereco de p: %p\n",&p);
    printf("%p",b);
    return 0;
}