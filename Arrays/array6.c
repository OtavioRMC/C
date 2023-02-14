#include <stdlib.h>
#include <stdio.h>
#include <time.h>


 //Somando duas Matrizes.
int main()
{
    int m[2][2] = {1,2,3,4};
    int m2[2][2]= {1,1,1,1};
    int m3[2][2];
    int i,j;

   /* for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++) 
        {
            m3[i][j]=m[i][j] + m2[i][j];
            printf("%i ",m3[i][j]);
        }


        printf("\n");
    }
   */    
    //Como gerar numeros aleatorios para preencher matrizes?
    //Função randd() e srand.


srand(time(NULL));

for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++) 
        {
            m3[i][j]= rand() % 100;
            printf("%i ",m3[i][j]);
        }


        printf("\n");
    }





    return 0;
}