### Day 5: Switch-Case & Logical Operators
---

### **1. `switch` and `case` Statements**

A `switch` statement allows you to evaluate an expression and execute a block of code based on matching different possible outcomes (cases).

Here’s how a `switch` statement works:

#### **Syntax:**
```javascript
switch(expression) {
    case value1:
        // Code block if expression === value1
        break;
    case value2:
        // Code block if expression === value2
        break;
    // More cases can follow...
    default:
        // Code block if no case matches
}
```

- **`switch(expression)`**: This evaluates the expression (could be a number, string, etc.).
- **`case value1:`**: This checks if the value of the expression matches `value1`. If it does, the corresponding block of code is executed.
- **`break;`**: This exits the `switch` block once a case is matched and executed. Without `break`, all subsequent cases would also be executed (a phenomenon known as "fall-through").
- **`default:`**: This block is optional. It is executed if no `case` matches the expression.

#### **Example:**
```javascript
let day = 3;  // Assume the user inputs 3 (Wednesday)

switch(day) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thursday");
        break;
    case 5:
        console.log("Friday");
        break;
    case 6:
        console.log("Saturday");
        break;
    case 7:
        console.log("Sunday");
        break;
    default:
        console.log("Invalid day");
}
```

In this example, the number `3` will match with the `case 3:`, and the output will be `Wednesday`.

---

### **2. Logical Operators**

Logical operators allow you to combine or negate conditions. These are commonly used in `if`, `while`, or `switch` statements to control the flow of your program.

#### **Common Logical Operators:**
1. **`&&` (Logical AND)**: Returns `true` if both operands are true.
2. **`||` (Logical OR)**: Returns `true` if at least one of the operands is true.
3. **`!` (Logical NOT)**: Returns the opposite boolean value of the operand. It negates `true` to `false` and vice versa.

#### **Examples:**

- **`&&` (AND)**: 
  ```javascript
  let a = 5;
  let b = 10;
  
  if (a > 0 && b > 0) {
    console.log("Both numbers are positive!");
  }
  ```
  The output will be `"Both numbers are positive!"` because both `a` and `b` are greater than 0.

- **`||` (OR)**: 
  ```javascript
  let a = 5;
  let b = -10;
  
  if (a > 0 || b > 0) {
    console.log("At least one number is positive!");
  }
  ```
  The output will be `"At least one number is positive!"` because `a` is greater than 0.

- **`!` (NOT)**:
  ```javascript
  let isRainy = false;
  
  if (!isRainy) {
    console.log("It's not raining!");
  }
  ```
  The output will be `"It's not raining!"` because `isRainy` is `false`, and `!false` becomes `true`.

---

### **3. Combining `switch`, `case`, and Logical Operators**

You can combine logical operators inside `switch` statements or use them in other conditional structures for more complex logic.

---

### **Practice Problem:**

Now let’s write a program that takes a number from 1 to 7 and prints the corresponding day of the week using a `switch` statement.

#### **Problem Description:**
- Write a program that takes a number (1–7) as input.
- The program should print the corresponding day of the week (e.g., 1 = "Monday", 2 = "Tuesday", etc.).
- If the number is not between 1 and 7, print "Invalid input".

#### **Solution:**

```javascript
// Get the number input (could be from prompt or hardcoded)
let dayNumber = 3;  // You can change this number to test (1 to 7)

switch(dayNumber) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thursday");
        break;
    case 5:
        console.log("Friday");
        break;
    case 6:
        console.log("Saturday");
        break;
    case 7:
        console.log("Sunday");
        break;
    default:
        console.log("Invalid input");
}
```
