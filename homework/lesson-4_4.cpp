/* 4. Nhập 1 số n, tìm các ước và tính tổng ước của n */
#include <stdio.h>

int main()
{
  int n;
  int tryCount = 0;
  printf("Nhập 1 số n, tìm các ước và tính tổng ước của n. \n");

  do
  {
    if (tryCount > 0)
      printf("n không hợp lệ. Vui lòng nhập lại.\n");
    printf("Nhập n: ");
    scanf("%d", &n);
    tryCount++;
  } while (n < 1);

  int sum = 0;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
      printf("Ước thứ %d: %d\n", count, i);
      sum += i;
    }
  }

  printf("Tổng các ước của %d là %d\n", n, sum);
}