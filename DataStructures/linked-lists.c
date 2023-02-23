/*
    Implementação Liked Lists

    -Alocamos memória conforme o necessário
    -Guardamos um ponteiro para a estrutura em uma variável
    -O primeiro nó aponta para o segundo
    -O segundo nó para o terceiro
    -O último nó aponta para NULL.

    Definições:

    Nó : Elemento alocado dinamicamente que contém
    -Um conjunto de dados
    -Um ponteiro para outro nó

    Lista ligada :  Conjunto de Nós ligados entre si de maneira sequencial.

    Quando usar?

    -Quando não sabemos antecipadamente que tamanho a coleção pode alcançar
    -Permite inserir e remover itens de nos em qualquer posição.
    -Não permitem acesso direto a um nó

    - Endereço de uma lista ligada:
    . O endereço de uma lista é o endereço de sua primeira célula
    . A lista está vazia (não tem nó) quando L == NULL.

    Inserção de elemento no final da lista:
    -Percorrer a lista até o final e insere um novo nó.

    Evitando problemas de compilação:
    #ifndef verifica se LINKED_LISTS_H foi definida
    Inserimos o código da interface entre o #define e o #endif
    - Sempre que linked_lists.h for importada a interface é inserida apenas
    se LINKED_LISTS_H ainda não foi definida.


*/
#include <stdlib.h>
#include <stdio.h>


// Definindo o Nó
// No *L é um ponteiro para o tipo No.

typedef struct no
{
    int valor;
    struct no *prox;

}No;

// Definindo a Lista
typedef struct Lista
{
    No *inicio;
    int tam;

}Lista;

void insertBeginning(Lista *p,int valor){

    No *novo_No = (No*) malloc(sizeof(No));
    novo_No->valor = valor;
    novo_No->prox = p->inicio;
    p->inicio = novo_No;
    p->tam++;

}
void printLinkedList(Lista *q){

    No *inicio = q->inicio;
    printf("Tamanho da Lista: %d\n",q->tam);
    while(inicio!=NULL){
         printf("%d\n",inicio->valor);
         inicio = inicio->prox;
    }
    printf("\n\n");
}


int main(){

    Lista L;
    int opcao,valor;

    L.inicio = NULL;
    L.tam = 0;
      
    do
    {
        printf("1 - Inserir no Inicio\n2 - Imprimir\n3 - Sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1: 
             printf("Digite o valora  ser inserido: "); 
             scanf("%d",&valor);

             insertBeginning(&L,valor);  
            break;
        case 2:
              printLinkedList(&L);
            break;
        case 3:
             printf("Finalizando...\n");
        default:
             printf("ERRO - INVALIDO");         
        }

    } while (opcao != 3);

    return 0;
}
