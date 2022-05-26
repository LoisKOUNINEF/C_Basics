#include <stdio.h>
#include <stdlib.h>

int main() {

  int age = 35;
  char letter = 'A';

// "%p" ==> print memory address
  printf("%p\n %p\n", &age, &letter);

  return 0;
}
