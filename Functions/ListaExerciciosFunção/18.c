#include <stdio.h>



void tabuada_n(int);

int main(){

    int numero;
    int resultado;

    printf("Digite o numero para calcular a tabuada: ");
    scanf("%i",&numero);

    tabuada_n(numero);
    
    return 0;
}
void tabuada_n(int n){

int i;

	
	for(i=0;i<=n;i++)
	{
		printf("%i x %i= %i\n",i,n,i*n);
		printf("\n");
	}


}