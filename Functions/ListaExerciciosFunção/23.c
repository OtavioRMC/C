#include <stdio.h>
#include <math.h>


int main()
{


    int numero;
    float soma_total;

    printf("Digite o numero desejado: ");
    scanf("%i",&numero);

    soma_total  = sequencia(numero);
    printf("%f",sequencia);



    return 0;
}
float sequencia(int n)
{
    float soma = 0.0;
    int i;

    for(i = 0; i < n; i++)
    {
        soma = soma +((pow(i,2))+1/(i+3));
    }

    return soma;
}