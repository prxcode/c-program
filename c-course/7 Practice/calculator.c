#include <stdio.h>
int main(){
    int choice;
    printf("Welcome to Calculator!\n");
    printf("Enter 1 for Addtion!\n");
    printf("Enter 2 for Subtraction!\n");
    printf("Enter 3 for Multiplication!\n");
    printf("Enter 4 for Division!\n");
    printf("Enter your choice (1-4): ");
    scanf("%d",&choice);
    if (choice == 1){
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);
        int sum = num1 + num2;
        printf("Sum: %d\n",sum);
    }
    else if (choice == 2){
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);
        int difference = num1 - num2;
        printf("Difference: %d\n",difference);
    }
    else if (choice == 3){
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);
        int product = num1 * num2;
        printf("Product: %d\n",product);
    }
    else if (choice == 4){
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);
        int product = num1 / num2;
        printf("Product: %d\n",product);
    }

    else{
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    return 0;
}