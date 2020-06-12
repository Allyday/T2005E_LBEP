/* 5. Nhập vào số tiền gửi ngân hàng, số năm gửi, giả sử lãi 8%/năm. Hỏi sau bằng đó năm thu được tổng bao nhiêu tiền. */
#include <stdio.h>

int main()
{
  int orgAmount, yearNum;
  int tryCount = 0;
  printf("Chương trình tính số tiền thu được khi gửi tiết kiệm lãi suất 8 phần trăm 1 năm: \n");

  do
  {
    if (tryCount > 0)
      printf("Số tiền không hợp lệ. Vui lòng nhập lại.\n");
    printf("Nhập số tiền gửi: ");
    scanf("%d", &orgAmount);
    tryCount++;
  } while (orgAmount < 1);

  tryCount = 0;
  do
  {
    if (tryCount > 0)
      printf("Số năm không hợp lệ. Vui lòng nhập lại.\n");
    printf("Nhập số năm gửi: ");
    scanf("%d", &yearNum);
    tryCount++;
  } while (yearNum < 1);

  float amount = orgAmount;
  for (int i = 1; i <= yearNum; i++)
  {
    amount *= 1.08;
  }

  printf("Gửi tiết kiệm %d VND sau %d năm sẽ nhận được %f VND.\n", orgAmount, yearNum, amount);
}