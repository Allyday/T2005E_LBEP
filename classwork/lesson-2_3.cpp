#include <stdio.h>

int main()
{
  int num;
  printf("Input num: ");
  scanf("%d", &num);
  int remainder = num % 2;
  if (remainder == 0)
  {
    printf("%d là số chẵn \n", num);
  }
  else
  {
    printf("%d là số lẻ \n", num);
  }
}
