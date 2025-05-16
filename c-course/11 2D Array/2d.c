//Printing 2D Array or Matrix

#include <stdio.h>

int main() {
    int a[2][3] = {  // Initialize a 2D array with values
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int i, j;

    // Nested loops to print the 2D array elements
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);  // Print each element with a space between them
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
