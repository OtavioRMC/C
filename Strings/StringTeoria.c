/**
**  Revisão principais conceitos (Strings,Arrays,Structs,Funções)
*!  1-Strings


*?  .Uma string é uma cadeira de caracteres
*?  .É também um vetor de caracteres

*!   1.1-Definindo  uma string

*?    char palavras[] = {"String example."};

*?    printf("%s",palavras);
*?    printf("%c",palavras[0]);

*/
int main()
{
    char palavras[100];
    printf("Digite seu nome: ");
    // *! A função scanf por padrão le até o primeiro espaço.
    scanf("%s", palavras);

    printf("%s", palavras);
    //*! Ler tudo o que for digitado até que a tecla enter for pressionada.
    // * scanf("%[^/n]",palavras);
    return 0;
}




 
  
   
    
     
      
       


