#include <stdio.h>
#include <stdlib.h>

int main()
{
  int luckyNumbers [11] = {2,3,5,7,11,13,17,19,23,27};
  // reaching index
  printf("%d,%d,%d.\n", luckyNumbers[0], luckyNumbers[3], luckyNumbers[7]);
  // modifying with index
  luckyNumbers[2] = 6;

  // array length
  size_t arrayLength = sizeof(luckyNumbers)/sizeof(luckyNumbers[0]);

  luckyNumbers[10] = 31;
  printf("%d\n", luckyNumbers[10]);
    // code below will make program crash ==> exceeds allocated memory
  // luckyNumbers[12] = 37;


  // 2D Array

  int nums [4] [2] = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
  };
  // nums[0][0] = 1; etc etc

  printf("%d\n", nums[1][0]);
  printf("%d\n", nums[2][1]);

  return 0;
}
