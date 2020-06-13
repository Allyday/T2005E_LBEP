#include <stdio.h>

int main()
{
  for (int i = 0; i < 10; i++) /* each row */
  {
    for (int j = 0; j < i; j++) /* each column */
    {
      printf("*\t");
    }
    printf("\n");
  }
}
