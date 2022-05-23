#include <stdio.h>
#include <stdlib.h>

int main()
{
  double num1;
  double num2;
  printf("Enter the first number to add :");
  scanf("%lf", &num1);
  printf("Enter the second number to add :");
  scanf("%lf", &num2);
  printf("Result :%f.\n", num1 + num2);

  return 0;
}
