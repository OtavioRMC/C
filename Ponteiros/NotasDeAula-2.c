//Conceito de ponteiros.
#include <stdio.h>


int main ()
{
    /*int x;
    x = 10;
    printf("%i\n",x);
    printf("%i\n",&x);


         São necessários 4 bits para armazenar uma variável do tipo inteiro
        10 é o valor de x.
        x também possui um endereço de memória.
        Como obter o endereço de memória de x?
    

    int *ponteiro;
    ponteiro = &x;

    printf("%i\n",*ponteiro); // imprime o valor de X;
    printf("%i\n",ponteiro); //  Imprime o endereço de memória de X;  
    */

   int x = 10;
   int *ponteiro;

    ponteiro = &x;
   int y = 20;
   
   
    *ponteiro = y; // altera o valor de x 
    
    printf("%i %i \n",x,y);

    return 0;
}