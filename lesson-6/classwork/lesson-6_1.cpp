#include <stdio.h>

int main()
{
  printf("Chương trình nhập vào 10 số nguyên, tìm số lẻ lớn nhất \n");
  int nums[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }
  int maxOdd = nums[1];

  for (int i = 0; i < 10; i++)
  {
    if (nums[i] % 2 != 0 && (maxOdd % 2 == 0 && nums[i] > maxOdd))
    {
      maxOdd = nums[i];
    }
  }

  if (nums[1] % 2 == 0)
  {
    printf("Bạn nhập vào toàn số chẵn nên không tìm đc số lẻ lớn nhất \n");
  }
  else
  {
    printf("Số lẻ lớn nhất trong 10 số vừa rồi là %d \n", maxOdd);
  }
}
