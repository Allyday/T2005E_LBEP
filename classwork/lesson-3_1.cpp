#include <stdio.h>

int main()
{
  int orgNumber, number;
  printf("Nhập số nguyên dương: ");
  scanf("%d", &orgNumber);
  number = orgNumber;

  int hangNghin, hangTram, hangChuc, hangDonVi;
  hangDonVi = number % 10;
  number /= 10;
  hangChuc = number % 10;
  number /= 10;
  hangTram = number % 10;
  number /= 10;
  hangNghin = number;

  int reverseNumber;
  if (orgNumber > 999)
  {
    reverseNumber = hangDonVi * 1000 + hangChuc * 100 + hangTram * 10 + hangNghin;
  }
  else if (orgNumber > 99)
  {
    reverseNumber = hangDonVi * 100 + hangChuc * 10 + hangTram;
  }
  else if (orgNumber > 9)
  {
    reverseNumber = hangDonVi * 10 + hangChuc;
  }
  else
  {
    reverseNumber = hangDonVi;
  }

  printf("Số đảo ngược của %d là %d\n", orgNumber, reverseNumber);
}
