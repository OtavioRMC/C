/*Ponteiros como parametros para procedimentos*/

#include <stdio.h>
#include <stdlib.h>


void imprime_x(int*);

int main()
{
    int x = 10;

    //Chamada da função;
    imprime_x(&x);
    //X dentro da função main
    printf("X no main: %d\n",x);
    //X só existe dentro do main.
    //Passagem de parametro por referencia.(c nao suporta esse tipo de passagem);

    return 0;
}
void imprime_x(int *n)
{
    printf("%d\n",*n);
    //Altera o valor de X
    *n = 30;
}