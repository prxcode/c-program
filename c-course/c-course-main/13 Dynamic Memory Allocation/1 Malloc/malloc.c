#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int *ptr;  // Declare a pointer to store the address of dynamically allocated memory

    // Dynamically allocate memory for 5 integers using malloc
    // malloc(5 * sizeof(int)) allocates memory to store 5 integers (typically 5 * 4 bytes on most systems)
    ptr = (int *) malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        // If malloc fails, ptr will be NULL. Print an error message and exit the program
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with a non-zero value indicating failure
    }

    // Use the allocated memory to store values
    // Initialize the allocated memory with values 1, 2, 3, 4, 5
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;  // Assign values: 1, 2, 3, 4, 5 to the allocated memory
    }

    // Print the values stored in the dynamically allocated memory
    printf("Values in dynamically allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // Print each value (1, 2, 3, 4, 5)
    }
    printf("\n");  // Print a new line after the list of numbers

    // Free the dynamically allocated memory
    // It is important to free the memory after use to avoid memory leaks
    free(ptr);

    return 0;  // Return 0 to indicate successful completion of the program
}
