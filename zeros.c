#include<stdio.h>
int main()
{   
    int m, n, i=0 ;
    printf("Input\n");
    scanf("%d%d",&m,&n);
    if((m>0)&&(m<999) || (n>0)&&(n<999))
    {
        if( n<=10)
        {
            for(int i = m; i<n; i++ )
            {
                printf(" 0%d",i);
            }
            printf(" %d",n );
        }
        else if(n>10)
        {
            for(int i = m; i<=n; i++ )
            {
                if(i<10)
                {
                    printf(" 00%d",i);
                }
                else if(i>9 && i<99)
                {
                    printf(" 0%d",i);
                }
                else
                {
                    printf(" %d",i);
                }
            }
        }
       
    }
    return 0;
}