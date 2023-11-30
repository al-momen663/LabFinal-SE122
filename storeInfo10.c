#include <stdio.h>

// Define a structure to store information about a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare an array of type struct Student to store information for 10 students
    struct Student students[10];

    // Input information for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter information for student %d:\n", i + 1);
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
    for (int i = 0; i < 10; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}
