### **Day 4: Control Statements (If-Else)**

Control statements in C are used to perform different actions based on conditions. The basic control statements in C include `if`, `else`, and `else if`. They allow you to make decisions based on the values of variables and conditions.

---

### **Topics:**

1. **`if`, `else`, `else if` Statements:**
   - These are the basic decision-making structures in C.
   - **`if`**: Checks whether a condition is true.
   - **`else`**: Executes a block of code if the `if` condition is false.
   - **`else if`**: Checks another condition if the first `if` is false.

2. **Logical Conditions and Comparison:**
   - Logical conditions are expressions that evaluate to either `true` or `false`.
   - Comparison operators are used to compare values:
     - `==`: Equal to
     - `!=`: Not equal to
     - `>`: Greater than
     - `<`: Less than
     - `>=`: Greater than or equal to
     - `<=`: Less than or equal to

3. **Nested `if` Statements:**
   - You can place one `if` statement inside another. This is useful when you need to check multiple conditions in a hierarchical manner.

---

### **Practice Problem:**

#### Write a program to check if a number is positive, negative, or zero using `if-else`.

---

### **Code Explanation:**

The program will check the number using `if`, `else if`, and `else` to determine if the number is positive, negative, or zero.

### **Program Code:**

```c
#include <stdio.h>

int main() {
    int number;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n"); // If number is greater than 0, it's positive
    }
    else if (number < 0) {
        printf("The number is negative.\n"); // If number is less than 0, it's negative
    }
    else {
        printf("The number is zero.\n"); // If number is neither positive nor negative, it's zero
    }
    
    return 0;
}
```

---

### **How It Works:**
1. **User Input:**
   - The program prompts the user to input an integer.
   - `scanf("%d", &number);` stores the input in the `number` variable.

2. **Condition Checking:**
   - The first `if` condition checks if `number > 0`. If true, it prints that the number is positive.
   - If the first condition is false, the `else if` checks if the number is less than zero (`number < 0`). If true, it prints that the number is negative.
   - If both conditions are false (i.e., the number is neither positive nor negative), the `else` block is executed, printing that the number is zero.

---

### **Sample Output:**

1. **When the input is a positive number:**

   ```text
   Enter a number: 5
   The number is positive.
   ```

2. **When the input is a negative number:**

   ```text
   Enter a number: -3
   The number is negative.
   ```

3. **When the input is zero:**

   ```text
   Enter a number: 0
   The number is zero.
   ```

---

### **Nested If-Else Example:**

Nested `if-else` allows you to check multiple conditions in a hierarchy. Here’s an example:

#### **Problem:**
Write a program to check if a number is positive, negative, or zero, and additionally check whether it is even or odd (using nested if-else).

#### **Code:**

```c
#include <stdio.h>

int main() {
    int number;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
        
        // Nested if to check if the positive number is even or odd
        if (number % 2 == 0) {
            printf("It is an even number.\n");
        } else {
            printf("It is an odd number.\n");
        }
    }
    else if (number < 0) {
        printf("The number is negative.\n");
        
        // Nested if to check if the negative number is even or odd
        if (number % 2 == 0) {
            printf("It is an even number.\n");
        } else {
            printf("It is an odd number.\n");
        }
    }
    else {
        printf("The number is zero.\n");
    }
    
    return 0;
}
```

---

### **Sample Output:**

1. **Positive Even Number:**

   ```text
   Enter a number: 4
   The number is positive.
   It is an even number.
   ```

2. **Positive Odd Number:**

   ```text
   Enter a number: 7
   The number is positive.
   It is an odd number.
   ```

3. **Negative Even Number:**

   ```text
   Enter a number: -2
   The number is negative.
   It is an even number.
   ```

4. **Negative Odd Number:**

   ```text
   Enter a number: -5
   The number is negative.
   It is an odd number.
   ```

5. **Zero:**

   ```text
   Enter a number: 0
   The number is zero.
   ```

---

### **Key Takeaways:**

- **`if`, `else`, `else if`** are used to make decisions based on conditions.
- **Nested `if` statements** allow you to check conditions within conditions (useful for multiple levels of logic).
- **Logical operators** like `==`, `!=`, `>`, `<`, `>=`, and `<=` help in comparing values.
- The structure of **if-else** allows the program to make decisions based on the input and control the flow of execution.

---
