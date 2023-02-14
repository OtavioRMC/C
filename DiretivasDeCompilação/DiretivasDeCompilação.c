// Ifdef & ifndef

#include <stdio.h>

# define LED 3
//# define LINUX
# define WINDOWS

# define DEBUG_MODE
// undef DEBUG_MODE
# ifdef LINUX
    # define BUFFER_SIZE 100
# endif

# ifdef MAC
    # define BUFFER_SIZE 200
# endif

# ifdef WINDOWS
    # define BUFFER_SIZE 300
# endif    
/*
    Na primeira fase de compilção do programa(pre-processamento)
    qualquer ocorrência de BUFFER_SIZE será substituida por 100.
    O pré processador pode manipular o código fonte antes de ser compilado
    e se tornar um executável.
    No 1 exemplo o macro DEBUG_MODE não está definido
    e quando executado não imprime na tela "Debug Mode!"
    gcc -E -o X nome_arquivo.c é possível ver o código depois que o preprocessador
    foi executado.
    Nesse caso prinf("Debug Mode") foi adicionado ao código fonte.
*/ 

int main()
{

   #ifdef DEBUG_MODE
        printf("Debug Mode!\n"); 
   #endif 
    
   #ifndef DEBUG_MODE
        printf("Not debug mode!\n");
    #else
        printf("Not debug mode 2!\n");
   #endif 

    // O tamanho do buffer vai variar conforme o SO utilizado.
    char buffer[BUFFER_SIZE];

    printf("sizeof(buffer): %lu\n",sizeof(buffer));
    //printf("BUFFER_SIZE %d\n",BUFFER_SIZE);

    return 0;
}
/*
    # if definded(DEBUG_MODE)
        printf("Debug Mode");
    # endif

    # if !defined(DEBUG_MODE)
        printf("Not debug mode");
    # endif    
*/