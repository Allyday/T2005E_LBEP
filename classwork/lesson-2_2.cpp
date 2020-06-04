#include <stdio.h>

int main()
{
  int n, n2;
  scanf("%d", &n);

  n2 = n * n;
  printf("%d squared: %d\n", n, n2);

  float f = 3.14159;
  printf("Pi: %f\n", f);

  double d = 1.23456;
  printf("Double d: %lf\n", d);

  char c = 'a';
  printf("Character c: %c\n", c);
}
