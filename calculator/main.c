#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

// double calculator(double num1, double num2, char operator);

int main()
{
  double num1;
  double num2;
  char operator;

  // printf("Enter the first number :");
  // scanf("%lf", &num1);
  // printf("What operation ?");
  // scanf(" %c", &operator);
  // printf("Enter the second number :");
  // scanf("%lf", &num2);

  printf("Enter the first number, operation, and second number :");
  scanf("%lf %c %lf", &num1, &operator, &num2);

  switch(operator) {
    case '+' :
    printf("%f\n", num1 + num2);
    break;
    case '-' :
    printf("%f\n", num1 - num2);
    break;
    case '*' :
    printf("%f\n", num1 * num2);
    break;
    case '/' :
    printf("%f\n", num1 / num2);
    break;
    default:
    printf("Enter valid operation (+, -, *, /).\n");
    break;
  }


  return 0;
}

// same with if else statements

// int main()
// {
//   double num1;
//   double num2;
//   char operator;

//   printf("Enter the first number :");
//   scanf("%lf", &num1);
//   printf("What operation ?");
//   scanf(" %c", &operator);
//   printf("Enter the second number :");
//   scanf("%lf", &num2);

//   if(operator == '+') {
//     printf("%f\n", num1 + num2);
//   }
//   else if (operator == '-') {
//     printf("%f\n", num1 - num2);
//   }
//   else if (operator == '*') {
//     printf("%f\n", num1 * num2);
//   }
//   else if(operator == '/') {
//     printf("%f\n", num1 / num2);
//   }
//   else {
//     printf("Enter valid operation (+, -, *, /).\n");

//   }

//   return 0;
// }
