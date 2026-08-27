#include <stdio.h> 
int main(void) 
{
    printf("Enter number a:");
    int a, b;
    scanf("%d", & a);

    printf("\nEnter number b:");
    scanf("%d", & b);

    if (a < b) {
        printf("\n%d is less than %d", a,b);
    }

    else if (b < a){
        printf("\n%d is greater than %d", a,b);
    }

    else{
        printf("\n%d is equal to %d", a,b);
    }

}