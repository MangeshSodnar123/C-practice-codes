# include<stdio.h>
int main()
{
    int a;
    int i = 0;
    printf("Enter the value of a : \n");
    scanf("%d", &a);

    do
    {
        printf("%d\n",i);
        i++;
    } while (i <= a);
    

    return 0;
}