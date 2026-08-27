#include <stdio.h>

void print_row(int bricks);

int main(void)
{
    int height;

    do
    {
        printf("Enter height of the left aligned pyramid: ");

        scanf("%d", &height);
    }

    while(height<1);
    

    for(int i = 1; i<= height; i++)
    {
        print_row(i);
        printf("\n");
    }
    
}

void print_row(int bricks)
{
    for (int i =0; i< bricks; i++)
    {printf("#");
    }
}