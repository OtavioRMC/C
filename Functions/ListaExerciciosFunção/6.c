#include <stdio.h>
#include <stdlib.h>


int funcao_dia(int , int , int);

int main(){


    int ano,mes,dia;

    printf("Digite o ano:  ");
    scanf("%i",&ano);
    printf("Digite o mes: ");
    scanf("%i",&mes);
    printf("Digite os dias: ");
    scanf("%i",&dia);
    
    int total_dias;
    total_dias = funcao_dia(ano , mes ,dia);


    return 0;
}
int funcao_dia(int ano , int mes , int dia){


    mes = ano*12;
    dia = ano*365;
    printf("%i anos tem %i meses e %i dias",ano,mes,dia);

    return 1;
}