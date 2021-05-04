#include<stdio.h>

int changeMag(int *var);

int main()
{
    int i = 4;
    int *j;
    j = &i;
    printf("Initial valure of the i is %d\n", i);
    changeMag(j);
    printf("The value of i after function call is %d\n", i);
    return 0;
}



int changeMag(int *var)
{
 *var = (10 * (*var));
}