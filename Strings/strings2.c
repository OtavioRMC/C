#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
// \n na tabela ascii significa fim de linha, ou seja quando apertado o enter.
int i;
int tam=0;
//char string[55]={"Oi. Vamos aprender strings em C"};
//scanf("%20[^\n]",string)7
//printf("Digite seu nome: ");
//gets(string);
//printf("%s",string);
// a função gets() tem comportamento semelhante a função scanf padrao.
// A função pode gerar um problema de instabilidade dentro de um software profissonal.
// Função fgets() -> OBTENÇÃO DE STRINGS ATRAVÉS DO TECLADO.
//fgets(string,15,stdin); // File gets strings, vai ler até a posicao 14 e na 15 reservara espaço indicando o fim da string
//Como identificar o final de uma string?

/*for(i = 0; i < 55; i++)
    printf("%d = %d\n",i,string[i]);
printf("\n");
*/
/*i=0;
while(string[i] != '\0') 
    // \0 indica o fim da strings em espaço.
    //printf("%d = %c\n",i,string[i++]);
    i++;
    tam++;
printf("\n");
printf("Tamanho:%d \n ",tam);
Como descobrir o tamanho de uma string. usando While
*/
char string[20];
/*i=0;
while(string[i] != '\0')
{
    tam++;
    i++;
}

printf("Tamanho: %d",tam);
*/
printf("Digite uma palavra: ");
scanf("%s",string);
i=0;
while(string[i] != '\0')
{
    if(string[i]=='\n')
        string[i]='\0';
    i++;    
}
i=0;
while(string[i] != '\0')
{
    tam++;
    i++;
}
printf("Tamanho: %d",tam);


    return 0;
}