#include <stdio.h>
#include <stdlib.h>

int main()
{

/* O que é uma strings?
  -> Sequência de caracteres ( trexo de texto).
  -> Cadeia de caracteres.
  -> Uma string é um vetor.
  -> vetor de caracteres.
*/

char palavras[] = {"Hello , Im learning strings.\n"};
printf("\n");
printf("%s",palavras);
//printf("%c",palavras[0]) --> Imprime o conteudo da primeira posicao do vetor nesse caso H.
//char string[200]={"Olá"} --> O computador irá alocar mais memoria que nesse caso nao esta snd utilizada
// em programas pequenos isso nao é problema entretanto em programas maiores pode resultar na perca de desempenho.
// leitura de uma string com a função scanf.

printf("Digite seu nome: ");
//Por padrao a função scanf le até o primeiro espaco logo para escrever um nome por ex seria :Otavio_Ribeiro.
scanf("%[^\n]", palavras);
printf("%s",palavras);
// Sobreposição de dados na memória é algo comum e muito serio
// tomar cuidado ao definir a string [5] = {"adwdaddwdwdw"} -> será alocado mais espaços necessários
// 1) A função scanf nao leva em consideracao o tamanho do vetor logo tudo que for digitado será armazenado 
// o que pode eventualmente se tornar um problema.
// 2) a Função scanf para quando encontra um espaço.

 
    return 0;
}