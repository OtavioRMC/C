// Single vs Multiple recursion
#include <stdio.h>

int factorial(int n){
  // 5 * factorial(4)
  // 5 * 4 * factorial(3) 
  // 5 * 4 * 3 * factorial(2)
  // 5 * 4 * 3 * 2 * factorial(1)
  
  if(n == 0) return 1;
  else return n * factorial(n-1);
}
/*
    fact(n)
      |
       -----> n * fact(n-1)
                    |
                     -----> (n-1) * fact(n-2)
                                      |
                                        -----> ....

                ..... n recursive function calls .....
*/  

int fib(int n){
  if(n == 0) return 0;
  else if ( n == 1) return 1;
  else return fib(n-1) + fib(n-2);
}

int main()
{ 
  
  printf("Factorial(5) = %d\n",factorial(5));
  printf("Fib(8) = %d\n",fib(8));
  return 0;
}

  
  