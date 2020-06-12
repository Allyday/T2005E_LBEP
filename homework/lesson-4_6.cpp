/* 6. Nhập vào số tiền gửi ngân hàng, số tiền muốn thu được, giả sử lãi 8% /năm. Hỏi cần gửi bao nhiêu năm */
#include <stdio.h>

int main()
{
  int orgAmount, finalAmount;
  int tryCount = 0;
  printf("Chương trình tính số năm cần gửi tiết kiệm lãi suất 8 phần trăm 1 năm để thu được số tiền A: \n");

  do
  {
    if (tryCount > 0)
      printf("Số tiền gửi không hợp lệ. Vui lòng nhập lại.\n");
    printf("Nhập số tiền gửi A: ");
    scanf("%d", &orgAmount);
    tryCount++;
  } while (orgAmount < 1);

  tryCount = 0;
  do
  {
    if (tryCount > 0)
      printf("Số tiền nhận được không hợp lệ. Vui lòng nhập lại.\n");
    printf("Nhập số tiền nhận được B: ");
    scanf("%d", &finalAmount);
    tryCount++;
  } while (finalAmount < orgAmount);

  float amount = orgAmount;
  int yearNum = 0;

  do
  {
    amount *= 1.08;
    yearNum++;
  } while (amount < finalAmount);

  printf("Gửi tiết kiệm %d VND sau ít nhất %d năm sẽ nhận được %d VND.\n", orgAmount, yearNum, finalAmount);
}