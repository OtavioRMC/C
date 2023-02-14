
#include <stdio.h>
#include <string.h> // strlen
#define Dim 100

/*
Desenvolva um programa que leia uma frase introduzida pelo utilizador e escreva cada
uma das palavras que constituem a frase numa linha separada.
Considere que as palavras estão separadas por um ou mais espaços em branco, podendo também existir espaços no
início e fim da frase.Exemplo: Hoje e Domingo!  
O programa deverá escrever:
Hoje
e
Domingo!
*/

int  main()
{
    char frase[Dim];
    int tamanho,i;

    printf("Introduza uma frase com menos de %d caracteres \n",Dim);
    gets(frase);
    tamanho=strlen(frase);

    // Vamos ignorar o começo da frase
    /*for (i = 0; frase[i] != ' ' ; i++)
    {
        if (frase[i] == ' ')
        {
        espacoantesbrancos++;
        }
    }
    printf("existem %d espacos antes \n", espacoantesbrancos);
*/
        // Impressão da frase
    for (i = 0; i < tamanho; i++)
    {

        if (frase[i] != ' ')
        {
            printf("%c", frase[i]);
        }

        if (frase[i] == ' ')
        {
            printf("\n");
        }

    }
}
