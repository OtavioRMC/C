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

