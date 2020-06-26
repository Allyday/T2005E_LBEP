#include <stdio.h>

float average(int s[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += s[i];
  }
  return (float)sum / n;
}

int main()
{
  int nums[5];

  printf("Enter 5 numbers: \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &nums[i]);
  }

  float avg = average(nums, 5);

  printf("Average: %0.1f \n", avg);
}
