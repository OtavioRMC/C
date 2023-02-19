#include  <stdio.h>


 int duracao_jogo(int,int);

int main()
{

    float hora_inicio;
    float hora_fim;
    int resultado;


    
    printf("Digite a hora de inicio e o horario final: ");
    scanf("%i %i",&hora_inicio,&hora_fim);
    resultado = duracao_jogo(hora_inicio,hora_fim);

    printf("%i",resultado);



    return 0;
}
int duracao_jogo(int inicio, int fim)
{

    int tempo_total;

    tempo_total = fim - inicio;        
    printf("%i",tempo_total);

    return 1;
}