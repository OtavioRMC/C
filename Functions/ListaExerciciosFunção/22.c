#include <stdio.h>


float soma_fatorial(int);
int fatorial(int);

int main(){

    int numero;
    float resultado;
    printf("S = 1 + 1/1! + 1/2! + 1/3! ... + 1/N!\n");
    printf("Digite um numero para calcular a soma: ");
    scanf("%i",&numero);

    resultado = soma_fatorial(numero);
    printf("%f",resultado);

    return 0;
}
float soma_fatorial(int n){

    int i;
    int fat = 1;
    float soma_total = 0.0;
    

    for(i = 1;i< n + 1;i++)
    {

        soma_total = soma_total + 1/fatorial(i);

    }

    return soma_total;
    
}
  int fatorial(int j){

    int k;
    
    int fat = 1;
    for(k=j;k>1;k--)
    {
    fat=fat*k;
    }
    return fat;
    }