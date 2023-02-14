#include <stdio.h>
#include <windows.h>

int main(){

    int hora,minuto,segundo;
    int sleep_time = 1;

    printf("Incialize o relógio: ");
    scanf("%d%d%d",&hora,&minuto,&segundo);

    if(hora > 12 || minuto > 60 || segundo > 60){
        printf("ERRO !\n");
        exit(0);
    }

    while(1){

        segundo++;
        if(segundo > 59){
            minuto++;
            segundo=0;
        }
        if(minuto > 59){
            hora++;
            minuto=0;
        }
        if(hora > 59){
            hora=1;
        }

        printf("\nRelogio: ");
        printf("\n %02d:%02d:%02d",hora,minuto,segundo);
        sleep(sleep_time);
        system("cls");

    }
        


    return 0;
}