#include <stdio.h>
#include <stdlib.h>

// double calculator(double num1, double num2, char operator);

int main()
{
  double num1;
  double num2;
  char operator;

  printf("Enter the first number :");
  scanf("%lf", &num1);
  printf("What operation ?");
  scanf(" %c", &operator);
  printf("Enter the second number :");
  scanf("%lf", &num2);

  if(operator == '+') {
    printf("%f\n", num1 + num2);
  }
  else if (operator == '-') {
    printf("%f\n", num1 - num2);
  }
  else if (operator == '*') {
    printf("%f\n", num1 * num2);
  }
  else if(operator == '/') {
    printf("%f\n", num1 / num2);
  }
  else {
    printf("Enter valid operation (+, -, *, /).\n");

  }

  return 0;
}

// double calculator(double num1, double num2, char operator) {
//   double result;
//   printf("Enter the first number :");
//   scanf("%lf", &num1);
//   printf("What operation ?");
//   scanf(" %c", &operator);
//   printf("Enter the second number :");
//   scanf("%lf", &num2);

//   if(operator == '+') {
//     result = num1 + num2;
//   }
//   else if (operator == '-') {
//     result = num1 - num2;
//   }
//   else if (operator == '*') {
//     result = num1 * num2;
//   }
//   else if(operator == '/') {
//     result = num1 / num2;
//   }
//   else {
//     printf("What operation ? (+, -, *, /)");
//     scanf(" %c", &operator);
//   }
//   return result;
// }
