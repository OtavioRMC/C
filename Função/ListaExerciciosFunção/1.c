#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float volume_esfera(float);


int main(){


    
    float raio ;       
    printf("Digite o raio da esfera em metros: ");
    scanf("%f",&raio);

    printf("O volume da esfera em metros cubicos:  %.2f ",volume_esfera(raio));


    return 0;
}
float volume_esfera(float r){

    float pi = 3.14;
    float volume_esfera;

    volume_esfera = (pi*pow(r,3)*4)/3;

    return volume_esfera;
}   