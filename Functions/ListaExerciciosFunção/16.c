#include <stdio.h>

int calcula_fatorial(int);

int main(){

    int resultado;
    int numero;
    printf("Digite o numero para calcular o fatorial: ");
    scanf("%i",&numero);


    resultado = calcula_fatorial(numero);
    printf("%i",resultado);

    return 0;
}
int calcula_fatorial(int n){

    int fat = 1;

    for(int i = n; i > 1; i--){

        fat = fat * i;

    }



    return fat;
}
