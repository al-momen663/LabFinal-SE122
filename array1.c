// array problem 2

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique[n];
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    printf("Array with duplicates removed: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
