#include <stdlib.h>
#include <stdio.h>



int funcao(float);

int main(){

    float seg;
    float total;

    printf("Digite o tempo em segundos: ");
    scanf("%f",&seg);

    total = funcao(seg);
    printf("%2.2f",total);


    return 0;
}
int funcao(float n){

float h;
float min;
float s;

min = n/60;
h = n/3600;
s = n;

printf("%1.2f horas, %1.2f minutos, %1.2f segundos\n",h,min,s);

return 1;
}