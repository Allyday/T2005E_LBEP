/* 1. Nhập 1 số n từ bàn phím, in ra các số chẵn bé hơn n */
#include <stdio.h>

int main()
{
  int n;
  printf("Nhập 1 số n từ bàn phím, in ra các số chẵn bé hơn n\n");

  do
  {
    printf("Nhập n: ");
    scanf("%d", &n);
  } while (n <= 0);

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      printf("%d\n", i);
  }
}