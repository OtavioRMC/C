#include <stdio.h>



int main(){

    //Variaveis
    int  x;
    x = 10;

    //Funcao  (Declarando funcao imprima mensagem)
    void imprimaMensagem(void);
    // Void e o que eu quero que minha função retorne
    imprimaMensagem();


    return 0; //-->Indica Fim do programa.//
}           
void imprimaMensagem(void){

    printf("teste");

}
//Caso eu coloque a funcao 'imprimaMensagem' em cima da função main nao é necessário declarar a função//
//dentro da função main.                                                                             //  