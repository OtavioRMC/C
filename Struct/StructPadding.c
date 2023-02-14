
// #pragma pack(1)

#include <stdio.h>

// Armazena os dados de uma forma mais eficiente.
typedef struct __attribute__((packed, aligned(1))) data {

    char x;
    int y;
    char z;
    
} data;
/*

    struct data
    
    0x00   y  
    0x01   y 
    0x02   y
    0x03   y 
    0x04   x 
    0x05   z
    0x06   padding  
    0x07   padding  






*/
 
/*typedef struct data2
{
    data a;
    data b;
}data2;
*/ 
// Ocupa mais espaço na memória.
typedef struct data2
{
    char x;
    int y;
    char z;
}data2;
 
int main(){

    printf("sizeof(int): %d\n",sizeof(int));
    printf("sizeof(char): %d\n",sizeof(char));

    printf("sizeof(data): %d\n",sizeof(data));
    printf("sizeof(data2): %d\n",sizeof(data2));
    //printf("sizeof(data2): %d\n",sizeof(data2));

    return 0;
}
/*
    Struct padding é uma otimização que o compilador faz que melhora a performance
    ao custo de memória.

    CPU-32BITS
    **Lê os quatros primeiros endereços de memória e depois os quatros restantes
    para conseguir calcular o sizeof(data).
    É problema pois a CPU precisa ler 2 vezes ao invés de uma.

    Endereço Dados

    0x00     x
    0x01     y
    0x02     y
    0x03     y
    0x04     y
    0x05
    0x06
    0x07

    
    alternativa: Padding. (CPU otimizada faz menos leituras.)

    0x00     x
    0x01     padding
    0x02     padding
    0x03     padding
    0x04     y
    0x05     y
    0x06     y
    0x07     y


    A maneira como as variáveis são definidas na struct afetama performante do código.

    typedef struct data
    {   

    char x;
    int y;

    }data;
*/