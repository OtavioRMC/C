//Verifica par ou ímpar.

#include <stdio.h>

 par_impar(int);


int  main(){

     int n;
     int resultado;

    printf("Digite o numero para verificacao: ");
    scanf("%i",&n);

    resultado = par_impar(n);

    printf("%i",resultado);
    return 0;
}
    par_impar(int n){

    if(n%2==0){

        printf("O valor e par\n\n");
        return 1;
    }
    if(n%2!=0){
        printf("O valor e impar\n\n");
        return 0;
    }
}   
