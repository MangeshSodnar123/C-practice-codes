#include<stdio.h>

int main()
{
    int a = 5;
    int *b;
    int **c;
    b = &a;
    c = &b;
    printf("the address a is %d\n", b);
    printf("and the value of the variable a is %d\n", *b);
    printf("also the value of the variable b is %d or %d", *c, b);
    return 0;
}