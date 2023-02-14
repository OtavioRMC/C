#include <stdio.h>


int maior_menor(int array[50]);

int main(){

    int i;
    int lista[50];
    int resultado;


    for(i=0;i<50;i++)
	{
		printf("Digite a %i .a posicao do vetor: ",i+1);
		scanf("%i",&lista[i]);
	}

    
    resultado = maior_menor(lista[50]);
    printf("%i",resultado);

    return 0;
}
int maior_menor(int array[3]){


    int i;
    int maior,menor;
	
	 maior=array[0];
	 menor=array[0];
	 
	for(i=0;i<3;i++)
	{
		if(array[i]>maior)
		maior=array[i];
		if(array[i]<menor)
		menor=array[i];
	}
	printf("O maior elemento e: %i\n",maior);
	printf("O menor elemento e: %i\n",menor);

    return maior,menor;
}
