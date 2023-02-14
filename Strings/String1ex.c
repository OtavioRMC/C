
//*Write a program in c to input a string and print it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    
    printf("Digite uma sequencia de caracteres: ");
    fgets(str,sizeof str,stdin);
    printf("A string digitada e: %s \n",str);

    return 0;
}