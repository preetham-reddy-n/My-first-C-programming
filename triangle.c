#include <stdio.h> 
#include <stdbool.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    float a, b, c;

    printf("enter the lengths of sides of the triangle: \n");

    scanf("%f %f %f", &a, &b, &c);

    if (valid_triangle( a, b, c) == true)
    {
        printf("Yes, The lengths of sides you entered for a triangle are valid.\n");
    }

    else
    {
        printf("No, The lengths of sides you entered for a triangle are invalid\n");
    }
}

bool valid_triangle( float a, float b, float c)

{

    if(a <=0 || b <= 0 || c <= 0)
    {
        return false;
    }

    if(a + b >c && b + c > a && c + a > b)
    {
        return true;
    }

    return false;
}