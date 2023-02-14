#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

//Localizando uma substring dentro de uma string.
 char palavra[50] = {"Good Morning , how are you?" };
 char str[] = {"Good"};
 char *ponteiro;   

ponteiro = strstr(palavra,str);
if(ponteiro!= NULL ) // se for diferente de nulo vai 
    printf("\n%c%c%c%c\n",*ponteiro,*(ponteiro+1),*(ponteiro+2),*(ponteiro+3));

else
    printf("Ponteiro nulo .\n");




    return 0;
}