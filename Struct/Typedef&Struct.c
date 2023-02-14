#include <stdio.h>
#include <stdlib.h>

int main(void){


    //Redefinição do tipo float como nota
    typedef float novo_tipo;

    //Declarando as variáveis usando o tipo de dados renomeado
    novo_tipo x = 0, y = 10, z = 5;

    //Typedef com structs

    struct tAluno
    {
        int matricula;
        char nome[30];
    };
    
    //Redefinindo a struct para encurtar o comando na declaração
    typedef struct tAluno tAluno;

    tAluno aluno;

    typedef struct Representa_Carro 
    {
        int placa;
        int ano_de_fabricacao;
        char marca;
    }Carro;
    
    Carro modelo_1;
    Carro modelo_2;
    






    return 0;

}