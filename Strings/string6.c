#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

//Procurando se um caracter existe na string.
// strchr() -> Procura um caracter em uma string.(Primeira Ocorrência).
// strrchr() -> Retorna a ultima ocorrência.(Retornam Ponteiros)

char string[50]={"abacate"};
char *letra; //Vai armazenar um ponteiro para um caracter *letra.

 letra = strchr(string,'a'); // letra recebe o retorno da função(ponteiro).

printf("\n%c\n",*letra); //Conteudo apontado por um ponteiro.

printf("\n%c\n",*(letra + 1)); //Confirmacao da funcao//
//Em sua essencia um ponteiro é um edereço de memoria.
// Aritmetica de ponteiros.
//Garantir que minha funcao retorna um ponteiro para a primeira ocorrencia do caracter.



    return 0;
}