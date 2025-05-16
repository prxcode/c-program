### **Day 11: Multidimensional Arrays in C**

In this lesson, we will explore **2D arrays** (also known as matrices) in C, which are a common data structure used for storing tables, grids, or any kind of tabular data. We will cover the following:

- **Declaring and initializing 2D arrays**.
- **Accessing elements** in a 2D array.
- **Iterating through 2D arrays** using loops.

We will also work on a **practice problem** that involves multiplying two 3x3 matrices.

---

### **1. Declaring and Initializing 2D Arrays (Matrices)**

A **2D array** can be thought of as a table with rows and columns. In C, we declare a 2D array using the following syntax:

```c
type array_name[rows][columns];
```

- `type` is the data type of the elements (e.g., `int`, `float`).
- `rows` is the number of rows in the array.
- `columns` is the number of columns in the array.

#### **Example of Declaring a 2D Array**:

```c
int matrix[3][3];  // A 3x3 matrix (3 rows, 3 columns)
```

#### **Example of Initializing a 2D Array**:

```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

In this example, the matrix looks like this:

```
1 2 3
4 5 6
7 8 9
```

---

### **2. Accessing Elements in a 2D Array**

You can access elements in a 2D array using the syntax:

```c
array_name[row][column]
```

#### **Example of Accessing an Element**:

```c
int value = matrix[1][2];  // Accesses the element in the second row, third column (6)
```

In this example, `matrix[1][2]` refers to the element in the second row and third column.

---

### **3. Iterating Through 2D Arrays Using Loops**

To iterate through all elements in a 2D array, you typically use nested `for` loops:

```c
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
        // Access array[i][j]
    }
}
```

This allows you to traverse each row and column in the array.

---

### **Practice Problem: Matrix Multiplication (3x3 Matrices)**

Let’s solve the problem of multiplying two 3x3 matrices. Given two matrices:

```
Matrix A:
1 2 3
4 5 6
7 8 9

Matrix B:
9 8 7
6 5 4
3 2 1
```

The result of multiplying **Matrix A** by **Matrix B** is a new matrix **Matrix C**, where each element `C[i][j]` is calculated as:

```
C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j]
```

### **C Program for Matrix Multiplication (3x3)**:

```c
#include <stdio.h>

#define SIZE 3  // Defining the size of the matrices (3x3)

// Function to multiply two matrices
void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    // Multiply matrix A and matrix B, and store the result in matrix C
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;  // Initialize the result element to 0
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];  // Calculate the dot product
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int C[SIZE][SIZE];  // Resultant matrix

    // Call function to multiply matrices
    multiplyMatrices(A, B, C);

    // Output the result matrix
    printf("Matrix A:\n");
    printMatrix(A);

    printf("\nMatrix B:\n");
    printMatrix(B);

    printf("\nMatrix C (Result of A * B):\n");
    printMatrix(C);

    return 0;
}
```

### **Explanation of the Code**:

1. **Matrix Declaration**:
   - We declare two 3x3 matrices `A` and `B` and initialize them with predefined values.
   - `C` is an empty 3x3 matrix where the result of the multiplication will be stored.

2. **Matrix Multiplication**:
   - The `multiplyMatrices` function takes matrices `A`, `B`, and `C` as input.
   - It uses three nested `for` loops:
     - The outer two loops iterate over the rows of matrix `A` and the columns of matrix `B`.
     - The innermost loop calculates the dot product of the corresponding row of `A` and column of `B`.

3. **Printing the Matrix**:
   - The `printMatrix` function is used to print any matrix (A, B, or C) in a readable format.

4. **Result**:
   - After multiplication, the program prints `Matrix A`, `Matrix B`, and the resultant `Matrix C`.

### **Sample Output**:

```
Matrix A:
1 2 3 
4 5 6 
7 8 9 

Matrix B:
9 8 7 
6 5 4 
3 2 1 

Matrix C (Result of A * B):
30 24 18 
84 69 54 
138 114 90
```

---

### **Explanation of Matrix Multiplication**:

- **Element C[0][0]** is calculated as:
  ```
  C[0][0] = (1 * 9) + (2 * 6) + (3 * 3) = 9 + 12 + 9 = 30
  ```
- **Element C[0][1]** is calculated as:
  ```
  C[0][1] = (1 * 8) + (2 * 5) + (3 * 2) = 8 + 10 + 6 = 24
  ```
- This process continues for all elements in the matrix.

### **Key Points**:
- **2D Arrays**: A 2D array is like a table, accessed by rows and columns. You can initialize, access, and manipulate data in these arrays easily.
- **Nested Loops**: To work with 2D arrays, we typically use nested loops—one for the rows and one for the columns.
- **Matrix Multiplication**: This is a common operation in mathematics and programming, and we use three nested loops to compute it.

---
