#include <stdio.h>

void main(){

int n,i,j;

printf("Digite a altura do triangulo: ");
scanf("%d",&n);

/*Triangulo Inverso*/

for(i=0;i<n;++i)
{
    for(j=i+1;j<n+1;j++)
        printf("* ");
    printf("\n");    
}

printf("\n");

/*Triangulo Normal*/
for(i=0;i<n;++i)
{
    for(j=0;j<i+1;j++)
        printf("* ");
    printf("\n");    
}

}