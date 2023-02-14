/*Alocação estática de memória


    As declarações abaixo alocam/reservam espaço na memória para variáveis definidas em tempo de compilação.


    char c;
    int i;
    int v[10];

    .A alocação é estática, acontece antes que o programa comece a ser executado.
    .Em muitas aplicações, a quantidade de memória necessária só é conhecida durante a execução do programa.

    ***
        int n, v[100];
        printf("Digite o tamanho do vetor: ");
        scanf("%d",&n);

        int i;
        for(i = 0; i < n; i++)
            scanf("%d",&v[i]);
    ***

    -> A alocação dinâmica de memória permite resolver essa situação.


    A função malloc:

    .Aloca um bloco consecutivos de bytes em memória e devolve o endereço desse bloco.

    char *p;
    p = (char*)malloc(1);
    scanf("%c",p)

    .Podemos alocar vetores com a função malloc:

    p = (char*)malloc(4);
    p[0]='a';
    p[1]='b';
    p[2]='c';
    p[3]='\0';

    .Faz parte da biblioteca <stdlib.h>
    .O número de bytes é especificado no argumento da função.
    .O endereço devolvido por malloc é do tipo genérico void *.
    .A função devolve NULL caso aconteça algum erro.
    if(p==NULL) exit(EXIT_FAILURE);
    .Por exemplo se a memória do computador já estiver toda ocupada, malloc não consegue alocar mais espaço.


*/
#include <stdlib.h>

int main()
{

    char *p;
    p = (char*)malloc(100*4);

    int *q = (int*)malloc(100*4); //Cada inteiro utiliza 4 bytes.

    //O operador sizeoff
    char *c = (char*)malloc(10*sizeof(char)); // 10 indica a quantidade de posições do vetor 

    //Malloc com tipos definidos(Registros)

    typedef struct 
    {
        int dia,mes,ano;

    }t_data;
    
    t_data *r = (t_data*) malloc(100*sizeof(t_data)); //Aponta para posições na memória do tipo t_data//

    r[0].dia = 1;
    r[0].ano = 2;
    printf("%i %i",r[0].dia,r[0].ano);

    return 0;
}
/*
    Importante:

    .As varíaveis estáticas "desaparecem automaticamente" assim que a execução da função temina.

    void funcao1(){             
        int a = 1;
        char c ='C';

    }

    void funcao2(){
        int *p;
        p = (int*)malloc(100*sizeof(int));
    }


    .Já as variáveis alocadas dinamicamente continuam a existir 
    mesmo depois que a função termina.

    .A função free:
   -> Desloca/Libera a porção de memória alocada por malloc.

   void funcao2(){

        int *p;
        p = (int*)malloc(100*sizeof(int));

        free(p);
        return;
    }
    .Quando fazemos alocação dinâmica é nossa responsabilidade liberar a memória.

    
*/