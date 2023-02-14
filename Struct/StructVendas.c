#include<stdio.h>
#include<stdlib.h>

 //Cadastro e manipulacao de dados.

char op_menu[7][100] = {
    " Cadastrar vendedor",
    " Cadastrar Venda ",
    " Consultar Vendas (Vendedor/Mes)   ",
    " Consultar total de vendas(Vendedor)",
    " Maior vendedor",
    " Mes de maior faturamento",
    " Sair "
};

char nome_mes[12][5]={"JAN","FEV","MAR","ABR","MAI","JUN","JUL","AGO","SET","OUT","DEZ"};
struct vendedor{
    int numero;
    char nome[50];
    float vendas[12]; //Vendas dos meses//

};


int main(){
      int op;
      int i;
      int qtd_vendedores;  
      int num_vend;
      int mes;
    struct vendedor vendedores[4];


for(i=0;i<4;i++)
{
    vendedores[i].numero = -1;
}

    do
    {
        system("clear");
         printf("---------Menu---------\n");
    
        for(i=0;i<7;i++){
            printf("\t %i \t - \t %s \n",i+1,op_menu[i]);
        }
        //Mostra menu
    //printf("---------Menu--------\n");
    /*printf("\t 1 \t - \t Cadastrar Vendedor\n");
    printf("\t 2 \t - \t Cadastrar Venda\n");
    printf("\t 3 \t - \t Consultar Vendas (Vendedor/Mes)\n");
    printf("\t 4 \t - \t Consultar total de Vendas(Vendendor)\n");
    printf("\t 5 \t - \t Maior vendedor\n");
    printf("\t 6 \t - \t Mes de maior faturamento\n");
    printf("\t 7 \t - \t Sair\n");*/
    //Lê a escolha do usuário.
    scanf("%i",&op);
    op--;

//Processa a escolha do usuário.
switch (op)
{
case 0: printf("---%s---\n",op_menu[op]);
       //Verifica se há espaço no vetor vendedores para cadastrar.
       if(qtd_vendedores<4){
        //Ler o numero  do vendedor
        printf("--Dados do Vendedor--\n");
        printf("Numero: ");
        scanf("%i",&vendedores[qtd_vendedores].numero);
        //Verifica se já existe o vendedor.
        i=0;
        while(i<qtd_vendedores && vendedores[i].numero != vendedores[qtd_vendedores].numero){
            i++;
        }
            if(i<qtd_vendedores){
                 printf("Vendedor Ja Existe no sistema!\n");
            }
            
            else{
                //Le  o restante dos dados  do vendedor
                printf("Nome: ");
                scanf(" %[^\n]",vendedores[qtd_vendedores].nome);
                for(i=0;i<12;i++)
                {
                    vendedores[qtd_vendedores].vendas[i]=0;
                }
                //cadastra o vendedor
                qtd_vendedores++;
            }
       } 
       else
            printf("Todos os vendedores ja estao cadastrados.\n");
    break;



case 1: printf("---%s---\n",op_menu[op]);

printf("Num.Vendedor");
scanf("%i", %num_vend);
//Procura o vendedor no vetor vendedores.
i = 0;
while (i<qtd_vendedores &&  vendedores[i].numero!=num_vend);
i++;

if(i<qtd_vendedores){
    printf("Vendedore %s\n",vendedores[i].nome);
    printf("Mes: ");
    scanf("%i", &mes);
    if(mes<1 || mes>12)
    {
        printf("Mes invalido!!\n");

    }
    else
    {
        mes--;
        printf("Vendas no mes %i: ",mes);
        scanf("%f",&vendedores[i].vendas[mes]);
    }
}
else{
    printf("Vendedor nao encontrado!!\n");
}

    break;
case 2: printf("---%s---\n",op_menu[op]);
//Le o numero do vendedor

printf("")











    break;
case 3: printf("---%s---\n",op_menu[op]);
    break;
case 4:printf("---%s---\n",op_menu[op]);
    break;
case 5: printf("---%s---\n",op_menu[op]);
    break;
case 6: printf("---%s---\n",op_menu[op]); 
    break; 
default: printf("Opção Inválida");                 
}

  system("cls");
    
    } while (op!=6);
    













    return 0;
 }