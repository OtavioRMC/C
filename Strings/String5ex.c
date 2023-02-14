//Faça um programa que leia uma string e mostre quantas letras diferentes ela tem.
// Comparação.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[50];
    int tam=0;
    int i,j;
    int x;

printf("Digite uma palavra: ");
scanf("%s",palavra);
x=strlen(palavra);

for(i=0;i<=x;i++)
{
    for(j=1;j<=x;j++)
    {
        if(palavra[i]==palavra[j])
        {
            tam++;
        }
        
    }
}

printf("%i",tam);





    return 0;
}