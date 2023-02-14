#include <stdio.h>

int funcao_ordenar(int arr1[3]);

int main(){


    int lista_valores[3];
    int i;

    for(i = 0 ; i<3 ; i++){

        printf("Digite os valores da lista(%i): ",i);
        scanf("%i",&lista_valores[i]);
    }

    int resultado;
    resultado = funcao_ordenar(lista_valores[3]);
    printf("%i",resultado) ;  

    return 0;
}
int funcao_ordenar(int arr1[3]){


int i;
int j;
int tmp;
for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElementos do array em ordem crescente:\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n ", arr1[i]);
    }



    return 1;
}