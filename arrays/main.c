#include <stdio.h>
#include <stdlib.h>

int main()
{
  int luckyNumbers [11] = {2,3,5,7,11,13,17,19,23,27};
  // reaching index
  printf("%d,%d,%d.\n", luckyNumbers[0], luckyNumbers[3], luckyNumbers[7]);
  // modifying with index
  luckyNumbers[2] = 6;

  // code below will make program crash ==> exceeds allocated memory
  // luckyNumbers[12] = 37;
  luckyNumbers[10] = 31;
  printf("%d", luckyNumbers[10]);

  return 0;
}
