#include <stdio.h>

int main(void){

    float calcularAreaRetangulo(float x, float y);

     float area = calcularAreaRetangulo(10.0,20.0);
    //A função requer duas variaveis do tipo float.
    //Quando colocado os valores ele esta fazendo uma copia dos valores
    //Atribuindo a variavel area.
    printf("%f",area);
    return 0;
}
float calcularAreaRetangulo(float base, float altura){
                          //Recebe um valor// 
    //Seja o que estiver dentro dos parenteses é o que a função main ira transmitir
    // O valor que a função retornar será um valor float.
    //O primeiro termo é o que a função retorna ex: float
    //entre () é o que a função recebe.
    float area = base * altura;
    //printf("%f",area); --> Adianta o processo de impressao.
    return  area;
}
//Funções são importantes pois generalizam processos repetitivos como por exemplo se eu tivesse que calcular 
//várias áreas diferentes.