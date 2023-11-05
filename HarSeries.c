// loop problem 3
#include <stdio.h>


int main() {
  int n;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  float sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += 1.0 / i;
    printf("1/%d + ", i);
  }

  printf("\nThe sum of the harmonic series is %f\n", sum);

  return 0;
}