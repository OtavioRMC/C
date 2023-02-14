#include<stdio.h>
#include<stdlib.h>

int main(){

/*
Como imprimir o conteúdo de uma matriz?
*/
//Variaveis de controle
int i,j;

//Definindo Matrizes.
int mat[3][3] = {1,2,3,4,5,6,7,8,9};
char c_mat[2][2] = {'a','b','c','d'};
int m[3][3];

for(i = 0; i < 3; i++)
{
   for(j = 0; j < 3; j++){
    printf("%d ", mat[i][j]);
   }
    printf("\n");
}    
 // printf("%d ",mat[0][i]); Imprimindo linha.
//  printf("%d ",mat[i][0]); Imprimindo Coluna.

//Leitura de uma matriz.

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("Digite o valor da posicao m[%i][%i]",i+1,j+1);
        scanf("%i",&m[i][j]);
    }
}



    return 0;
}