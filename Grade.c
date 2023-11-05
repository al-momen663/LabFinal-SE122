// if else problem 2
#include <stdio.h>

int main() {
  float percentage;

  printf("Enter the percentage marks of the student: ");
  scanf("%f", &percentage);

  char grade;

  if (percentage >= 90) {
    grade = 'A';
  } else if (percentage >= 80) {
    grade = 'B';
  } else if (percentage >= 70) {
    grade = 'C';
  } else if (percentage >= 60) {
    grade = 'D';
  } else if (percentage >= 40) {
    grade = 'E';
  } else {
    grade = 'F';
  }

  printf("The grade of the student is %c\n", grade);

  return 0;
}