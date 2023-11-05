// problem 7
#include <stdio.h>

struct student {
  char name[50];
  char blood_group[10];
  int age;
};

int main() {
  struct student students[10];
  int i;

  for (i = 0; i < 3; i++) {
    printf("Enter student %d's name: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter student %d's blood group: ", i + 1);
    scanf("%s", students[i].blood_group);
    printf("Enter student %d's age: ", i + 1);
    scanf("%d", &students[i].age);
  }

  printf("\nStudents' information:\n");
  for (i = 0; i < 3; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Blood group: %s\n", students[i].blood_group);
    printf("Age: %d\n", students[i].age);
  }

  return 0;
}