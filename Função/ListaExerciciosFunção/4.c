#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  bhaskara(int ,int, int );

int main(){

    int a,b,c;
    float resultado;
    int delta;
    printf("ax^2 + bx + c\n");
   
    printf("Digite o valor de (A) (B) e (C): ");
    scanf(" %i %i %i",&a,&b,&c);

    resultado = bhaskara(a,b,c);
    printf("%f",resultado);


    return 0;
}
int bhaskara(int a ,int b, int c){


int delta;
float x1;
float x2;

if(a > 0){

    delta = pow(b,2) - 4*a*c;

    if(delta < 0){

        printf("Nao existem raiz reais.");

    }   
    if(delta == 0){

        x1 = -b/2*a;
        printf("%f",x1);

    }
    if(delta > 0){

        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        printf("Raiz 1 :%f",x1);
        printf("Raiz 2 :%f",x2);
    }
}
if(a == 0){

        printf("Nao e uma funcao do segundo grau.");
}

return 1;
}