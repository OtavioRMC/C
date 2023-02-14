//Verifica Positivo ou negativo.

#include <stdio.h>

int funcao(int );


int main(){

    int num;
    int resultado;
    printf("Digite o numero: ");
    scanf("%i",&num);


    resultado = funcao(num);
    printf("%i",resultado);



    return 0;
}
int funcao(int n){

if(n>0){
    printf("O numero e positivo\n");
    return 1;
}
if(n<0){
    printf("O numero e negativo\n");
    return 0;
    
}

}