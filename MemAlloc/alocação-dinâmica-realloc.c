/*
    Redimensionamento de memória.
    Pode ser necessário alterar, durante a execução do programa o tamanho
    de um bloco de bytes que foi alocado.
    Por exemplo , durante a leitura de um arquivo que se revela maior que o esperado.

    A função realloc recebe o endereço de bloco previamente alocado e o número de bytes
    que o bloco redimensionado deve ter.

    int *p = (int*) malloc (10*sizeof(int));
    ...
    p = realloc(p,20*sizeof(int));
    ...

    se p == NULL um novo bloco será alocado.


    Alguns detalhes: 
    .Se o novo bloco for uma extensão do original, seu endereço é o mesmo(e o conteudo nao precisa ser copiado)
    .Caso contrário, realloc copia o conteúdo do bloco original para o novo e libera o bloco original 
    invocando (free);



*/
#include <stdlib.h>
#include <stdio.h>

int main ()
{

    int *p = (int*)malloc(2*sizeof(int));

    p[0] = 10;
    p[1] = 20;

    int *q = (int*)realloc(p,3*sizeof(int));

    q[2] = 30;
    int i;

    for(i = 0; i > 3; i++)
    {
        printf("%d",q[i]);
    } 

    

    return 0;
}