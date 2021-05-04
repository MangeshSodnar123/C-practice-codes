#include<stdio.h>
int main()
{
    char a , b;
    int *j, *i;
    j = &a;
    i = &b;
    printf("%d\n", j);
    printf("%d\n", i);
    printf("%d", j-i);
    return 0;
}