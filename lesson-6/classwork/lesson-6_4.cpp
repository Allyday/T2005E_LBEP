#include <stdio.h>

int main()
{
  int n, x;
  printf("Chương trình tìm x trong mảng n số \n");
  printf("Nhập n: ");
  scanf("%d", &n);

  int nums[n];
  int includeX = false;

  for (int i = 0; i < n; i++)
  {
    printf("Nhập số thứ %d: ", i + 1);
    scanf("%d", &nums[i]);
  }

  printf("Nhập x: ");
  scanf("%d", &x);

  for (int i = 0; i < n; i++)
  {
    if (nums[i] == x)
      includeX = true;
  }

  if (includeX)
  {
    printf("Trong %d số trên có chứa số %d \n", n, x);
  }
  else
  {
    printf("Trong %d số trên không chứa số %d \n", n, x);
  }
}
