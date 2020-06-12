/* 2. Yêu cầu người dùng nhập vào 1 trong các ký tự: y Y n N. */
#include <stdio.h>

int main()
{
  char character;
  int tryCount = 0;
  printf("Nhập vào 1 trong các ký tự sau: y Y n N\n");

  do
  {
    if (tryCount > 0)
      printf("Bạn đã nhập sai. Vui lòng nhập lại: ");
    scanf(" %c", &character);
    tryCount++;
  } while (character != 'y' && character != 'Y' && character != 'n' && character != 'N');

  printf("Success! \n");
}