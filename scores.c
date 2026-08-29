#include <stdio.h>

int main(void)
{
    float x, y, z;
    printf("Enter your scores one after the other:\n");
    scanf("%f %f %f", &x, &y, &z);
    float avg = (x + y + z)/3;
    printf("The avg of the three numbers is %f", avg);
}