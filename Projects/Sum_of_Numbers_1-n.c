#include <stdio.h>

// Function to calculate the sum of numbers from 1 to n recursively
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is non-negative
    if (n < 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1;
    }

    // Calculate sum using recursion
    int result = sum(n);

    // Output
    printf("Sum of numbers from 1 to %d is %d.\n", n, result);

    return 0;
}
