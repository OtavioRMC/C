#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// TIPO aluno
struct aluno {
	char nome[50];
	char curso[40];
	char cpf[12];
	int codigo;
};

int main() {
	struct aluno um_aluno, outro_aluno, alunos_turma[50];

	srand(time(NULL));

	printf(" -- Forneça os dados -- \n");
	printf("Nome: ");
	scanf("%[^\n]", um_aluno.nome);
	printf("Curso: ");
	scanf(" %[^\n]", um_aluno.curso);
	printf("CPF: ");
	scanf(" %s", um_aluno.cpf);

	um_aluno.codigo = 123000 +  rand() % 250000;

	printf("%s do curso %s seu código é %i\n", um_aluno.nome, 
			um_aluno.curso, um_aluno.codigo); 

	return 0;
}
