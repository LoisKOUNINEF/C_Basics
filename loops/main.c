#include <stdio.h>
#include <stdlib.h>

int main()
{
  int index = 1;
  while(index <= 5) {
    printf("%d\n", index);
    index++;
  }

  int i;
  for(i = 1; i <= 5; i++) {
    printf("%d\n", i);
  }

  int numbersArray [] = {2, 3, 5, 7, 11, 13, 17};
  size_t arrayLength = sizeof(numbersArray)/sizeof(numbersArray[0]);

  int ii;
  for(ii = 0; ii < arrayLength; ii++) {
    printf("%d\n", numbersArray[ii]);
  }

  // nested loop
  int nums [4] [2] = {
    {1, 2},
    {3, 4},
    {5, 6},
    {7, 8}
  };
  int j, h;
  for(j = 0; j < 4; j++) {
    for(h = 0; h < 2; h++) {
      printf("%d", nums[j][h]);
    }
    printf("\n");
  }

  return 0;
}
