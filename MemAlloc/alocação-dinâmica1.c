#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    int r;
    int g;
    int b;

}Cor;



int main(void)
{
    /*Alocação dinâmica de memória
    *Estático
    [       heap       ]->FUNÇÕES GERAIS(Existentes nas bibliotecas e personalizadas)
                        ->Main
                        (Fazem uso da área de trabalho via ponteiro)
    [   Espaço padrão  ]
    [   Workspace      ]->Definição do espaço de memória.(Alocação, Reserva de memória);

        O quanto de espaço eu preciso alocar?
        ->Quantos bytes eu preciso alocar?
        ->Free(Limpa a memória)
        ->Memory leak.
    mecanismo de definição de espaços de memória.
    malloc-Função de alocação.

    */

   char *pC,**nomes;//Matriz de caracteres.
   float *pF,*vetf;
   Cor *pCor;
   Cor *vetCor;


   pC = (char*)malloc(1); //retorna um endereço não tipado.(a tipagem dele é char).
   *pC = 'S';
   printf("%p--%c\n",pC,*pC);



   pF = (float*)malloc(sizeof(float));
   *pF = 3.14;
   printf("%p--%.2f\n",pF,*pF);

    
    pCor = (Cor*)malloc(sizeof(Cor));

    pCor->r = 128; //(*pCor).r = 128;
    pCor->g = 95;
    pCor->b = 12;

    printf("%p--%i,%i,%i\n",pCor,pCor->r,pCor->g,pCor->b);

    vetf = (float*)malloc(sizeof(float)*100);
    //vetf[20] = 3.4;
    // vetf[0] = 1.1;
    int i=1;
    vetf[0]= 0.1;
    while(i<100)
    {
        vetf[i]=vetf[i-1]+0.1;
        i++;
    }

    vetCor = (Cor*)malloc(sizeof(Cor)*100);
    vetCor[3].r = 128;
    vetCor[3].g = 18;
    vetCor[3].b = 12;
    printf(" VETCOR: %p - %p - %i, %i, %i\n",vetCor,vetCor+3,vetCor[3].r,vetCor[3].g,vetCor[3].b);
    printf("%p - %.2f - %.2f\n",vetf,vetf[10],vetf[38]);




    nomes = (char**)malloc(sizeof(char*)*40);
    for(i=0;i<40;i++)
    {
        nomes[i] = (char*)malloc(sizeof(char)*50);
    }
    strcpy(nomes[0],"Otávio");
    strcpy(nomes[30],"Lucas");
    printf(" NOMES: %p - %p - %s %s, %s\n",nomes,nomes+30,nomes[0],nomes[30]);
    

    return 0;
}