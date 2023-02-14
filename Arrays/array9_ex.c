#include<stdio.h>
#include<stdlib.h>

int main()
{

    //Escreva um programa que lê um vetor N de tamanho 20 e o imprima na tela.
    //em seguida, troque o 1° elemento com o ultimo, o 2° com o penultimo,....
    //até o 10 com 11
    /*
        indice: 0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20
        vetor:  14 
        vetornew:
    */
    int a, fim=19,copia;
    int vetor[20];

    for(a = 0; a < 20 ; a++)
    {
        printf("digite %d: ",a);
        scanf("%d ",&vetor[a]);

    }

    for(a = 0; a < 10; a++ )
    {
        copia=vetor[a];
        vetor[a]=vetor[fim];
        vetor[fim]=copia;
        fim--;
    }


for(a = 0; a < 20; a++)
{
    printf("%2d ",vetor[a]);
}





    return 0;
}