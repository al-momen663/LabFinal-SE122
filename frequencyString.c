#include <stdio.h>
#include <string.h>

void findFrequency(const char *str) {
    int count[256] = {0}; // Assuming ASCII characters

    // Count the frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Display the frequency of each character
    printf("Character Frequency\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c\t%d\n", i, count[i]);
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character if present
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    findFrequency(inputString);

    return 0;
}
