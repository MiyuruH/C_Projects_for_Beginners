#include <stdio.h>

// Function to calculate square
double square(double num) {
    return num * num;
}

int main() {
    double number, result;

    // Input
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate square using the function
    result = square(number);

    // Output
    printf("Square of %.2lf is %.2lf\n", number, result);

    return 0;
}
