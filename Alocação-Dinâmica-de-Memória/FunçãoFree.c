#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    

    char *senha;
 
    senha = (char *) malloc(21*sizeof(char));
    printf("Digite sua senha [ate 20 caracteres]: ");
    scanf("%[^\n]s", senha);
 
    printf("Senha: %s\n", senha);
    printf("Endereco antes da free(): %d\n", senha);
 
    free(senha);
    senha = NULL;

    printf("Endereco depois da free(): %d\n", senha);
    

 return 0;
}


  