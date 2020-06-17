#include <stdio.h>

int main()
{
  int n;
  printf("Chương trình nhập vào mảng n số nguyên, tìm số lẻ cuối cùng của mảng \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];
  int lastOdd;

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    if (nums[i] % 2 != 0)
    {
      lastOdd = nums[i];
      break;
    }
  }

  if (lastOdd)
  {
    printf("Số lẻ lớn nhất trong %d số vừa rồi là %d \n", n, lastOdd);
  }
  else
  {
    printf("Bạn nhập vào toàn số chẵn nên không tìm đc số lẻ nào \n");
  }
}
