//Vetores são estruturas de dados que armazenam o mesmo 
//tipo de dado , logo são homogeneas
//Para cada valor a ser armazenado na memoria era necessario uma variavel.

#include <stdlib.h>
#include <stdio.h>

int main()
{

//Para ler a idade de um usuario é necessário uma variavel do tipo inteiro:
int idade1;
int i;

//E se for necessario ler a idade de 50 pessoas?
int idade[50];/*é mais  viavel do que utilizar 50 diferentes variaveis
para armazenar o mesmo tipo de dado(idade)
vetor é um conjunto de elementoss do mesmo tipo armezandos de forma sequencial na memoria.
o indice é usado para acessar cada elemento
o indice 0 indica o primeiro elemento.*/

int n[]={1,2,3,4,5,};
int n2[5]={1,2,3};
int n3[5];
int n4[5]={1,2,3,4,5,6}; //Desconsidera o 6 pois ja esta definido como 5
int n5[5]={0};


char letras[100]; //Vetor tipo caracter
char vogais[5]={'a','e','o','u','i'}; //Inicialização do vetor vogais.

//*********Percorrendo o vetor**********//

//cada elemento pode ser acessado atraves de um indice.

printf("%i",n[0]);

//O que acontece se eu colocar & na hora da impressao?.

for(i = 0; i < 5; i++)
    printf("%d",n2[i]);

for(i = 0; i < 5; i++)
    printf("%c",vogais[i]);

//Alterando o conteudo do vetot
for(i = 0; i < 5; i++)
    n2[i]=n[2]*10;




    return 0;
}
