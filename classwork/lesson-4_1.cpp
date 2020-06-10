#include <stdio.h>

int main()
{
  int sum = 0;

  printf("Chương trình tính tổng 100 số lẻ > 0 đầu tiên\n");

  for (int i = 1; i <= 100; i++)
  {
    sum += i * 2 - 1;
  }

  printf("S = %d\n", sum);
}