//Tipos heterogeos de dados
//Vetores e matrizes sao tipos homogeneos
//1) Variaveis comuns -> armazenam um valor
//2) ->vetores e matrizes armazenam varios valores do mesmo tipo.
//3)->A homogeinidade sao valores do mesmo tipo
//Ex de tipos -> int float char double
// Dados tem significado e cada dado deve ter um tipo especifico.
// A natureza da informacao e a mesma.
// Tipos fixos de dados , sao de natureza simples.
// Por exemplo para representar um aluno sao necessarias varias informacoes
//Uma peca de xadrez pode ser representada pelo nome e pela sua posicao , cor.
// sao estruturas que sao formadas por outros elementos , ou seja sao atributos.
//Como representar as caracteristicas de um aluno?



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//TIPO ALUNO 
struct aluno{
	char nome[50];
	char curso[20];
	char cpf[12];
	int codigo;
};

struct notas{
	float b1;
	float b2;
	float nota_final;
};
struct matricula{
	struct aluno aluno;
	struct notas nota;
};
struct turma{
	struct matricula matriculados[50];
	int num_matriculados;
	char disciplina[40];
};
int main(){
	srand(time(NULL));
	struct aluno alunos_turma[50];
	int num_alunos=0;	
	//char nome[50], curso[50], cpf[50];
	//int codigo;
	// Se eu quisesse representar mais de um aluno eu teria que criar varias variaveis.
	// Eu estou na verdade representando nomes, cursos e cpfs.
	// Tipo que chama aluno iria representar mais de um aluno.	
	// Criar meus propios tipos de dados de caracteristicas diferentes de dados.
	// Base para programacao orientada a objetos
	// Structs
	// TAD -> define structs e funcoes que operam sobre essas structs.



	// Em POO -> as classes vao possuir atribuitos , metodos.(funcoes que operam sobre um determinado objeto).
	for(int i=0; i<10; i++){
	
	printf("--Forneca os dados--\n");
	
	printf("Nome: ");
	scanf(" %[^\n]",alunos_turma[i].nome);
	
	printf("Curso: ");
	scanf(" %[^\n]",alunos_turma[i].curso);
	
	printf("CPF: ");
	scanf(" %s",alunos_turma[i].cpf);
	
	
	//printf("Codigo: ");
   //scanf("%i",&um-aluno.codigo);
   
	alunos_turma[i].codigo = rand() % 250000;
	num_alunos++;
	}
	
	
	for(int i=0; i<num_alunos;i++)
	printf("%s do curso %s seu codigo e %i\n",alunos_turma[i].nome,alunos_turma[i].curso,alunos_turma[i].codigo);
		
	
	
	//printf("%d",RAND_MAX);
	
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

