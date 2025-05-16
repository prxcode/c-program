#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt the user to enter a number
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &dayNumber);

    // Using logical operators to preprocess the input
    if (dayNumber >= 1 && dayNumber <= 7) {
        // Proceed with switch if the input is valid
        switch(dayNumber) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
        }
    } else {
        // If the number is not in the valid range, print an error
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
