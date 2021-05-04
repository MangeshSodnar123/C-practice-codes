#include<stdio.h>
int fibonacci(int num);

int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    printf("The %dth fibbonacci number is %d", num, fibonacci(num));
    return 0;
}

int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    return fibonacci(num - 2) + fibonacci(num - 1);
}