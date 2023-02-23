#include <stdio.h>
#define MAX 1000000
int sum(int *array,int length, int i){

  if( i == length) return 0;
  else return array[i] + sum(array,length, i + 1);

}

int main(){
  int a[MAX];

  for(int i = 0;i < MAX;i++)
      a[i] = 1;

  // printf("Sum: %d", sum(a,MAX,0));   

  int array_sum = 0;
  for(int i = 0; i < MAX;i++)
      array_sum += a[i];

  printf("Sum: %d",array_sum);



  return 0;
}

void f2(int a, int b){
  printf("%d %d ",a,b);
}

void f1(int x,int y){
  f2(x,y);
}

int main(){

  int r = 8;
  int t = 3;

  f1(r,t);

  return 0;
}