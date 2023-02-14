/* 1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário
|   em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor.
|   Por fim imprima o conteudo dos dois vetores.
*/
 #include <stdio.h>
 #include <stdlib.h>

int main()
{
    //Percorrendo o vetor:
    int i;
    //Definindo os vetores;
    int vetor1[10];
    int vetor2[10];

    //Recebendo os valores.
    for(i=0;i<10;i++)
    {
        printf("Digite o valor da posicao v[%i]: ",i+1);
        //Ler os valores
        scanf("%i",&vetor1[i]);
    }

    //Definindo a função do vetor.

    for(i=0;i<10;i++)
    {
        vetor2[i] = vetor1[i] * vetor1[i];
        printf("%i ",vetor2[i]);
    }




    return 0;
}
