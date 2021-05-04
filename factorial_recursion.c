#include<stdio.h>
int factorial(int a);

void main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    printf("Factorial of %d if %d.\n", num, factorial(num));
    return 0;
}

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        int f = a * factorial(a-1);
        return f;
    }
}