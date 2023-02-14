#include <stdio.h>



int calcula_XY(int , int);


int main()
{


    int x,y;
    int resultado;
    printf("Digite o numero (base): ");
    scanf("%i",&x);
    printf("Digite o expoente:  ");
    scanf("%i",&y);

    resultado = calcula_XY(x,y);
    
    printf("%i",resultado);

 return 0;   
}
int calcula_XY(int x,int z)
{

int soma=x;
int i;

     int i,potencia=1;
    for (i=1; i<=z; i++)
         potencia = potencia*x;
      
      return potencia;
}