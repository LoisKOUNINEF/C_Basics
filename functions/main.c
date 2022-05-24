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

int main()
{

  printf("Cube is %d.\n", cube(3));

  sayHi("world", 300000000);
  sayHi("user", 40);
  sayHi("me, myself and I", 35);

  return 0;
}

// void means function will not return anything.
// int means integer, etc..

// move function to top to avoid conflict,
// or prototype it before main()

// void sayHi(char name[], int age) {
//   printf("Hello, %s !", name);
// }
