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

struct notas {
	float b1;
	float b2;
	float nota_final;
};

struct matricula {
	struct aluno um_aluno;
	struct notas uma_nota;
};

struct turma {
	char discplina[40];
	struct matricula matriculados[50];
	int num_matriculados;
};

int main() {

	return 0;
}
