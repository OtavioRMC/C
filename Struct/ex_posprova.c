#include <stdio.h>
#include <time.h>
#include <string.h>
#define Ok 1
#define LOTADO 2
#define OUTROS 3  
#define MAX 100  

/*  Estruturação do Problema
    .Representação de Dados.
    .Operações sobre os Dados.
    Função para entrada outra para a saida de veiculos.
    typedef(Definição de Tipo.)
*/

//Representação de Dados.
typedef struct 
{
    int tipo;
    char placa[10];
    time_t entrada;
    time_t saida;
    float valor_devido;

}Vaga;

 typedef struct 
{
    Vaga vagas[MAX];
    int ocupacao;

}Estacionamento;


//Operações.
//As funções abaixo nao tem leitura de dados do usuário.
//Funções e seus Protótipos.
 int insere_veiculo(Estacionamento*,int,char[10]);
 Vaga remove_veiculo(Estacionamento*,char[10]);
 int busca_veiculo(Estacionamento*,char[10]);

int main ()
{
    Estacionamento est;
    int tipo,opcao_menu;
    char placa[10];

    do
    {
        printf("-----Estacionamento-----");
        printf("1 - Estaciona\n 2 - Retira\n 9 - Sair\n Escolha uma opcao: ");
        scanf("%d",opcao_menu);
        
        
    } while (opcao_menu != 9);
    




    return 0;
}

int insere_veiculo(Estacionamento *estac,int tipo,char placa[10])
{
    if(estac->ocupacao==MAX)
      return LOTADO;
    int ocup = estac->ocupacao;
    estac->vagas[ocup].tipo = tipo;
    strcpy(estac->vagas[ocup].placa,placa);
    estac->vagas[ocup].entrada = time(NULL);
    estac->ocupacao++;
    return Ok;
}

Vaga remove_veiculo(Estacionamento *estac,char placa[10])
{
    int idxv;
    Vaga vg;
    vg.valor_devido = -1;

    // idxv = busca_veiculo(*estac,placa);
    if(idxv >= 0){
        //remove o veiculo;
        vg.tipo = estac->vagas[idxv].tipo;
        strcpy(vg.placa,estac->vagas[idxv].placa);
        vg.entrada = estac->vagas[idxv].entrada;
        vg.saida = time(NULL);
        float vl;
        switch (vg.tipo)
        {
        case 1:  vl = 8; break;
        case 2:  vl = 4; break;
        case 3:  vl = 6; break; 
        default: vl = 0; break;
        }
        double segs = difftime(vg.entrada,vg.saida);
        int h = (int)segs / 3600; // o resto sera em segundos segs |_ 3600;
        int m = ((int)segs % 3600 )/ 60;
        vg.valor_devido = h * vl;
        if(m>15)
          vg.valor_devido += vl; //cobra a mais;
    }

    return vg;
}

int busca_veiculo(Estacionamento *estac,char placa[10])
{
    int i;
    for(i = 0; i < estac->ocupacao;i++)
        if(!strcmp(estac->vagas[i].placa,placa)) // == 0;
            return i;

    return -1;        
}