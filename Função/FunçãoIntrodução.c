/*
    *Funções na linguagem C

    Podemos agrupar um conjunto de comandos desenvolvidos para uma tarefa específica
    em uma função.
    Funções são úteis para modularizar um código:
    -Permite o reaproveitamento de código (minimiza os erros e facilita alterações).
    -Separa o programa em partes que possam ser logicamente compreendidas de forma 
    isolada.
    *Uma função é declarada da seguinte forma:
    tipo nome(tipo parametro1, tipo parametro2,..tipo parametro N){
        /Comandos
        return valor;
    }

*/


#include <stdio.h>
#include <stdlib.h>

double fahrenheitToCelsius(double);

int main(){

    /*É preciso passar como parametro um valor double, que será atribuido a F*/

    return 0;
}
double fahrenheitToCelsius(double F){
    double C;
    C = (F-32.0)*1.8;
    return C;
}