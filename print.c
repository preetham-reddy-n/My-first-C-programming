#include <stdio.h>
int main(void)
{
    printf("Enter something: ");

    char smt[10000];

    scanf("%s", &smt);

    for (int i = 0; smt[i] != '\0'; i++)
    {
        printf("%c\n", smt[i]);
    }
}