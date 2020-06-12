#include <stdio.h>

int main()
{
  int num;
  printf("Input num: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("%d là số dương \n", num);
  }
  else if (num < 0)
  {
    printf("%d là số âm \n", num);
  }
  else
  {
    printf("Đây là số 0 mà -_- Đùa nhau à\n");
  }
}
