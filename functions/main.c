#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) {
  printf("Hello, %s, you are %d years old!\n", name, age);
}

int main()
{
  sayHi("world", 300000000);
  sayHi("user", 40);
  sayHi("me, myself and I", 35);

  return 0;
}

// void means this function will not return anything
// move function to top to avoid conflict

// void sayHi(char name[], int age) {
//   printf("Hello, %s !", name);
// }
