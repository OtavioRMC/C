/*
    Ponteiro para ponteiro.

*/

#include <stdlib.h>
#include <stdio.h>


int main(){

    int x = 100;
    int *y = &x;
    int **z;
    z = &y;
    /*  Revisão
        y = NULL, a variável não aponta para nenhum lugar.
        a variável z é uma variável do tipo ponteiro que aponta para outro ponteiro.
        ERRO lógico:
        z = &a;
        Z é um ponteiro que aponta para outro ponteiro.
        x é uma variável do tipo inteiro  não é um ponteiro.
    */
    printf("Endereco de X: %p\tConteudo de X: %d\n",&x,x);
    printf("Endereco de Y: %p\tConteudo de Y: %p\n",&y,y);
    printf("Conteudo apontado por Y: %d\n",*y);

    printf("Endereco de Z: %p\tConteudo de z: %p\n",&z,z);
    printf("Conteudo apontado por Z: %p\n",**z); //endereço de memória salvo na variavel y
    printf("Imprimindo *Z ou seja o endereço de memória de Y:%p \n",*z);
    
    return 0;
}