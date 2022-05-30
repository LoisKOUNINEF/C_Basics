#include <stdio.h>
#include <stdlib.h>

int main() {

  int age = 30;
  char letter = 'A';

  // pointer variable ==> memory address/location of the variable
  int * pointerAge = &age;
  char * pointerLetter = &letter;

  printf("age's memory address : %p\n", &age);
  printf("letter's memory address : %p\n", &letter);

  printf("%p\n", pointerAge);
  printf("%p\n", pointerLetter);

  // dereferencing pointer
  printf("%d\n", *pointerAge);
  printf(" %c\n", *pointerLetter);

  return 0;
}
