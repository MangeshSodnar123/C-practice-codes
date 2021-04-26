# include<stdio.h>
# include<stdlib.h>
# include<time.h>
void randomNum();

void main()
{
    
    printf("initializing function\n");
    randomNum();
    printf("ending function\n");
    return 0;
}
void randomNum()
{
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    printf("generated random number is %d\n", number);
    return 0;
}