#include <stdio.h>
#include <stdlib.h>



char menu[5][50] = {"1-Media de salario da populacao",
                    "2-Media do numero de filhos",
                    "3-O maior salario",
                    "4-O percentual de mulheres com salario > 1k",
                    "5-Sair"
};

struct populacao
{
    float salario;
    int idade;
    int num_filhos;
};



int main()
{
    //Variaveis 
    int i;

    int op;//Opcão a ser escolhida.
    //Tipo População
    struct populacao Habitantes[4];
    //Media salario.
    float media_salario;
    float soma = 0.0;

    for(i = 0; i < 5 ; i ++)
    {
        printf("%s\n",menu[i]);
    }

    for(i = 0; i<4; i++)
    {
        printf("Digite o salario do habitante %i",i);
        scanf("%f",&Habitantes[i].salario);
        soma =  soma + Habitantes[i].salario;
          
    }
    media_salario = soma / 4;
    
    
    printf("%f",media_salario);

    return 0;
}
