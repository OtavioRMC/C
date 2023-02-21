#include <stdio.h>
#include <pthread.h>
#include <time.h>

void *computation(void *add);

int main(){

  pthread_t thread1; 
  pthread_t thread2;
  long value1 = 1;
  long value2 = 2;

  computation((void*)&value1);
  computation((void*)&value2);

  pthread_create(&thread1,NULL,computation, (void*) &value1 );
  pthread_create(&thread2,NULL,computation, (void*) &value2 );

  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);
  
  return 0;

}
void *computation(void *add){

  long sum = 0;
  long *add_num = (long *) (add);
  for(long i = 0;i < 1000000000; i++)
    sum += *add_num;
  
  printf("Computation\n");

  return NULL;
}





// Visualizations of single-threaded vs. multi-threaded execution.
//
//
//              Single-Threaded Program
//
//          |   int x;
//          |   x = 20;
//          |   int y;
//  Time    |   y = 50;
//          |   int sum;
//          |   sum = x + y;
//          ↓
//     
//
//
//              Multi-Threaded Program 
//
//          |   int x;                 |  int a;
//          |   x = 20;                |  a = 3;
//          |   int y;                 |  int b;
//  Time    |   y = 50;                |  b = 5;
//          |   int sum;               |  int product;
//          |   sum = x + y;           |  product = a * b;
//          ↓                          ↓
//
//          Parallel Execution 
//
//
//
//              Multi-Threaded Program 
//
//          |   int x;                 |  
//          |                          |  int a;
//          |                          |  a = 3;
//          |   x = 20;                |  
//          |   int y;                 |   
//          |                          |  int b;
//  Time    |   y = 50;                |  
//          |                          |  b = 5;
//          |                          |  int product;
//          |   int sum;               |  
//          |   sum = x + y;           |  
//          |                          |  product = a * b;
//          ↓                          ↓
//
//          Concurrent But Not Parallel Execution 
//
//
//
//              Multi-Threaded Program 
//
//          |                             pthread
//          |
//          |   sum = x + y;           
//          |   pthread_create --------   function()
//          |   ...                    |  int a = 5;
//          |   printf("%d", sum);     |  int b = 3;
//  Time    |   ...                    |  int result = x + y;
//          |   pthread_join   --------↓
//          |   ...       | 
//          |   ...       |   
//          ↓          execution PAUSES here until thread done
//
//          Parallel Execution 