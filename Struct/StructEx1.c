#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Exercício-1 Structs Lucas

struct vendedores
{
    
    char nome[50];
    int vendas[500];
    
}; 

int main(){
// Cadastro do  Nome dos vendedores
struct vendedores nvendedor[50];
for(int i=0;i<4;i++){

    printf("Digite o Nome do %i vendedor: ",i+1);
    scanf(" %[^\n]",nvendedor[i].nome);

}
//Definindo o número de vendas de cada funcionário
int soma;
//for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        printf("Digite o numero de vendas de %s no mes %i:",nvendedor[0].nome,j+1);
        scanf("%i",nvendedor[j].vendas);
        
        //soma=soma+nvendedor[j].vendas;
    }
//}
for(int j=0;j<3;j++){
    soma=soma+nvendedor[j].vendas;
}
printf("O valor de vendas de Otavio foi de: %i",soma);













    return 0;
}