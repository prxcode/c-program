### Day 3: Operators in C

In C programming, operators are symbols used to perform operations on variables and values. Operators are categorized based on the type of operation they perform. Let's explore three common types of operators: **Arithmetic operators**, **Relational operators**, and **Logical operators**.

---

### **1. Arithmetic Operators**

Arithmetic operators are used to perform basic mathematical operations such as addition, subtraction, multiplication, and division.

#### List of Arithmetic Operators:

- **`+`** : Addition — Adds two operands.
- **`-`** : Subtraction — Subtracts the second operand from the first.
- **`*`** : Multiplication — Multiplies two operands.
- **`/`** : Division — Divides the first operand by the second (result is an integer if both operands are integers).
- **`%`** : Modulus — Returns the remainder of division of the first operand by the second.

**Example:**

```c
int a = 10, b = 3;
printf("Addition: %d\n", a + b);      // 13
printf("Subtraction: %d\n", a - b);   // 7
printf("Multiplication: %d\n", a * b); // 30
printf("Division: %d\n", a / b);      // 3 (integer division)
printf("Modulus: %d\n", a % b);       // 1 (remainder)
```

---

### **2. Relational Operators**

Relational operators are used to compare two values or expressions. These operators return either `true` (1) or `false` (0).

#### List of Relational Operators:

- **`==`** : Equal to — Returns true if both operands are equal.
- **`!=`** : Not equal to — Returns true if operands are not equal.
- **`>`** : Greater than — Returns true if the left operand is greater than the right.
- **`<`** : Less than — Returns true if the left operand is less than the right.
- **`>=`** : Greater than or equal to — Returns true if the left operand is greater than or equal to the right.
- **`<=`** : Less than or equal to — Returns true if the left operand is less than or equal to the right.

**Example:**

```c
int x = 5, y = 10;
printf("%d == %d is %d\n", x, y, x == y);   // 0 (false)
printf("%d != %d is %d\n", x, y, x != y);   // 1 (true)
printf("%d > %d is %d\n", x, y, x > y);     // 0 (false)
printf("%d < %d is %d\n", x, y, x < y);     // 1 (true)
```

---

### **3. Logical Operators**

Logical operators are used to combine conditional (relational) expressions. These operators are commonly used in control flow (like `if` or `while` statements).

#### List of Logical Operators:

- **`&&`** : Logical AND — Returns true if both operands are true.
- **`||`** : Logical OR — Returns true if at least one operand is true.
- **`!`** : Logical NOT — Returns true if the operand is false, and false if the operand is true.

**Example:**

```c
int a = 5, b = 10;
printf("%d && %d is %d\n", a < b, b > a, (a < b && b > a)); // 1 (true)
printf("%d || %d is %d\n", a > b, b < a, (a > b || b < a)); // 1 (true)
printf("!%d is %d\n", a > b, !(a > b)); // 1 (true)
```

---

### **Practice Problem**

**Problem:** Write a program that asks the user to input two integers and prints the result of their addition, subtraction, multiplication, and division.

#### Solution:

```c
#include <stdio.h>

int main() {
    int num1, num2;
    
    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Performing arithmetic operations
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    
    // To avoid division by zero, check if the second number is zero
    if (num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
    } else {
        printf("Division: Cannot divide by zero\n");
    }
    
    return 0;
}
```

**Explanation:**

- We first take two integers as input using `scanf`.
- Then we perform the arithmetic operations: addition, subtraction, multiplication.
- For division, we check if the second number (`num2`) is not zero before performing the operation, as dividing by zero would cause an error.
- The result of division is printed as a floating-point number using `%.2f` to format it to two decimal places.

---

### **Output Example:**

```
Enter two integers: 10 5
Addition: 15
Subtraction: 5
Multiplication: 50
Division: 2.00
```

--- 

This concludes Day 3 on operators in C. We've covered the basic arithmetic, relational, and logical operators along with a practical example.