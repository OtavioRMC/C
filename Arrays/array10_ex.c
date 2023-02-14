//Count the occurrences of a value in an Array.
#include<stdlib.h>
#include<stdio.h>

  int occurence(int array[],int length, int to_find);


int main(void)
{
    
    int myarray[]={4,9,7,6,6,6,6,2,1,5};
    int myarray2[]={0,0,1,1,0,2,2,3};
    int count=0;
    //Passando os parametros array , length e numero que desejo encontrar.
    int findarr1_5 = occurence(myarray,10,5);
    int findarr2_0 = occurence(myarray2,8,0);
    printf("# of 5s found in array 1: %d\n",findarr1_5);
    printf("# of 0s found in myarray 2: %d\n",findarr2_0);

/*for(int i = 0; i < 10; i++)
{
    printf("myarray[%d] = %d\n",i,myarray[i]);
    if(myarray[i]==to_find)
    {
        count++;
        printf("Found %d incremmented count to %d\n",to_find,count);
    }
    
}
printf("Number of 5s found: %d\n",count);
*/
    return 0;
}

    int  occurence(int array[],int length, int to_find)
{
     int count=0;
    
    for(int i = 0; i < length; i++)
    if(array[i]==to_find) count++;
        //printf("myarray[%d] = %d\n",i,myarray[i]);
        
         //printf("Found %d incremmented count to %d\n",to_find,count);
        
    return count;
}


   
    










