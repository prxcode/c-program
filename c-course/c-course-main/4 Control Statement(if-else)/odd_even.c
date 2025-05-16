#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if (a>0){
        if ((a%2)==0){
        printf("%d is an even number.",a);
        }
        else if((a%2)!=0){
            printf("%d is an odd number.",a);
        }
        else{
            printf("Invalid input. Please enter a valid integer.");
        }
    }
    else if (a==0){
        printf("%d is zero.",a);
    }
    else{
        printf("%d is a negative number.\n",a);
        if ((a%2)==0){
        printf("%d is an even number.",a);
        }
        else if((a%2)!=0){
            printf("%d is an odd number.",a);
        }
        else{
            printf("Invalid input. Please enter a valid integer.");
        }
    }
    return 0;
}