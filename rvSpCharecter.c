#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0'; // Null-terminate the modified string
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
    
    removeNonAlphabets(inputString);
    
    printf("String after removing non-alphabetic characters: %s\n", inputString);
    
    return 0;
}
