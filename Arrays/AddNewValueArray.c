#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // initial size of the array
    int *arr = malloc(n * sizeof(int)); // fully dynamically allocate memory for the array
    
    // add values to the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    // print the original values of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // add a new value to the array
    n++; // increase the size of the array
    arr = realloc(arr, n * sizeof(int)); // reallocate memory for the array
    arr[n-1] = 6; // add the new value to the end of the array
    
    // print the modified values of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr); // free the allocated memory
    
    return 0;
}