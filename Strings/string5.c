#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50]="String One";
    char string2[50]="String Two";

//Laço de repetição até encontrar a \0 e copiando os valores para a segunda string.
//strcpy(string2,string1);

printf("\nAntes de Copiar:\nPalavra 1: %s\nPalavra 2: %s",string1,string2);

strcpy(string2,string1);

//printf("\n");
printf("\n\nDepois de Copiar:\nPalavra 1: %s\nPalavra 2: %s",string1,string2);






    return 0;
}