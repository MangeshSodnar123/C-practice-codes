#include<stdio.h>

int address(int var);
int main()
{
    int i = 5;
    printf("a have address %d in main\n", &i);
    address(i);
    return 0;
}


int address(int var)
{
    printf("The address of the variable %d is %d\n", var, &var);

}

// CONCLUSTION: The address of the same variable in the main and other function are different.