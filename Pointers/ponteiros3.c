#include <stdlib.h>
#include <stdio.h>


int main()
{
   //Porque nao é utilizado o & ao ler uma string.  

    char str[100];
    scanf("%100[^\n]",str); /*%[^\n]*/
    printf("%s",str);

    printf("%p\n",str);
    printf("%p\n",&str);
    printf("%p\n",&str[0]);
    printf("%p\n",str[0]); // imprime o valor do primeiro caractere em hexadecimal.
    


    return 0;
}