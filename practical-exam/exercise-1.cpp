#include <stdio.h>

int main()
{
  int nums[5];
  int lastEven = -1;

  printf("Enter 5 numbers: \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &nums[i]);
  }

  for (int i = 4; i >= 0; i--)
  {
    if (nums[i] % 2 == 0)
    {
      lastEven = nums[i];
      break;
    }
  }

  if (lastEven != -1)
  {
    printf("Last Even: %d \n", lastEven);
  }
  else
  {
    printf("No even numbers \n");
  }
}
