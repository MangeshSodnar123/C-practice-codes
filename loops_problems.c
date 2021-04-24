// 1) to print the table of the given number.

// # include<stdio.h>
// int main()
// {
//     int number;
//     printf("Enter the number: \n");
//     scanf("%d", &number);
//     int multiplier = 1;
//     while ( multiplier <= 10)
//     {
//         printf("%d\n", number*multiplier);
//         multiplier++;
//     }

//     return 0;
// }

// // 2)multiplication table in a reverse order
// # include<stdio.h>
// int main()
// {
//     int num = 10;
//     int multiplier = 10;
//     printf("The table of 10 in reverse order is \n");
//     for ( multiplier = 10; multiplier; multiplier--)
//     {
//         printf("%d\n", num*multiplier);
//     }

//     return 0;
// }

// // 3) write the program to print the sum of first n numbers, use while loop

// # include<stdio.h>
// int main()
// {
//     int num;
//     int sum =0;
//     int index = 1;
//     printf("Enter the value: \n");
//     scanf("%d\n", &num);

//     while (index <= num)
//     {
//         sum = sum + index;
//         index++;
//     }
//     printf("The sum of first %d numbers is %d.\n", num, sum);

//     return 0;
// }

// // 6) same above problem but use for and do while

// #include <stdio.h>
// int main()
// {
//     int num;
//     int index = 1;
//     int sum = 0;
//     printf("Enter the value: \n");
//     scanf("%d\n", &num);

//     for (index = 1; index <= num; index++)
//     {
//         sum = sum + index;
//     }
//     printf("The sum of first %d numbers is : %d.\n", num, sum);

//     return 0;
// }

// do while loop for above problem

// # include<stdio.h>
// int main()
// {
//     int num;
//     int sum = 0;
//     int index = 1;
//     printf("Enter the value: \n");
//     scanf("%d", &num);

//     do
//     {
//         sum = sum + index;
//         index++;
//     } while (index <= 10);
//     printf("The sum of first %d numbers is: %d\n", num, sum);

//     return 0;
// }

// // 7) print sum of numbers in table of 8

// #include <stdio.h>
// int main()
// {
//     int index = 1;
//     int sum = 0;
//     for (index = 1; index <= 10; index++)
//     {
//         sum = sum + (index * 8);
//     }
//     printf("The sum is : %d\n", sum);

//     return 0;
// }

// // 8) factorial of given number.
// # include<stdio.h>
// int main()
// {
//     int num;
//     int product = 1;
//     int index;
//     printf("Enter the number: \n");
//     scanf("%d", &num);

//     for (index = 1; index <= num; index++)
//     {
//         product = product * index;
//     }
//     printf("The factorial of %d is %d.\n", num, product);

//     return 0;
// }

// // 9) repeat 8 using while.

// #include <stdio.h>
// int main()
// {
//     int index = 1;
//     while (index <= 8)
//     {
//         printf("8\n");
//         index++;
//     }

//     return 0;
// }

// // 10) prime number checker

// #include <stdio.h>
// int main()
// {
//     int num;
//     int index = 2;
//     int index2 = 2;
//     printf("Enter the number: \n");
//     scanf("%d", &num);
//     while (index <= num)
//     {

//         if (index == 2)
//         {
//             printf("2\n");
//         }
//         for (index2 = 2; index2 <= (index / 2) + 1; index2++)
//         {
//             if (index % index2 == 0)
//             {
//                 break;
//             }
//             else if (index2 == (index / 2) + 1)
//             {
//                 printf("%d\n", index);
//             }
//         }

//         index++;
//     }

//     return 0;
// }

// // above program using only for loops

// #include <stdio.h>
// int main()
// {
//     int num;
//     int index = 2;
//     int index2 = 2;
//     printf("Enter the number: \n");
//     scanf("%d", &num);
//     for (index = 2; index <= num; index++)
//     {

//         if (index == 2)
//         {
//             printf("2\n");
//         }
//         for (index2 = 2; index2 <= (index / 2) + 1; index2++)
//         {
//             if (index % index2 == 0)
//             {
//                 break;
//             }
//             else if (index2 == (index / 2) + 1)
//             {
//                 printf("%d\n", index);
//             }
//         }
//     }

//     return 0;
// }

// above programm uaing only while loops

#include <stdio.h>
int main()
{
    int num;
    int index = 2;
    int index2 = 2;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while (index <= num)
    {

        if (index == 2)
        {
            printf("2\n");
        }
        while (index2 <= (index / 2) + 1)
        {   
            if (index % index2 == 0)
            {
                break;
            }
            else if (index2 == (index / 2) + 1)
            {
                printf("%d\n", index);
            }
            index2++;
        }

        index++;
    }

    return 0;
}
