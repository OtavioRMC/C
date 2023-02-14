#include<stdlib.h>
#include<stdio.h>

int main(){

int i,j;
//Matrizes (Arrays bidimensionais).
//É um conjunto bidimensional possuindo linhas e colunas.
//Pode ser acessada atraves de indices (i;j).
//m[0][0]=1 acessa o primeiro elemento da matriz que no caso vale 1.

//Tipo identificador
int vet[10];

int mat1[3][3] = {1,2,3,4,5,6,7,8,9};

//Preenchimento da matriz exemplo.
/*      c0 c1 c2
linha 0  1  2  3
linha 1  4  5  6
linha 2  7  8  9
*/
// O conjunto de elementos vai determinar quantas linhas minha matriz tera.
int mat2[][3]={1,2,3,4,5,6,7}; //o elemento 7 entrará na matriz que sera preenchida com 7 0 0 na ultima linha.
int mat3[3][3] = {0}; //O primeiro elemento é 0 e a matriz será preenchida toda com 0.

float mat4[5][4];
char mat5[10][10];






    return 0;
}
