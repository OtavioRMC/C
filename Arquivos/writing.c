#include <stdio.h>

int main()
{

    FILE *pF = fopen("test.txt","w");
    fprintf(pF,"Writing in a txt file in c");;
    fclose(pF);



    return 0;
}