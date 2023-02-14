#include <stdio.h>

int main(int argc, char *argv[]){

  //printf("argc: %d\n", argc);
  //printf("argv[1]=%s\n",argv[1]);
  printf("%s\n",argv[1]);
  int num_times = atoi(argv[2]);

  for (int i = 0; i < num_times; i++)
        printf("%s\n",argv[1]);
  
  return 0;
}