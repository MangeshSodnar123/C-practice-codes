#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg);

int main()
{
    int a, b, sum;
    float avg;
    a = 6;
    b = 6;
    sumAndAvg(a, b, &sum, &avg);
    printf("The value of the sum is %d\n", sum);
    printf("The value of the average is %f\n", avg);

    return 0;
}

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float) (*sum)/2;

}