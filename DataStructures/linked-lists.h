#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H
#include <stdio.h>

// Definindo o Nó;
typedef struct no
{
    int valor;
    No *prox;
}No;

// Funções 
No* criarLista();
void destruirLista(No **L);
void imprimirLista(No *L);

// Funções Operações e Busca
// Adição de Elementos
void adicionarInicio(No **L, int valor);
void adicionarFinal(No **L, int valor);

// Remoção de Elementos
void removerInicio(No **L);
void removerFinal(No **L);
void removerValor(No **L, int valor);

// Busca
int buscaValor(No *L, int valor);

// Implementação
// Código do cliente No *L = criarLista();
No* criarLista(){
    return NULL;
}

#endif