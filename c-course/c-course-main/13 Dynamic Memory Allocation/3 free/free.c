#include <stdio.h>
#include <stdlib.h>  // For malloc(), calloc(), and free()

int main() {
    int *ptr;  // Pointer to store dynamically allocated memory
    int n = 5;  // The number of elements we want to allocate

    // Dynamically allocate memory for 'n' integers using malloc
    ptr = (int *) malloc(n * sizeof(int));  // Allocates memory but does not initialize

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with an error code
    }

    // Store values in the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;  // Assign values: 1, 2, 3, 4, 5
    }

    // Print the values stored in the dynamically allocated memory
    printf("Values in dynamically allocated memory:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  // Prints: 1 2 3 4 5
    }
    printf("\n");

    // Free the dynamically allocated memory after use
    free(ptr);  // Memory is now released and can be reused by the system

    // Set the pointer to NULL to avoid dangling pointer issues
    ptr = NULL; 

    return 0;  // Return 0 to indicate successful completion of the program
}
