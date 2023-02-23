/*Estruturas que contém ponteiros*/

#include <stdio.h>

int main()
{

struct horario
{
    int *pHora;
    int *pMin;
    int *pSegundo;

};

struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMin = &minuto;
    hoje.pSegundo = &segundo;

    printf("Hora - %i\n",*hoje.pHora);
    printf("Minuto - %i\n",*hoje.pMin);
    printf("Segundo - %i\n",*hoje.pSegundo);

    return 0;
}