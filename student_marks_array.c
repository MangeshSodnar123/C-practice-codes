#include<stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of the student :\n");
        scanf("%d", &marks[i]);
        printf("%d", marks[i]);
    }
    return 0;
}