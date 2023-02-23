/*
    .O problema da busca

    Temos uma coleção de elementos, onde cada elemento possui um identificador
    (chave única),e recebemos uma chave para a busca.
    Devemos encontrar o elemento da coleção que possui a mesma chave ou identificar
    que ele não existe.

    Observações:
    - O valor da chave será o própio valor de cada inteiro
    - Os algoritmos servem para qualquer coleção de elementos que possuam chaves
    que possam ser comparadas.

    Vamos criar a função
    A função deve retornar o índice do vetor que contém a chave ou -1 caso
    a chave não esteja no vetor.
    int busca_sequencial(int *dados,int n,int x); // x é a chave de busca

    A Busca Sequencial é o algoritmos de busca mais simples;
    ->Percorre todo o vetor comparando a chave com o valor de cada posição
    ->Se for igual para alguma posição, devolve essa posição.
    ->Se todo o vetor foi percorrido então devolva -1;

*/
#include <stdio.h>
#include <stdlib.h>

 int busca_sequencial(int*,int,int);
  

int main(){

    int pos;
    int vet[] = {20, 5, 15,  24, 67, 45, 1, 76, -1, -1}; //-1 indica posição não usada.

    pos = busca_sequencial(vet,9,45);
    printf("O indice da chave 45 no vetor e: %d",pos);
    

    return 0;
}
int busca_sequencial(int *dados,int n, int x){
    int i;
    for(i = 0; i < n; i++)
        if(dados[i]==x)
            return i;
            
    return -1;
}