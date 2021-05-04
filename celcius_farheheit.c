#include<stdio.h>
float conversion(int celcius);

int main()
{
    int celcius;
    printf("Enter the temperature in celcius.\n");
    scanf("%d", &celcius);
    printf("Temperature in farhenheit is : %f", conversion(celcius));
    return 0;
}

float conversion(int celcius)
{
    
    float farhenheit;
    farhenheit = (float) ((celcius * 1.8)+ 32);

    return farhenheit;
}