# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main()
{
    int number, guess, chances = 0;
    srand(time(0));
    number = rand()%100 + 1;

    printf("%d\n", number);
    
    
    do
    {
        printf("Guess the number\n");
        scanf("%d", &guess);
        if ( guess < number)
        {
            printf("Enter the higher number.\n");
        }
        else if ( guess > number)
        {
            printf("Enter the lower number.\n");
        }
        else if ( guess == number)
        {
            printf("you win.\n");
            break; 
        }
        chances++;
    }while(guess != number);
    if (guess == number)
    {
        printf("You guessed right in %d guesses\n", chances);
    }
    return 0;
}