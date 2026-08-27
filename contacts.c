#include <stdio.h>

int main()
{
    printf("Enter your name: ");
    char name[100];
    scanf("%s", &name);

    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    printf("Enter your phone number: ");
    char num[100];
    scanf("%s", & num);
   
    printf("Enter your location: ");
    char loc[1000];
    scanf("%s", &loc);

    printf("Your contact info is: %s, %d, %s, %s", loc, age, num, name, ("\n"));
    
}