Got it! Let's go through the topics for **1D arrays** in C language:

### **1. Declaring and Initializing Arrays in C**

In C, you can declare and initialize a 1D array like this:

- **Declaration**:  
  You first declare the array by specifying the type of elements it will hold (e.g., `int`, `float`, etc.), followed by the array name and its size.

    ```c
    int arr[5];  // Declaring an integer array with space for 5 elements
    ```

- **Initialization**:  
  You can initialize the array with values either at the time of declaration or later in the program.

    ```c
    int arr[5] = {1, 2, 3, 4, 5};  // Initialization with values
    ```

    If you don't initialize it, C will assign default values (which could be garbage values).

    ```c
    int arr[5] = {0};  // All elements are set to 0
    ```

### **2. Accessing Array Elements in C**

To access an element, you use the array name followed by the index in square brackets (`[]`). Remember that array indices in C start at **0**.

- **Accessing elements**:  

    ```c
    arr[0] = 10;  // Assign 10 to the first element
    int value = arr[0];  // Access the first element (value will be 10)
    ```

### **3. Iterating Through Arrays Using Loops**

You can use a loop (like `for` or `while`) to iterate through the array and perform operations on each element. A common loop is the `for` loop.

- **For loop**:  

    ```c
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);  // Print each element in the array
    }
    ```

### **Practice Problem: Write a Program That Stores 5 Integers in an Array and Calculates Their Sum**

Let's now use everything we've learned to solve a practice problem.

**Problem**:  
Write a C program that stores 5 integers in an array and calculates their sum.

Here’s the code for this task:

```c
#include <stdio.h>

int main() {
    int arr[5];  // Declare an array to store 5 integers
    int sum = 0;  // Variable to hold the sum

    // Input 5 integers from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // Store user input in the array
    }

    // Calculate the sum of the array elements
    for (int i = 0; i < 5; i++) {
        sum += arr[i];  // Add each element to sum
    }

    // Output the sum
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
```

### **Explanation of the Code**:

1. **Declaring the array**:  
   `int arr[5];` creates an array to store 5 integers.

2. **User input**:  
   The program asks the user to input 5 integers, and the `scanf` function stores these values in the array.

3. **Sum calculation**:  
   Using a `for` loop, we iterate over the array and add each element to the `sum` variable.

4. **Output**:  
   The sum of all the elements is displayed using `printf`.

### **Sample Output**:

```
Enter 5 integers:
1 2 3 4 5
The sum of the elements is: 15
```
