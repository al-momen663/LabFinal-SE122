#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWordOccurrence(char sentence[], char word[]) {
    int count = 0;
    char *ptr = sentence;

    // Convert the word and sentence to lowercase for case-insensitive comparison
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }

    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;
        ptr++; // Move to the next character to avoid infinite loop
    }

    return count;
}

int main() {
    char sentence[1000];
    char wordToFind[] = "the";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Convert the sentence to lowercase for case-insensitive comparison
    for (int i = 0; sentence[i]; i++) {
        sentence[i] = tolower(sentence[i]);
    }

    int occurrence = countWordOccurrence(sentence, wordToFind);

    printf("The word '%s' appears %d times in the sentence.\n", wordToFind, occurrence);

    return 0;
}
