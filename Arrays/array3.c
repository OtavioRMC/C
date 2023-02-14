#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int vec[5];


int main()
{


//Gerando numeros pseudoaleatorios nao é possivel criar algo apartir do nada  //
//A função rand() é atribuida uma seed é um valor utilizado para gerar outros //
//numeros Estamos sempre gerando os mesmos numeros.                            // 
// É possivel fornecer um valor diferente para a função rand.

//srand(150); //Parametro para a funcao srand.(Trocando a seed , ele parte sempre de 150)
srand(time(NULL)); //Variavel que é contada no computador que muda a todo tempo é a variavel que conta a hora.

for(i = 0; i < 5; i++)
{
    vec[i]= 1 + rand() % 99;
    printf("%d ", vec[i]);
    printf("\n\n");
}

//Como gerar numeros aleatorios dentro de um intervalo determinado?

 return 0;
 
}