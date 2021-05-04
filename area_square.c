#include<stdio.h>
int areaSquare(int side);
void main()
{
    int side;
    printf("Enter the side of the square: \n");
    scanf("%d", &side);
    printf("The area of the given square is %d \n", areaSquare(side));
    return 0;
}

int areaSquare(int side)
{
    int area = side * side;
    return area;
}
