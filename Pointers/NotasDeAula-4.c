#include <stdio.h>


void testaVariavel(int x);
void testaPonteiro(int *pX);

int main(void)
{
   

    int teste = 1;
    int *pTeste;
    pTeste = &teste;

    testaVariavel(teste);
    testaPonteiro(pTeste);

    // printf("%i\n",teste);
    printf("%d\n",teste);
    printf("%d\n",*pTeste);

    return 0;
}
void testaVariavel(int x)
{
    x++;
    printf("%d\n",x);
}
void testaPonteiro(int *pX)
{
    ++*pX;
    // printf("%d\n",*pX);
}