#include <stdio.h>
#include <stdlib.h>

// prototyping sayHi() would look like
// void sayHi(char name[], int age);
// prototyping cube() would look like
// int cube(int num);

void sayHi(char name[], int age) {
  printf("Hello, %s, you are %d years old!\n", name, age);
}

int cube(int num) {
  int result = num * num * num;
  return result;
  // or: return num * num * num;
}

int max(int num1, int num2, int num3);

int main()
{

  printf("Cube is %d.\n", cube(3));

  sayHi("world", 300000000);
  sayHi("user", 40);
  sayHi("me, myself and I", 35);

  printf("%d is bigger.\n", max(3,5,8));
  printf("%d is bigger.\n", max(17,8,15));
  printf("%d is bigger.\n", max(12,28,15));

  return 0;
}

int max(int num1, int num2, int num3) {
  int result;
  if(num1 >= num2 && num2 >= num3) {
    result = num1;
  } else if(num2 >= num1 && num2 >= num3) {
    result = num2;
  } else {
    result = num3;
  }
  return result;
}

// logical operator '||', '&&', '><=', and '!' same as JS

// void means function will not return anything.
// int means integer, etc..

// move function to top to avoid conflict,
// or prototype it before main()
