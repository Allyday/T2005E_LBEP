#include <stdio.h>

int main()
{
  int n;
  printf("Chương trình nhập vào mảng n số nguyên, tìm tổng lớn nhất của 1 chuỗi số dương liên tiếp \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }

  int maxPositiveSum = 0;
  for (int i = 0, positiveSum = 0; i < n; i++)
  {
    if (nums[i] > 0)
    {
      positiveSum += nums[i];

      if ((i == n - 1 || nums[i + 1] <= 0) && positiveSum > maxPositiveSum)
      {
        maxPositiveSum = positiveSum;
        positiveSum = 0;
      }
    }
  }

  if (maxPositiveSum > 0)
  {
    printf("Tổng lớn nhất của 1 chuỗi số dương liên tiếp trong %d số vừa rồi là %d \n", n, maxPositiveSum);
  }
  else
  {
    printf("Bạn nhập vào toàn số âm hoặc số 0 nên không tìm đc số dương nào \n");
  }
}
