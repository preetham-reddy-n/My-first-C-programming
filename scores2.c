#include <stdio.h>

int main(void)
{
    float score[3];
    printf("Plaese enter your scores one after the other:\n");
    scanf("%f %f %f %f", &score[0], &score[1], &score[2], &score[3]);
    printf("Average of your scores is: %f\n", (score[0] + score[1] + score[2] + score[3])/4);
}