#include <stdio.h>
#include <stdlib.h>

// Define a structure to store information about a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of struct Student
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Check if memory allocation is successful
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);  // Assumes names do not have spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
