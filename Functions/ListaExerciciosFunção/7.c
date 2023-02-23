#include <stdio.h>
#include <stdlib.h>

int funcao(int n);

int main(){

    int resultado;
    int num;
    printf("Digite o numero a ser verificado: ");
    scanf("%i",&num);

    //printf("%i\n",num);
    resultado = funcao(num);
    printf("%i\n",resultado);


    return 0;
}
int funcao(int n){

int soma = 0;

for(int i = 0; i<n ;i++){
    
    if(n % i == 0){
        soma = soma + i;
    }
}
if(soma==n){
    printf("O numero %i e um quadrado perfeito.",n);
}
else{
    printf("o numero %i nao e quadrado perfeito.",n);
}
    return 1;
}
