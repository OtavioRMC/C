//Ponteiros char double e int.
#include <stdio.h>

int main()
{

    int x = 10;
    float y = 20.50;
    char z = 'A';

   //int *pX; // *pX indica o valor que o ponteiro está apontando;
    //pX = &x; // *pX = &x o px recebe o valor do endereço de memoria de x;
 
    int *pX = &x;
    float *pY = &y;
    char *pZ = &z;
    int *endereco_pX = &pX;
    int endereco_pY = &pY;
    int endereo_pZ = &pZ;


    printf("Endereco pX = %p\n",&pX);
    printf("Endereco pY = %p\n",&pY);
    printf("Endereco pZ = %p\n",&pZ);    

    printf("\n");

    printf("Endereco x = %p - Valor x = %i\n",pX,*pX);
    printf("Endereco y = %p - Valor y = %.2f\n",pY,*pY);
    printf("Endereco z = %p - Valor z = %c\n",pZ,*pZ);

    printf("\n");
    
    int *resultado;
    resultado = 6422276; // endereço de X;
    
    
    printf("%i\n",resultado);
    printf("%i\n",*resultado);

    double  soma =  *pX + *pY;
    // soma = pX + pY Não é possivel somar dois endereços de memória.
    printf("Soma pX + pY = %.2f\n",soma);



    return 0;
}