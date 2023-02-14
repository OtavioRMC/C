/*Erros comuns alocação dinâmica de memória

1-Não alocar memória antes de usar.
***


    int *p;
    int i;
    for(i = 0; i<100; i++)
        p[i]=i;

    for(i = 0; i<100; i++)
        printf("%d\n",p[i]);


***
->Erro de tempo de execução:
'SEGMENTATION FAULT (CORE DUMPED)

2-Não desalocar a memória.

***

    int *p = (int*) malloc(100*sizeof(int));
    int i;
    for(i = 0; i<100; i++)
        p[i]=i;

    for(i = 0; i<100; i++)
        printf("%d\n",p[i]);
//free?? free(p) é necessário.
Não ocorre erro mas é conceitualmente errado.
***

3-Perder o endereço de memória alocada:










*/

