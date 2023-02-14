/*  A Função main retorna um tipo int:
    O Comando return 0; informa ao sistema operacional se o programa funcionou
    corretamente
    A Função main pode receber parametros direto do terminal.
    Argc informa a quantidade de parametros (sempre maior ou igual a 1)
    Argv armazena em um vetor de strings os parametros do terminal.
*/



#include <stdio.h>
#include <stdlib.h>

/*int soma(int a,int b)
{
    return a + b;
}
*/


int main(int argc, char **argv)
{
    int i;
    int a,b;
    //Imprimir a + b;
    //

    for(i = 1; i<argc; i++)
        printf("%s\n",argv[i]);

    /*
        ./a.out a b c d e
        agrv[0] = './a.out';
        argv[1] = 'a';
        argv[2] = 'b';
        ...
    */
   if(argc!=3) return -1;

   a = atoi(argv[1]);
   b = atoi(argv[2]);
   
   printf("Soma : %d\n",a+b);

    return 0;
}