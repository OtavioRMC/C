#include<stdio.h>   
#include<stdlib.h>
#include<string.h>


/*int main()
{
/*
//Armazenar o restante das letras.
//Armazenar em outro vetor e usar  a função strlen()

char frase[50],letras[50];     
int i,j,t;

printf("Digite uma frase qualquer: ");
scanf("%[^\n]",frase);
//Buscar letras no vetor.

for(i=0;frase[i]!='\0';i++)
{   

    //Verificao do espaco
    if(frase[i]!=' ')
    {
        for(j=i+1;frase[j]!='\0';j++)
        {
            if(frase[i]==frase[j])
            {
                frase[j]=' '; //Atribuição para limpar a variável.

            }
            letras[t]=frase[i]; //Errei aqui é fora do laço for.
            t++;
        }
    }
}
    letras[t]='\0';
    printf("Temos %i letras (%s) na frase. ",t,letras);

    return 0;
}
*/
int main(){

char frase[50],letras[50];
int i,j,t=0;

printf("Digite uma frase: ");
scanf("%[^\n]",frase);

for(i=0;frase[i]!='\0';i++){
    if(frase[i]!=' '){
        for(j=i+1;frase[j]!='\0';j++)
            if(frase[i]==frase[j])
            frase[j]= ' ';
            letras[t]=frase[i];
            t++;    
    }
}
letras[t]='\0';
printf("Temos %i letras(%s) na frase: ",t,letras);





    return 0;
}
