#include <stdio.h>

int main()
{
    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario agora, *depois;
    depois = &agora;
    
    //Precedencia de sinais da linguagem C.
    (*depois).hora=20; // depois->hora.
    (*depois).minuto=20;//depois->minuto.
    (*depois).segundo=20;// depois->segundo.

    printf("%i: %i: %i\n",agora.hora,agora.minuto,agora.segundo);

    int soma = 100;
    struct horario antes;
    antes.hora = soma + depois->segundo;
    antes.minuto = soma + depois->minuto;
    antes.segundo = soma + depois->hora;
    
    // Atribuindo a variavel antes os valores do ponteiro depois ;
    printf("%i: %i: %i:\n",antes.hora,antes.minuto,antes.segundo);

    return 0;
}