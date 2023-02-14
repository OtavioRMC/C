 #include<stdio.h>


int retorna_numero_divisores(int);

 int main()
 {
    int numero;
    int numero_divisores;
    printf("Digite o numero : ");
    scanf("%i",&numero);

    numero_divisores = retorna_numero_divisores(numero);
    printf("%i",numero_divisores);



    return 0;

 }
 int retorna_numero_divisores(int n)
 {

    int i,ctr=0;

  for(i=1;i<=n;i++)
  {
     if(n%i==0)
     {
        ctr++;
     }
  }

    return ctr;
 }