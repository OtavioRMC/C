#include <stdio.h>

float funcao(float,char);

int main(){

    float peso_ideal;
    float altura;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f",&altura);

    printf("Digite o seu sexo: ");
    scanf(" %c",&sexo);

    peso_ideal = funcao(altura,sexo);
    printf("%2.2f",peso_ideal);






    return 0;
}
float funcao(float alt,char sexo){


float peso_ideal;
if(sexo=='M'){
peso_ideal = 72.2 * alt-58;
}
if(sexo=='F'){
peso_ideal = 62.1 * alt - 44.7;
}

 return peso_ideal;
}