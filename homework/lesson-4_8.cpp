/* 8. Nhập 1 số n từ bàn phím. Tìm số thứ n trong dãy Fibonaci */
#include <stdio.h>

int main()
{
  int n;
  int tryCount = 0;
  printf("Chương trình tìm số thứ n trong dãy Fibonacci\n");

  do
  {
    if (tryCount > 0)
      printf("n phải là số tự nhiên lớn hơn 0. Vui lòng nhập lại.\n");
    printf("Nhập n: ");
    scanf("%d", &n);
    tryCount++;
  } while (n < 1);

  int morePreviousNum = 1, previousNum = 1, currentNum;

  for (int i = 3; i <= n; i++)
  {
    currentNum = morePreviousNum + previousNum;
    morePreviousNum = previousNum;
    previousNum = currentNum;
  }

  if (n < 3)
    currentNum = 1;

  printf("số thứ %d trong dãy Fibonacci là %d\n", n, currentNum);
}