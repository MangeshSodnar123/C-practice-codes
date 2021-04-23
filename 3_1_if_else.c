// // 1) checking the output
// #include <stdio.h>
// int main()
// {

//     int a = 10;
//     if (a = 11)
//     {

//         printf("I'm 11\n");
//     }
//     else
//     {
//         printf("I'm 10\n");
//     }
//     return 0;
// }

// 2)student passing checker
// # include<stdio.h>
// int main()
// {
//     int marks1;
//     int marks2;
//     int marks3;

//     printf("Enter the marks of subject 1: \n");
//     scanf("%d", &marks1);
//     printf("Enter the marks of subject 2: \n");
//     scanf("%d", &marks2);
//     printf("Enter the marks of subject 3: \n");
//     scanf("%d", &marks3);

//     float total = (marks1 + marks2 + marks3)/3;
//     if (marks1<33 || marks2<33 || marks3<33 || total<40)
//     {
//         printf("congratulations! You are fail\n");
//     }
//     else
//     {
//         printf("You are pass\n");
//     }
//     return 0;

// }

// 3) income tax calculator

// #include <stdio.h>
// int main()
// {
//     int income;
//     printf("Enter your income in lac: \n");
//     scanf("%d", &income);

//     if (income < 2.5)
//     {
//         printf("You don't need to pay the tax!\n");
//     }
//     else if (income >= 2.5 && income <= 5)
//     {
//         printf("Your income tax is 5 percent and amount is %f lac\n", income * 0.05);
//     }
//     else if (income > 5 && income <= 10)
//     {
//         printf("Your income tax is 20 percent and amount is %flac\n", income * 0.2);
//     }
//     else if (income > 10)
//     {
//         printf("Your income tax is 30 percent and amount is %flac\n", income * 0.3);
//     }

//     return 0;
// }

// // 4) leap year checker

// # include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter the year:\n");
//     scanf("%d",&year);

//     if (year % 4 == 0)
//     {
//         printf("This is leap year.\n");
//     }
//     else
//     {
//         printf("This is not a leap year.\n");
//     }



//     return 0;
// }

// // 5) finding if the character is lowercase or not 
// # include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character:\n");
//     scanf("%c",&ch);
//     if (ch >= 97 && ch <= 122 ) //these are ascii values of the lowercase numbers.
//     {
//         printf("It is the lowercase.\n");
//     }
//     else
//     {
//         printf("It is not lowercase.\n");
//     }


//     return 0;
// }

// 6) Finding the greatest numbers from four given numbers. 

# include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int big1, big2, greatest;
    printf("Enter the value of num1: \n");
    scanf("%d",&num1);
    printf("Enter the value of num2: \n");
    scanf("%d",&num2);
    printf("Enter the value of num3: \n");
    scanf("%d",&num3);
    printf("Enter the value of num4: \n");
    scanf("%d",&num4);

    if (num1 > num2)
    {
        big1 = num1;
    }
    else
    {
        big1 = num2;
    }
    if (num3 > num4)
    {
        big2 = num3;
    }
    else 
    {
        big2 = num4;
    }
    if (big1 > big2)
    {
        greatest = big1;
    }
    else
    {
        greatest = big2;
    }
    printf("The greatest number is %d\n",greatest);
    return 0;
}