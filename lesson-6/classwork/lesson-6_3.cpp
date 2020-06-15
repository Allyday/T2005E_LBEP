#include <stdio.h>

int main()
{
  int n;
  printf("Chương trình tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];
  int oddCount = 0, oddSum = 0;

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
    if (nums[i] % 2 != 0 && i % 2 == 0)
    {
      oddSum += nums[i];
      oddCount++;
    }
  }

  if (oddCount == 0)
  {
    printf("Bạn nhập vào toàn số chẵn ở vị trí chẵn nên không tính được trung bình cộng các số lẻ \n");
  }
  else
  {
    float oddAverage = oddSum / oddCount;
    printf("Trung bình cộng các số lẻ trong mảng %d số trên là %f \n", n, oddAverage);
  }
}
