//Criando uma função que retorna o
// tamanho de uma string.
// Conceito  de função e procedimentos
#include <stdio.h>
int main()
{
    printf("Hello World");
    //Funções e procedimentos são utilizadas 
    //desde a primeira linha de codigo da ling C
    int tam;
    tam = printf("Hello World!");
    //Printf -> Imprime o que   estiver dentro dos parenteses
    //Printf retorna um valor
    // A principal caracteristica de uma função é retornar um valor.
    printf("Tamanho: %i",tam);
    //A principal utilidade é generalizar um processo que será repetido varias vezes dentro do meu programa.
    // É possivel atribuir  o retorno dela a uma variavel.
    //Todo programa tem uma função principal
    // O computador começa na função  main.
    // Quando a função main retorna 0 significa que o programa foi executado e finalizado com sucesso.
    //O int indica o tipo de retono, nesse caso retorna um numero inteiro 0.]
    //Um procedimento pode ou não receber alguns parametros executa alguns passsos e nao retorna nada.
    //scanf retorna a quantidade de elementos lidos.
    return 0; 
}