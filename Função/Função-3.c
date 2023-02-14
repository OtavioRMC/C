//Função e Váriavel Local.
#include <stdio.h>

int main(void){

    void teste(void);
    teste();
    /*for(int i=0;i<3;i++){
        teste();
        printf("\n");
    }*/

    return 0;

}
void teste(void){
    int var = 2; // Variavel local automatica. pois ela é visivel somente na função teste.
    //quando eu crio uma variavel dentro de uma função ela é visivel apenas para aquela função.
    //  É automatica pois a cada vez que é chamada ela perde seu valor anterior e uma nova variavel e criada.
    //Nao é  uma variavel estática.
    var *= 2;
    printf("%i",var);
}