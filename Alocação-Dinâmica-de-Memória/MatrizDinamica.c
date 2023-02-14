
/*Alocação Dinamica de Matrizes , Soma e função free.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
  int M, N;

  int **matriz1, **matriz2, **matriz3;

  printf("Informe o tamanho MxN da sua matriz respectivamente: ");
    scanf("%i", &M);
    scanf("%i", &N);

    matriz1 = (int **)malloc(sizeof(int *) * M); // Linha
    matriz2 = (int **)malloc(sizeof(int *) * M);
    matriz3 = (int **)malloc(sizeof(int *) * M);

  for (int i = 0; i < M; i++)
  {
     matriz1[i] = (int *)malloc(sizeof(int) * N);
     matriz2[i] = (int *)malloc(sizeof(int) * N);
     matriz3[i] = (int *)malloc(sizeof(int) * N);
  }



  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      matriz1[i][j] = rand() % 10;
      matriz2[i][j] = rand() % 10;
    }
  }

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      matriz3[i][j] = (matriz1[i][j] + matriz2[i][j]);
    }
  }

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz1[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz2[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz3[i][j]);
    }

    printf("\n");
  }

/*Enderços de memória antes da função free.*/

printf("Endereco da matriz1: %d\n",&matriz1);
printf("Endereco da matriz1: %d\n",&matriz2);
printf("Endereco da matriz1: %d\n",&matriz3);

for (int i = 0; i < M; i++) {
    free(matriz1[i]);
}
free(matriz1);
for (int i = 0; i < M; i++) {
    free(matriz2[i]);
}
free(matriz2);

for (int i = 0; i < M; i++) {
    free(matriz3[i]);
}
free(matriz3);
  
**matriz1 = NULL;
**matriz2 = NULL;
**matriz3 = NULL;

printf("Endereco da matriz1: %d\n",&matriz1);
printf("Endereco da matriz1: %d\n",&matriz2);
printf("Endereco da matriz1: %d\n",&matriz3);


  printf("\n\n\n");
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz1[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz2[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%i  ", matriz3[i][j]);
    }

    printf("\n");
  }


  

  return 0;
}