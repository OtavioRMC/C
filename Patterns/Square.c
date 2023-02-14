#include <stdio.h>

void main(){

    int tamanho_quadrado,i,j;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d",&tamanho_quadrado);

    for(i=0;i<tamanho_quadrado;++i)
    {
        for(j=0;j<tamanho_quadrado;++j)
            printf("* ");
        printf("\n");   
    }    

}
void ImprimeQuadrado(int n){

    int i,j;

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
            printf("* ");
        printf("\n");   
    }    

}