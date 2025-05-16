#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer variable and assign it a value
    int *ptr;      // Declare a pointer variable that will store the address of an integer
    
    ptr = &num;    // Initialize the pointer with the address of num
    
    // Print the value of num and its address using the pointer
    printf("Value of num: %d\n", num);           // Prints the value of num (10)
    printf("Address of num: %p\n", &num);        // Prints the address of num
    printf("Value of ptr (Address of num): %p\n", ptr);  // Prints the address stored in ptr (Address of num)
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereference ptr to get the value of num (10)

    // Modify the value of num using the pointer
    *ptr = 20;  // Dereference ptr and change the value of num to 20

    // Print the new value of num
    printf("\nAfter modifying the value through pointer:\n");
    printf("Value of num: %d\n", num);  // Now num will be 20
    
    return 0;
}
