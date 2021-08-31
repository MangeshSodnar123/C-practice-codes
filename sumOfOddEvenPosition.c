#include<stdio.h>
int main()
{
    char arr[100] ;
    int i , even = 0 , odd = 0, n = 0 ;
    printf("Input 1: ");
    scanf("%d", &arr[]);
    int n = strlen(arr);
    while( n > 0)
    {
    
    for(int i = 0; i<=100; i++ )
    {
        if(i%2 == 0 )
        {
            int even = even + i ;
        }
        else
        {
            int odd = odd + i ;
        }
    }
    int difference = odd - even ; 
    if( difference < 0 )
    {
        difference = difference*(-1) ; 
        printf("%d", difference);
    }
    else
    {
        printf("%d", difference);
    }
    }

    return 0;
}