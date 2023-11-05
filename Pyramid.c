// loop problem 2
#include <stdio.h>


int main(){
  int rows, n=3;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= (rows - i); j++) {
      printf(" ");
    }

    for (int j = 1; j <= i; j++) {
      printf("%d ", n++);
    }
    printf("\n");
  }

  return 0;
}