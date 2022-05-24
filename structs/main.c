#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
  char name [50];
  char job [50];
  int age;
  double tall;
};

int main()
{

  struct Person person1;
  strcpy( person1.name, "Frodo Baggins");
  strcpy( person1.job, "Ringbearer");
  person1.age = 31;

  struct Person person2;
  strcpy( person2.name, "Samwise Gamegie");
  strcpy( person2.job, "True hero");
  person2.age = 34;

  printf("%s.\n", person2.name);
  printf("%d.\n", person1.age);

  return 0;
}
