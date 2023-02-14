#include <stdio.h>

float soma_de_s(int);

int main(){

    float resultado;
    int numero;

    printf("Digite o numero para calcular a soma da sequencia 1 + 1/2 ... 1/n: ");
    scanf("%i",&numero);
    
     resultado = soma_de_s(numero);
    printf("%f",soma_de_s(numero));

    return 0;
}
float soma_de_s(int n){

    float soma_total = 1.0;
    float i;

    for(i = 2.0 ; i < n + 1 ; i++){
      soma_total = soma_total  + (1.0/i);
    }
  

    return soma_total;
    
}

