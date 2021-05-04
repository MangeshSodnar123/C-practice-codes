#include<stdio.h>
float average(int a, int b, int c); // float is important or it will give you wrong answer.
void main()
{
    int a, b, c;
    printf("Enter the value of first number: \n");
    scanf("%d", &a);
    printf("Enter the value of second number: \n");
    scanf("%d", &b);
    printf("Enter the value of third number: \n");
    scanf("%d", &c);
    printf("The average of these three numbers is: %f\n", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float average;
    average = (float) (a + b + c)/3;
    return average;
}
