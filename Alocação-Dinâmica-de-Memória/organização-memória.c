/*
    A memória do computador  durante a execução de um programa é organizada em
    quatro segmetos:
    ->Código executável: Contém o código binário do programa.

    ->Dados estáticos: Contém variáveis globais e estáticas que existem durante toda
    execução do programa.

    ->Pilha: Contém as variáveis locais que são criadas na execução de uma função
    e depois são removidas da pilha ao término da função.

    ->Heap: Contém as váriaveis criadas por alocação dinâmica.


    Em versões mais atuais da linguagem C é possivel declarar vetores
    de tamanho variavel em tempo de execução;
    O programa será encerrado (segmentation fault) se for usado um valor
    muito grande para n.
    Isso se deve ao fato que o SO limita o que pode ser alocado na Pilha
    durante a execução de uma função.
    Esse limite não existe para o Heap (com exceção do limite da memória do computador).
    

*/
#include <stdio.h>

int main()
{
    int i,n;

    printf("Digite o valor de N: ");
    scanf("%d",&n);

    int v[n]; //Vetor alocado com tamanho n não pré-estabelecido.

    for(i = 0; i < n; i++) 
        v[i]=i;

    for(i =0; i < n; i++ ) 
        printf("%d\n",v[i]);

    return 0;
}