#include <stdio.h>
int main()
{
    int a = 5;
    for (a = 5; a; a--) // this syntax is valid as value of test statement is true, it will run until a becomes 0
    {

        if (a == 3)
        {
            // continue; // if a becomes 3 then this step will be opted and loop go for next step without termination.
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", a);
            // break; // this will break the loop irrespective of the condition.
        }
    }

    return 0;
}
