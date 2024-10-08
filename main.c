#include <stdio.h>
#include <math.h>

int factorial(int n);

int main(void) {
 int n = 0;
  printf("Enter a whole number: ");
    scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}

int factorial(int n) {
  return n == 1 || n == 0 ? 1 : (n * factorial(n - 1));
}
