//C Program to Calculate Fibonacci Sequence Using Recursion:
#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {  // Base case
        return n;
    } else {  // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, result;

    // Input: The index of the Fibonacci number to calculate
    printf("Enter the position to find the Fibonacci number: ");
    scanf("%d", &n);

    // Function call to calculate the Fibonacci number
    result = fibonacci(n);

    // Output the result
    printf("Fibonacci number at position %d is: %d\n", n, result);

    return 0;
}

/*
Explanation of the Code:
Function Declaration: int fibonacci(int n) declares the recursive Fibonacci function, which returns an integer.
Base Case: The base case is if (n <= 1). When n is 0 or 1, the function directly returns n because the first two Fibonacci numbers are defined as 0 and 1, respectively.
Recursive Case: fibonacci(n - 1) + fibonacci(n - 2) recursively calls the function to compute the Fibonacci number for n-1 and n-2 and adds them together.
Main Function: In the main() function, we take the position n as input, call the fibonacci(n) function, and print the result.*/