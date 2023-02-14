#include <stdio.h>
#include <stdlib.h>



int verify_prime(int);

int main(){

    int num;
    int result;

    printf("Digite um numero: ");
    scanf("%i",&num);

   result = verify_prime(num);
    printf("%i",result);


    return 0;
 }

int verify_prime(int n){

int i;

for(i = 2; i <= n ; i++){

    if(n % i == 0){
        printf("O numero %i nao e primo",n);
        printf("\n");
        return 0;
    }
    if(n % i != 0){
        printf("O numero %i e primo",n);
        printf("\n");
        return 1;
    }
}


    return verify_prime;
}

  

