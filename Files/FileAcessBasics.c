#include <stdio.h>

int main(){

    FILE *fhOutput;

    /* Open the file for writing.
     If io.txt doesn't exists it will create it
     If io.txt exists everything inside io.txt will be deleted and will start 
    off with a blank file.
    */
    fhOutput = fopen("io.txt","w");

    fputs("A string example\n",fhOutput);
    /**/
    // Closes our acess.
    fclose(fhOutput);

    return 0;
}