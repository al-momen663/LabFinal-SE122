#include <stdio.h>
#include <string.h>

int isSubstring(char str[], char substr[]) {
    int len_str = strlen(str);
    int len_substr = strlen(substr);

    for (int i = 0; i <= len_str - len_substr; i++) {
        int j;

        // Check if substring matches starting from index i
        for (j = 0; j < len_substr; j++) {
            if (str[i + j] != substr[j]) {
                break;  // Break the loop if mismatch is found
            }
        }

        // If the loop completed without a break, the substring is found
        if (j == len_substr) {
            return 1; // Substring found
        }
    }

    return 0; // Substring not found
}

int main() {
    char str[100], substr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a substring to check: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters from inputs
    strtok(str, "\n");
    strtok(substr, "\n");

    if (isSubstring(str, substr)) {
        printf("Substring '%s' is present in the string '%s'\n", substr, str);
    } else {
        printf("Substring '%s' is not present in the string '%s'\n", substr, str);
    }

    return 0;
}
