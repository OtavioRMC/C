#include <stdio.h>
#include <math.h>


int main()
{
    // Ponteiro é uma variável.
    // Variável é uma entidade p/armazenamento.
    // A natureza do armazenamento é endereço de memória.
    // Ponteiro é uma variável que armazena um endereço de memória.
    // A memória é endereçada.
    // int x; (É necessário informar o tipo para informar a memória o tipo de tratamento necessário)
    // x é armazenado em $05(Endereço de memória).
    // x = 3;
    // X então recebe 3 no endereço $05;
    // int *px(Ponteiro);
    // é armazenado num endereço $08;
    // Ela é preparada para armezenar um endereço de memória que tem um inteiro.
    //Como atribuir a px um endereço de memória?
    // Não é possivel acessar toda  a memória.
    // Eu conheço implicitamente um endereço de memória de X.
    // px = &x;
    // & indica que eu quero o endereço de X.(extrai o endereço de memória.)

    // $05[        3           ]x
    // $08[      $05           ]px

    //*px = 8;(Tenta colocar 8 dentro de px.)
    //Reindexar o conteúdo de  px e trocar o valor de X.

    int x;
    int *px;
    
    x = 3;
    printf("X = %i\n",x);
    //Retorna o endereço de memória.
    printf("PX = %p\n",px);



    px = &x;
    printf("PX = %i\n",px);



  return 0;
}
