// string probem 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int countConsonants(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);  // Note: Use gets() carefully, as it doesn't check for buffer overflows.

    int vowels = countVowels(str);
    int consonants = countConsonants(str);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
