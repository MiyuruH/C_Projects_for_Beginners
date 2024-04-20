#include <stdio.h>

int main()
{
    // Array to store the number of each banknote
    int notes[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int total, amount;

    // User to enter the amount
    printf("Input the Amount : Rs.");
    scanf("%d", &amount);

    // Calculate the number of each banknote
    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); ++i)
    {
        total = amount / notes[i];
        printf("Notes of Rs.%-4d: %d\n", notes[i], total);
        amount = amount % notes[i];
    }
    return 0;
}