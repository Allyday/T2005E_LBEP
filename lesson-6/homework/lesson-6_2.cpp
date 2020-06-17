#include <stdio.h>

int main()
{
  int n;
  printf("Chương trình nhập vào mảng n số nguyên, tìm số dương nhỏ nhất \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }

  int minPositive = nums[0];
  for (int i = 0; i < n; i++)
  {
    if (nums[i] > 0 && (nums[i] < minPositive || minPositive < 0))
    {
      minPositive = nums[i];
    }
  }

  if (minPositive > 0)
  {
    printf("Số dương nhỏ nhất trong %d số vừa rồi là %d \n", n, minPositive);
  }
  else
  {
    printf("Bạn nhập vào toàn số âm hoặc số 0 nên không tìm đc số dương nào \n");
  }
}
