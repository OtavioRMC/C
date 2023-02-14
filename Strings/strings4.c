#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Biblioteca string permite utilizar funções como strlen e strcat.
int main()
{

char string[50] = {"bola"};
char string1[50]={"abacate"};

//strcat(string,string1);
//printf("\n\t%s\n",string);


//A função vai percorrer a primeira string até encontrar o delimitador da string '\0'.
//Vai remover o "\0" e adicionar a string nova.
//A string1 é adiconada ao fim de outra string.
//Função Comparativa strcmp();
//-> O retorno é um número.
printf("\n\nResultado: %d\n\n", strcmp(string,string1));

// "abacate" vem antes de "bola" gerando -1
// "bola" e "abacater" geram 1
/*  Posiveis Resultados:
    0 -> As strigns são exatamente iguais.
    1 -> A string 1 ocorre depois da string 2
   -1 -> Quando a string 1 ocorre primeiro que a string 2
*/
    return 0;
}