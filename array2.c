// array problem 2

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void separateEvenOdd(int arr[], int size) {
    int evenIndex = 0;
    int oddIndex = 0;

    // Separate even and odd elements into two separate sub-arrays
    int even[size], odd[size];

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex] = arr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    // Sort the even and odd sub-arrays
    for (int i = 0; i < evenIndex - 1; i++) {
        for (int j = 0; j < evenIndex - i - 1; j++) {
            if (even[j] > even[j + 1]) {
                swap(&even[j], &even[j + 1]);
            }
        }
    }

    for (int i = 0; i < oddIndex - 1; i++) {
        for (int j = 0; j < oddIndex - i - 1; j++) {
            if (odd[j] > odd[j + 1]) {
                swap(&odd[j], &odd[j + 1]);
            }
        }
    }

    // Merge the even and odd sub-arrays back into the original array
    int index = 0;
    for (int i = 0; i < evenIndex; i++) {
        arr[index] = even[i];
        index++;
    }
    for (int i = 0; i < oddIndex; i++) {
        arr[index] = odd[i];
        index++;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    separateEvenOdd(arr, size);

    printf("Sorted array with even and odd elements separated:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");

    return 0;
}
