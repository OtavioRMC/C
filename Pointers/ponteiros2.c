#include <stdlib.h>
#include <stdio.h>


//De quanta memória um ponteiro precisa?


int main()
{

    int *p;
    //O endereço de memória sempre vai ter o mesmo tamanho nao importa o tipo da variavel.
    
    printf("Quantidade de bytes necessarias para armazenar uma variavel inteira: %d",sizeof(int));
    printf("%d",sizeof(p));




    return 0;
}