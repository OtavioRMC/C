#include <stdio.h>

void salario_filhos(int filho_por_habitantes[100], int salario[100]);

int main()
{

    int i;
    int num_filhos[100];
    int salario_hab[100];

    for(i = 0; i < 100;i ++)
    {
        printf("Digite o numero de filhos da %i familia: ",i+1);
        scanf("%i",&num_filhos[i]);
        printf("Digite o salario da %i familia: ",i+1);
        scanf("%i",&salario_hab[i]);
    }


    salario_filhos(num_filhos[100],salario_hab[100]);

    return 0;
    
}   
void salario_filhos(int filho_por_habitantes[100],int salario[100]){

int salario = 0;
int soma_salario = 0;
int filhos = 0;
int soma_filho = 0;
float media_filho;
float media_salario;
//Média filhos/hab

for(int i = 0; i < 100; i++)
{
    soma_filho = soma_filho +  filho_por_habitantes[i];
}

media_filho = soma_filho/100;

//Media Salario
for(int i = 0; i < 100; i++)
{
    soma_salario = soma_salario + salario[i];
}
media_salario = soma_salario/100;

printf("Media de filhos/hab: %f",media_filho);
printf("Media de salario/hab: %f",media_salario);
} 
