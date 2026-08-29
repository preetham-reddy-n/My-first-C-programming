#include <stdio.h>

int str_len(char name[]);

int main(void)
{
    printf("Enter something: ");

    char smt[10000];

    scanf("%s", &smt);

    for (int i = str_len(smt); i >= 0; i--)
    {
        printf("%c", smt[i]);
    }
}

int str_len(char name[])
{

    int j = 0;

    while(name[j] != '\0' )
    {
        j++;
    }

    return j;
}