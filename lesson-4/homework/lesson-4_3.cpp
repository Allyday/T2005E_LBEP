/* 3. Nhập 1 số từ bàn phím mà bắt buộc phải là 1 thứ trong tuần mới được. */
#include <stdio.h>

int main()
{
  int dayOfTheWeek;
  int tryCount = 0;
  printf("Nhập vào số n, với n là một ngày trong tuần: \n");

  do
  {
    if (tryCount > 0)
      printf("Bạn đã nhập sai. Vui lòng nhập lại: ");
    scanf("%d", &dayOfTheWeek);
    tryCount++;
  } while (dayOfTheWeek < 2 || 7 < dayOfTheWeek);

  printf("Success! \n");
}