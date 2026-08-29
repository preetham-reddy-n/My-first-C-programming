#include <stdio.h>

void get_scores_avg( int a);

int main(void)
{
    printf("How many scores do you want to enter?\n");
    int x;
    scanf("%d", &x);

    get_scores_avg(x);
}


void get_scores_avg(int a)
{
    int score[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter score number %d: ", i+1);

        scanf("%d", &score[i]);
    }

    float sum_score = 0;

    for (int j = 0; j < a; j++)
    {
        sum_score += score[j];
    }

    float avg_score = sum_score/a;

    printf("Your average score is: %f\n", avg_score);

}