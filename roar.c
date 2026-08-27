#include <stdio.h>

int main(){
    printf("How many times do you want to roar?\n");

    int a;

    scanf("%d", & a);

    while(a>0)
    {
        printf("roar\n");
        a--;

    }
}