//*Write a program in C to find the length of a string without using library function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Digite a string: ");
    fgets(str,sizeof str,stdin);

    while(str[i]!='\0')
    {
        i++;
    }
    printf("\n O tamanho da string e: %i",i-1);


    return 0;
}