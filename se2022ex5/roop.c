#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 10;

  while (b <= c) {
    a = a + b;
    b = b + 1;
  }

  printf("%d", a);

  return 0;
}