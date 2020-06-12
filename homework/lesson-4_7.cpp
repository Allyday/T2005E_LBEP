/* 7. Nhập vào đến khi được 1 số vượt quá 1000. Báo ra kết quả là số lần đã nhập và giá trị trung bình của các lần nhập trước là bao nhiêu. */
#include <stdio.h>

int main()
{
  int n, sum = 0;
  int tryCount = 0, error = 0;

  do
  {
    do
    {
      if (error)
      {
        printf("Bạn phải nhập số tự nhiên lớn hơn 0. Vui lòng nhập lại.\n");
        error = false;
      }
      if (tryCount == 0)
      {
        printf("Nhập số đầu tiên: ");
      }
      else
      {
        printf("Nhập số tiếp theo: ");
      }
      scanf("%d", &n);
      if (n < 1)
        error = true;
    } while (n < 1);
    sum += n;
    tryCount++;
  } while (sum <= 1000);

  int average = sum / tryCount;

  printf("Tổng các số đã vượt quá 1000!\n");
  printf("Số lần nhập: %d \n", tryCount);
  printf("Giá trị trung bình các lần nhập: %d \n", average);
}