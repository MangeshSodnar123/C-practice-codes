#include<stdio.h>
int sumNum(int num);
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The sum of %d natural numbers is: %d\n", num, sumNum(num));
    return 0;
}


int sumNum(int num)
{   
    int sumOfNum =0, i;
    
    for ( i = 0; i < num+1; i++)
    {
        sumOfNum = sumOfNum + i;
    }
    return sumOfNum;
}