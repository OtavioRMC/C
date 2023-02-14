#include <stdio.h>
#include <stdlib.h>


/*Aluno:
    -nome (string)
    -id (string)
    -idade (int)
    -notas (int array)
*/
struct Aluno
{
    char nome[50];
    char id[50];
    int age;
    int notas[5];
};

int main()
{
    struct Aluno Otavio;
    Otavio.age = 18;
    printf("Age : %i",Otavio.age);
    
   return 0;
}