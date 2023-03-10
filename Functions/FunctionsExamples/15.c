#include <stdio.h>



float calcula_media(int array[]);



int main(){


    float resultado;
    int i;
    int qtd;
    int lista[100];

    printf("Digite o tamanho do vetor: ");
    scanf("%i",&qtd);

    for(i = 0; i<qtd ; i++){

        printf("Digite o valor da posicao lista(%i): ",i);
        scanf("%i",&lista[i]);  

    }   


    resultado =  calcula_media(lista[i]);
    printf("%f",resultado);

    return 0;
}
float calcula_media(int array[]){

    int i,soma = 0;
    float media;
    //Estrutura de Acumulação da soma.
    for(i = 0; i<array[i] ; i++){
    
        soma = soma + array[i];
    }

    media = soma/i;   

    return 1;
}