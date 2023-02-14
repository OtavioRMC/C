#include <stdio.h>
#include <stdlib.h>

char op_menu[7][40] = {
	"Cadastrar Vendedor",
	"Cadastrar Venda",
	"Consultar Vendas (Vendedor/Mes)",
	"Consultar Total de Vendas (Vendedor)",
	"Maior Vendedor",
	"Mes de Maior Faturamento",
	"Sair"
};

char nome_mes[12][5] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
	"JUL", "AGO", "SET", "OUT", "NOV", "DEZ" };

struct vendedor {
	int numero;
	char nome[50];
	float vendas[12];
};

int main() {
	int op, i, j, qtd_vendedores = 0, numvend = 0, mes = 0;
	struct vendedor vendedores[4];

	do {
		system("cls");
		// Mostra o menu
		printf("------------------ Menu ------------------\n");
		for (i=0; i<7; i++)
			printf("\t %i - %s\n", i+1, op_menu[i]);
		// Lê a escolha do usuário
		scanf("%i", &op);
		op--;

		// Processa a escolha do usuário
		switch (op) {
			case 0: printf("--- %s ---\n", op_menu[op]);
					// Verifica se há espaço no vetor vendedores para cadastrar
					if (qtd_vendedores < 4) {
						// Lê o número do vendedor
						printf("-- Dados do vendedor --\n");
						printf("Número: ");
						scanf("%i", &vendedores[qtd_vendedores].numero);
						// Verifica se já existe o vendedor
						i = 0;
						while (i<qtd_vendedores && 
						  vendedores[i].numero != vendedores[qtd_vendedores].numero)
							i++;
						if (i<qtd_vendedores)
							printf("Vendedor já existe no sistema!!!\n");
						else {
							// Le o restante dos dados do vendedor
							printf("Nome: ");
							scanf(" %[^\n]", vendedores[qtd_vendedores].nome);
							// Zera todas as vendas do novo vendedor
							for (i=0; i<12; i++)
								vendedores[qtd_vendedores].vendas[i] = 0;
							// Cadastra o vendedor
							qtd_vendedores++;
						}
					} 
					else 
						printf("Todos os vendedores já estão cadastrados!!!\n");
					break;
			case 1:	printf("--- %s ---\n", op_menu[op]);
					printf("Num. vendedor: ");
					scanf("%i", &numvend);
					// Procura o vendedor no vetor vendedores
					i = 0;
					while (i<qtd_vendedores &&
							vendedores[i].numero != numvend)
						i++;
					if (i<qtd_vendedores) {
						// Le o mes desejado
						printf("Vendedor %s\n", vendedores[i].nome);
						printf("Mês: ");
						scanf("%i", &mes);
						if (mes < 1 || mes > 12)
							printf("Mês inválido!!\n");
						else {
							// Le as vendas do mes
							mes--;
							printf("Vendas em %s: ",nome_mes[mes]);
							scanf("%f", &vendedores[i].vendas[mes]);
						}
					}
					else {
						printf("Vendedor não encontrado!!\n");
					}
					break;
			case 2: printf("--- %s ---\n", op_menu[op]);
					// Le o número do vendedor
					printf("Num. Vendedor: ");
					scanf("%i", &numvend);
					// Procura o vendedor no vetor vendedores
					i = 0;
					while (i<qtd_vendedores &&
							vendedores[i].numero != numvend)
						i++;
					if (i<qtd_vendedores) {
						printf("Vendedor: %s\n", vendedores[i].nome);
						printf("-- Vendas por Mês --\n");
						for (j=0; j<12; j++)
							printf("%s: R$ %.2f\n", nome_mes[j], vendedores[i].vendas[j]);
					}
					else {
						printf("Vendedor não encontrado!!\n");
					}

					break;
			case 3: printf("--- %s ---\n", op_menu[op]);
					break;
			case 4: printf("--- %s ---\n", op_menu[op]);
					break;
			case 5: printf("--- %s ---\n", op_menu[op]);
					break;
			case 6: printf("--- %s ---\n", op_menu[op]);
					break;
			default: printf("Opção Inválida!!! Seu animal\n");
		}
		printf("Pressione qualquer tecla para continuar ....\n");
		
	} while (op != 6);

	


	return 0;
}
