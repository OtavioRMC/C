#include <stdio.h>
#include <stdlib.h>

int calcula_medias(float, float ,float ,char);


int main(){

    char tipo_media;
    float nota1,nota2,nota3;
    float resultado;
    float media,media_h,media_p;
    //Outra implementação seria declarar as medias e criar laços condicionais para executar media


    printf("Digite (A) para media aritmetica, (P) ponderada, (H) harmonica: ");
    scanf("%c",&tipo_media);

    printf("Digite a 1 nota do aluno: ");
    scanf("%f",&nota1);
      
    printf("Digite a 2 nota do aluno: ");  
    scanf("%f",&nota2);

    printf("Digite a 1 nota do aluno: ");
    scanf("%f",&nota2);

    
    

    if(tipo_media == 'A'){
        media = calcula_medias(nota1,nota2,nota3,tipo_media);
        printf("%f",media);
    }
    /*if(tipo_media == 'H'){
        media_h = calcula_medias(nota1,nota2,nota3,tipo_media);
        printf("%f",media_h);
    }
    if(tipo_media == 'P'){
        media_p = calcula_medias(nota1,nota2,nota3,tipo_media);
        printf("%f",media_p);
    }
*/

    return 0;
}
int calcula_medias(float nota1,float nota2,float nota3,char letra){


//Media , media_p(Ponderada), media_h(harmonica)
float media;
float media_h;
float media_p;

if(letra == 'A'){

    media = (nota1 + nota2 + nota3)/3;
    printf("%f",media);

}return media;

/*if(letra == 'P'){

    media_p = (nota1*5) + (nota2*3) + (nota3*2)/10;
    printf("%f",media_p);

}return media_p;

if(letra == 'H'){

    media_h = 3/(1/nota1) + (1/nota2) + (1/nota3);
    printf("%f",media_h);

}return media_h;
*/

}