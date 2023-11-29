#include <stdio.h>
#include <ctype.h>

void countCharacters(char *str) {
    int alphabets = 0, digits = 0, specialChars = 0, vowels = 0, whiteSpace = 0, consonants = 0;

    while (*str) {
        if (isalpha(*str)) {
            alphabets++;
            if (tolower(*str) == 'a' || tolower(*str) == 'e' || tolower(*str) == 'i' || tolower(*str) == 'o' || tolower(*str) == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(*str)) {
            digits++;
        } else if (isspace(*str)) {
            whiteSpace++;
        } else {
            specialChars++;
        }

        str++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("White Space: %d\n", whiteSpace);
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    countCharacters(inputString);

    return 0;
}
 