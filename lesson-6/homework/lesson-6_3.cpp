#include <stdio.h>

int main()
{
  int n;
  printf("Chương trình nhập vào mảng n số nguyên, tìm số các số dương liên tiếp nhiều nhất \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }

  int positivesInARow = 0;
  for (int i = 0, positiveCount = 0; i < n; i++)
  {
    if (nums[i] > 0)
    {
      positiveCount++;

      if ((i == n - 1 || nums[i + 1] <= 0) && positiveCount > positivesInARow)
      {
        positivesInARow = positiveCount;
        positiveCount = 0;
      }
    }
  }

  if (positivesInARow > 0)
  {
    printf("Số các số dương liên tiếp nhiều nhất trong %d số vừa rồi là %d \n", n, positivesInARow);
  }
  else
  {
    printf("Bạn nhập vào toàn số âm hoặc số 0 nên không tìm đc số dương nào \n");
  }
}
