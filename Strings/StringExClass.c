#include <stdio.h>
#include <string.h>
#define N 50
void troca_consoante(char palavra[]){
    int i=0;
    while(palavra[i]!='\0'){
        if(palavra[i]!=' ' && palavra[i]!='A' && palavra[i]!='E' && palavra[i]!='I' && palavra[i]!='O' && palavra[i]!='U' && palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u'){
            palavra[i]='#';
        }
        i++;
    }
}
void inverte(char palavra[]){
    
    int i=0, j, fim;
    char aux;

    while(palavra[i]!='\0'){
        i++;
    }

    fim=i;
    char invertida[fim];

    invertida[fim]=palavra[i];
    for(i=0,j=1;i<fim;i++,j++){
        invertida[fim-j]=palavra[i];
    }
    strcpy(palavra,invertida);
}
void remove_enter(char frase[]){
     int i=0;
     while(frase[i]!='\n'){
        i++;
     }
     frase[i]=frase[i+1];
}
int main(){
    char frase[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    remove_enter(frase);
    inverte(frase);
    troca_consoante(frase);
    printf("%s",frase);
    return 0;
}