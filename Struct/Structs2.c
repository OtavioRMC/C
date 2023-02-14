#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 /*typedef struct 
{
    int idade;
    char sexo;
    char nome[50];
}Pessoa;
*/
struct Pessoa //->Padrao melhor pra min.
{
    int idade;
    char sexo;
    char nome[50];
};



main()
{
/*Como criar novos tipos de dados com typedef e struct
//Tipos primitivos de dados:
//int float char double
//Como gerenciar por exemplo varios vetores de caracteres alem de outras informacoes adicionais
//Os tipos primitivos seria uma tarefa extremamente complexa.
// A linguagem c permite o programador criar novos tipos de dados
//Ex tipo pessoa
//char nome;
//As structs reduzem a quantidade de vetores .
Ex caixa de papelao com varios tipos de dados primitivos
criar um tipo onde dentro dele estão os tipos primitivos.
*/
struct Pessoa Pessoa;
 //Fazer atribuição de string nao funciona! so funciona no momento que eu defino ela.
 
 Pessoa.idade=20;
 Pessoa.sexo='m';
strcpy(/*string de origem*/Pessoa.nome,"Otavio");
printf("Nome : %s \n",Pessoa.nome);
printf("Idade: %i \n",Pessoa.idade);
printf("Sexo: %c \n",Pessoa.sexo);



    return 0;
}