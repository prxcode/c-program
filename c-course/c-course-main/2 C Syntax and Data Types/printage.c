
//Data Types in C language

//Data Type: <int>
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You are %d years old.",age);
    return 0;
}

#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i",&age);
    printf("You are %d years old.",age);
    return 0;
}

#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i",&age);
    printf("You are %i years old.",age);
    return 0;
}




//Data Type: <float>
#include <stdio.h>
int main(){
    float age;
    printf("Enter your age: ");
    scanf("%f",&age);
    printf("You are %.2f years old.",age);
    return 0;
}


//Data Type: <char>
#include <stdio.h>
int main() {
    char name[10];
    printf("Enter your name: ");
    scanf("%9s", name);  // No '&' needed here
    printf("You are %s.", name);  // Remove the padding width
    return 0;
}
