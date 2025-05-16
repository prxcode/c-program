#include <stdio.h>
int main (){
    int arr[5],sum;
    sum = 0;

    
    //Loop to make array
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    //Loop to find sum of numbers
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }

    printf("The sum of the numbers is: %d",sum);
    return 0;
}