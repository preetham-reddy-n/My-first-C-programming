#include <stdio.h>

int main(void)
{
    printf("How many rows do you want to have in the left aligned pyramid: ");

    int row;

    scanf("%d", &row);

    for(int i = 1; i<=row; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}