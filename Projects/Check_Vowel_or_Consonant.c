#include <stdio.h>

int main() {
    char cha;

    // User to enter a character
    printf("Enter a character: ");
    scanf(" %c", &cha);

    // Check if the entered character is a vowel or a consonant using switch case
    switch (cha) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", cha);
            break;
        default:
            printf("%c is a consonant.\n", cha);
    }

    return 0;
}
