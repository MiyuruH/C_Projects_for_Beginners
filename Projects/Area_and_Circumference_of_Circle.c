#include <stdio.h>

int main()
{
    //Getting user input for Circle radius.
    float r;
    printf("Enter Radius : ");
    scanf("%f", &r);

    //To calculate and print Area of the circle.
    float area = 3.1428571 * r * r;
    printf("Area of the Circle : %.2f\n", area);

    //To calculate and print Circumference of the circle.
    float circumference = 2 * 3.1428571 * r;
    printf("Circumference of the Circle : %.2f", circumference);

    return 0; 
}