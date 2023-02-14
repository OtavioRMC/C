//Revisão de Arrays 

#include <stdio.h>
#include <stdlib.h>

int main()
{

int v1[5],i;

/*-----Preenchimento do vetor-----*/

for(i=0;i<5;i++)
{
    printf("Digite o valor da posicao v[%i]:",i);
    scanf("%i",&v1[i]);
}

printf("\n");

/*-----Ordenação Inversa-----*/

for(i=4;i>=0;i--)
{
    printf("%i\n",v1[i]);
}

printf("\n");



    return 0;
}
