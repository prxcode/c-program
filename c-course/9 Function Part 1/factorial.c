#include <stdio.h>
int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}





int main(){
    int num, result;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&num);
    
    result = factorial(num);
    printf("The factorial of %d is: %d",num,result);
    return 0;
}