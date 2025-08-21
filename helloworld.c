#include <stdio.h> // for printf
#include <stdlib.h> // for malloc and free

int main() {
    printf("=================== START ===================\n");

    int *arr = (int *) malloc(10 * sizeof(int)); // Allocate memory for 10 integers
    
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("arr: %p\n", (void *)arr); // Print the address of first element
    printf("&arr: %p\n", (void *)&arr); // Print the address of pointer variable arr

    for (int i = 0; i < 10; i++) {
        int value = *(arr + i);
        value = i+1; // Initialize the array with values 1 to 10
        printf("arr[%d]: %d\n", i, value); // Print each element
    }

    free(arr);
    printf("=================== END ===================\n");
    return 0;
}