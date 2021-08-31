#include<stdio.h>
int main()
{
    int marks[10];
    int i = 0;
    int j = 0;
    for( i = 0; i < 5; i++)
    {
        printf("Enter the marks of the student %d:\n", i+1);
        scanf("%d",marks[i]);
    }
    for( j = 0; j < 5; j++)
    {
        printf("%d\n", marks[j]);
    }

    return 0;
}