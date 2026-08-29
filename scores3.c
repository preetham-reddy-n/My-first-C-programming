#include <stdio.h>

int main(void)
{
    int score[3];

    for(int i =0; i < 3; i++)
    {
        printf("Please enter score number %d : ", i+1);

        scanf("%d", &score[i]);
    }

    printf("Your average score is : %f", (score[0] + score[1] + score[2])/3.0);
}