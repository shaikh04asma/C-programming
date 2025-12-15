#include <stdio.h>
#include <ctype.h>   // used for tolower() function

int main() {
    char ch, lowerChar;

    // Input from user
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert to lowercase for simplified checking
    lowerChar = tolower(ch);

    // Switch-case to identify vowel or consonant
    switch (lowerChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;

        default:
            if (lowerChar >= 'a' && lowerChar <= 'z')
                printf("%c is a consonant.\n", ch);
            else
                printf("Invalid input! Please enter a valid alphabet.\n");
    }

    return 0;
}
