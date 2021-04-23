// // This is first way to calcutale the area of the triangle 
// # include<stdio.h>
// int main() {

// int height = 10;
// int base = 20;
// printf("Area of the triangle is %d", height*base/2);
//     return 0;
// }

// area of the triangle by taking the user input
# include<stdio.h>
int main() {
int base;
int height;

printf("Enter the value of the base: ");
scanf("%d",&base);

printf("Enter the valur of the height: ");
scanf("%d", &height);

printf("Area of the triangle is %d", base*height/2);

    return 0;
}