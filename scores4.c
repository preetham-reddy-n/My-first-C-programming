#include <stdio.h>
int main(void)
{
    int n = 3;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        printf("Please enter score number %d:", i+1);
        scanf("%d", &score[i]);
    }
    printf("Average of your scores is: %f\n", (score[0] + score[1] + score[2])/3.0);
}