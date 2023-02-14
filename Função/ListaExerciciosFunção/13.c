#include <stdio.h>

void verifica_triangulo(int ,int ,int);

int main()
{

int lado1,lado2,lado3;
printf("Digite os lados do triangulo:  ");
scanf(" %i %i %i",&lado1,&lado2,&lado3);

verifica_triangulo(lado1,lado2,lado3);


    return 0;
}
void verifica_triangulo(int x, int y, int z)
{    

    if(x + y > z && y + z > x && x+ z > y){
        printf("Os 3 lados formam um triangulo!\n");
        if(x == y && x == z)
            printf("Equilatero\n");
        else
            if(x == y || x == z || z == y)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}




