// loop problem 1

#include <stdio.h>

int main() {
  int integer;

  printf("Enter an integer: ");
  scanf("%d", &integer);

  printf("The multiplication table for %d is:\n", integer);

  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", integer, i, integer * i);
  }

  return 0;
}