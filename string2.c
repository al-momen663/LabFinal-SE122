// string problem 2
#include <stdio.h>
#include <string.h>

int isSubstring(const char *str, const char *sub) {
    int len1 = strlen(str);
    int len2 = strlen(sub);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // Substring found
        }
    }

    return 0; // Substring not found
}

int main() {
    char str[100], sub[100];
    
    printf("Enter a string: ");
    gets(str);

    printf("Enter a substring to check: ");
    gets(sub);

    if (isSubstring(str, sub)) {
        printf("'%s' is a substring of '%s'\n", sub, str);
    } else {
        printf("'%s' is not a substring of '%s'\n", sub, str);
    }

    return 0;
}
