/*
    Tipos abstratos de dados
    
    -Listas Simplesmente encadeada
    -Listas Duplamente Encadeada
    -Filas
    -Pilhas
    -Grafos
    -Árvores

    Definição: Em computação uma estrutura de dados é uma forma de
    armazenar e organizar os dados de modo que possam ser usados de 
    forma eficiente.
    Uma estrutura de dados é um relacionamento lógico entre 
    diferentes tipos de dados visando a resolução de determinado
    problema de forma eficiente.
    Trate-se de um tema fundamental da ciencia da computação,pois a organização.
    de forma coerente dos dados permite a diminuição do custo de execução.
    de um algoritmo em termos de tempo de execução, consumo de memória ou ambos.


    Alocação De Memória: Estática
    -Não existe preocupação em reservar espaço para as variaveis
    (Variaveis,parametro,retorno de função e endereço de outras)
    -Pilha(Stack)
    -Armazenamento sequencial



#include <stdio.h>
#include <stdlib.h>


int soma (int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int x = 2;
    int y = 3;
    int z = soma(x,y);
    printf("Soma = %d",z);
    return 0;
}

-No código acima as variáveis são armazenadas sequencialmente na memória
-Passo 1: x = 2
-Passo 2: y = 3
-Passo 3: soma(x,y) Reserva espaço para A e para B
-Passo 4: C = 5
-Passo 5: z = 5


Heap é maior porém mais lenta.
tipo de dados 
-Definem dominio
-Definem operações

TAD: Operações Básicas
.Criação do TAD
.Inserção de um novo elemento no TAD
.Remoção de um elemento do TAD
.Acesso a um elemento do TAD
.Destruição do TAD
*/
#include <stdlib.h>
#include <math.h>


struct ponto{
    float x;
    float y;
};
typedef struct ponto Ponto;

//Cria um novo ponto.
Ponto* Cria_ponto(float x,float y);

//Libera Ponto.
void Libera_Ponto(Ponto* p);

//Acessa os valores x e y de um ponto.
int Acessa_Ponto(Ponto* p, float* x, float* y);

//Atribuição de valores aos pontos.
int Atribui_Valores(Ponto* p,float x,float y);

//Calcula distância entre dois pontos.
float Calcula_Distancia(Ponto* p1,Ponto* p2);