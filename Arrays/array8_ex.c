#include<stdio.h>
#include<stdlib.h>

//Faça um programa que some dois vetores e armazene em um terceiro.
int i;
int v1[5];
int v2[5];
int v3[5];

int main()
{

for(i=0;i<5;i++)
{
    printf("Digite o valor da posicao v1[%i]: ",i);
    scanf("%d",&v1[i]);
}

for(i=0;i<5;i++)
{
    printf("Digite o valor da posicao v2[%i]: ",i);
    scanf("%d",&v2[i]);
    
}

for(i=0;i<5;i++)
{
    v3[i]=v1[i] + v2[i];
    printf("%i ",v3[i]);
}

    return 0;
}