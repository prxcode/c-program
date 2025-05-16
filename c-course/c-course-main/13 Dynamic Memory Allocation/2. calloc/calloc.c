#include <stdio.h>
#include <stdlib.h>  // For calloc() and free()

int main() {
    int *ptr;  // Pointer to store the address of dynamically allocated memory
    int n = 5;  // The number of elements we want to allocate

    // Dynamically allocate memory for 'n' integers using calloc
    // calloc(n, sizeof(int)) allocates memory for 'n' integers and initializes all elements to zero
    ptr = (int *) calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        // If calloc fails, ptr will be NULL. Print an error message and exit the program
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with a non-zero value indicating failure
    }

    // Print the values stored in the dynamically allocated memory
    printf("Values in dynamically allocated memory (initialized to 0):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  // Print each value (all initialized to 0)
    }
    printf("\n");

    // Free the dynamically allocated memory
    // It is important to free the memory after use to avoid memory leaks
    free(ptr);

    return 0;  // Return 0 to indicate successful completion of the program
}
