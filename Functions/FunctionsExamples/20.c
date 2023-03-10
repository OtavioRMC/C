#include <stdio.h>

int calcula_somatorio(int);


int main(){

    int numero;
    int resultado;

    printf("Digite o numero para calcular o somatorio: ");
    scanf("%i",&numero);

    resultado  = calcula_somatorio(numero);
    printf("%i",resultado);

    return 0;
}
int calcula_somatorio(int n){

    int i;
    int somatorio = 0;

    for(i = n;i > 0 ; i--){

        somatorio = somatorio + i;
    }

    return somatorio;
}