#include <stdio.h>

// Define a structure to store information about a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student;

    // Input student information
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter student marks: ");
    scanf("%f", &student.marks);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
