#include<stdio.h>
void starPattern(int num);

void main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    starPattern(num);
}

void starPattern(int num)
{
    if (num ==1)
    {
        printf("*");
        return;
    }
    int i;
    for ( i = 0; i<(num*2-1); i++)
    {
        printf("*");

    }
    printf("\n");
    starPattern(num-1);
}