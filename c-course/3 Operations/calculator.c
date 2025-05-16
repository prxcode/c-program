#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("\nArithmetic Calculations\n");
    printf("Sum of %d and %d is: %d\n",a,b,a+b);
    printf("Subtraction of %d and %d is: %d\n",a,b,a-b);
    printf("Multiplication of %d and %d is: %d\n",a,b,a*b);
    if (b==0){
        printf("Number can't be Zero!\n");
    }
    else {
        printf("Division of %d and %d is: %d\n",a,b,a/b);
    }
    printf("\nRelational Calculations\n");
    printf("%d == %d is: %d\n",a,b,a == b); //1 means True and 0 means False
    printf("%d != %d is: %d\n",a,b,a!=b); //1 means True and 0 means False
    printf("%d > %d is: %d\n",a,b,a>b); //1 means True and 0 means False
    printf("%d < %d is: %d\n",a,b,a<b); //1 means True and 0 means False
    printf("%d >= %d is: %d\n",a,b,a>=b); //1 means True and 0 means False
    printf("%d <= %d is: %d\n",a,b,a<=b); //1 means True and 0 means False
    
    printf("\nLogical Calculations\n");
    printf("%d && %d is: %d\n",a,b,(a>b)&&(b<a)); // AND Gate if (a>b) is true and (b<a) is also true then 1 AND 1 is 1 so answer will be TRUE that is 1
    printf("%d || %d is: %d\n",a,b,(a>b)||(b<a)); // OR Gate
    printf("!%d is %d is: %d\n",a,b,!(b<a)); // NOT Gate
    
    
    
    
    return 0;
}
