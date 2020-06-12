/* 2. Nhập 1 số nguyên dương n, tìm số thuộc dãy fibonacci nhỏ hơn và gần n nhất */
#include <stdio.h>

int main()
{
  int n;
  int tryCount = 0;
  printf("Chương trình tìm số thuộc dãy fibonacci nhỏ hơn và gần n nhất\n");

  do
  {
    if (tryCount > 0)
      printf("n phải là số tự nhiên lớn hơn 0. Vui lòng nhập lại.\n");
    printf("Nhập n: ");
    scanf("%d", &n);
    tryCount++;
  } while (n < 1);

  int morePreviousNum = 1, previousNum = 1, currentNum = 2;

  while (n > currentNum + previousNum)
  {
    morePreviousNum = previousNum;
    previousNum = currentNum;
    currentNum = morePreviousNum + previousNum;
  }

  printf("Số thuộc dãy Fibonacci nhỏ hơn và gần %d nhất là %d\n", n, currentNum);
}