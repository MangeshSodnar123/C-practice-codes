# include<stdio.h>
int main()
{
int a;
printf("Enter the number : \n");
scanf("%d", &a);

switch (a)
{
case 1:
    printf("This is case 1\n");
    break;
case 2:
    printf("This is case 2\n");
    break;
case 3:
    printf("This is case 3\n");
    break;
case 4:
    printf("This is case 4\n");
    break;

default:
    break;
}
    return 0;
}