/* 1. Nhập 2 số a,b. Tìm ước chung lớn nhất của a và b */
#include <stdio.h>

int main()
{
  int a, b, commonFactor;
  int tryCount = 0;
  printf("Chương trình tìm ước chung lớn nhất của 2 số a và b\n");

  do
  {
    if (tryCount > 0)
      printf("a phải là số tự nhiên lớn hơn 0. Vui lòng nhập lại.\n");
    printf("Nhập a: ");
    scanf("%d", &a);
    tryCount++;
  } while (a < 1);

  tryCount = 0;
  do
  {
    if (tryCount > 0)
      printf("b phải là số tự nhiên lớn hơn 0. Vui lòng nhập lại.\n");
    printf("Nhập b: ");
    scanf("%d", &b);
    tryCount++;
  } while (b < 1);

  int smallerNumber = a < b ? a : b;

  for (int i = 1; i <= smallerNumber; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      commonFactor = i;
    }
  }

  printf("Ước chung lớn nhất của %d và %d là %d\n", a, b, commonFactor);
}