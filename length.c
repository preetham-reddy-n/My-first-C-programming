#include <stdio.h>

int main(void)
{
    char name[10000];
    printf("Please neter your name: ");

    scanf("%s", name);

    int i = 0;

    while(name[i] != '\0' )
    {
        i++;
    }

    printf("The length of your name is: %d", i);
}