/*  Alocação dinâmica de matrizes


    Implementando matrizes dinâmicas como vetores de vetores.
    Criamos um vetor de ponteiros
    para cada ponteiro, criamos um vetor.


    **p[Endereço de memória(1)]---->[1*,2*,3*,4*,5*]
                                        -->[1,2,3]
                                        -->[1,2,3]
                                        -->[1,2,3]
                                        -->[1,2,3]
                                        -->[1,2,3]

    A linha a baixo não necessariamente vem depois da linha de cima.
    A vantagem de usar uma matriz dinamica  é que não é necessário decidir o tempo
    da matriz no tempo de compilação.

    Para cada posição alocada é necessário garantir a liberação da memória (free)

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{

    int **p;
    int i;

    p = (int**) malloc(5*sizeof(int*));
    
    for(i = 0; i < 5; i++)
        p[i] = malloc(3*sizeof(int));

    p[1][1]=2;
    p[2][1]=3;
    p[3][1]=4;
    
    return 0;
}
void LiberaMatriz(int **Matriz,int n)
{
    
    /*
    Para cada linha será dado um free.
    N é o número de linhas da matriz.
    Erro comum é dar o free(matriz)
    o que vai acontecer é que eu vou perder todas as referencias
    */
    int i;
    for( i = 0; i < n; i++)
        free(Matriz[i]);
    free(Matriz);        

}