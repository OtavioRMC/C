// NULL pointer in C
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
        
}node;

int main(void){

    int *ptr = NULL;

    printf("ptr: %p\n", ptr);

    // Alocates space for an int value
    ptr = malloc(sizeof(int));

    // "Error: ptr is NULL.
    // ptr = malloc(sizeof(int)*100000000)

    if(ptr != NULL){

        *ptr = 5;
        printf("*ptr: %d\n", *ptr);
    }
    else
        printf("Error: ptr is NULL!\n");

    printf("\nBefore free: \n%p",ptr);
    printf("\nBefore free: \n%p",*ptr);

    free(ptr);

    ptr = NULL;

    printf("\nAfter free: \n%p",ptr);
    //printf("\nAfter free: \n%p",*ptr);

    node n1,n2,n3;

    n1.value = 5;
    n1.next = &n2;

    n2.value = 6;
    n2.next = &n3;

    n3.value = 7;
    n3.next = NULL;

    node *L = &n1;
    
    printf("\n\nLinked List: ");

    while (L != NULL)
    {
        printf("%d ",L->value);
        L = L->next;
    }
    
    return 0;
}