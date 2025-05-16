
#include <stdio.h>

int main(){
    int i;

    printf("Using for loop:\n");
    for (int i=1; i<=10; i++)
    printf("%d\n",i);


    printf("\nUsing while loop:\n");
    i=1;
    while (i<=10){
        printf("%d\n",i);
        i++;
    }

    printf("\nUsing do-while loop:\n");
    i=1;
    do {
        printf("%d\n",i);
        i++;
    }while (i<=10);
    return 0;
}