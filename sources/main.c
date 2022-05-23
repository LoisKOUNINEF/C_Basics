#include <stdio.h>
#include <stdlib.h>

int main()
{
  // dont forget ';' at the end of each instruction !
  printf("   /|\n");
  printf("  / |\n");
  printf(" /  |\n");
  printf("/___|\n");

  char characterName1 [] = "John";
  int characterAge1 = 35;
  char characterName2 [] = "Andrew";
  int characterAge2 = 70;
  printf("Names were %s and %s.\n", characterName1, characterName2);
  printf("Ages were %d and %d.\n", characterAge1, characterAge2);
  printf("In one sentence, %s was %i and %s was %i.\n", characterName1, characterAge1, characterName2, characterAge2);

  characterAge1 = 50;
  printf("Name %s was shorter than %s.\n", characterName1, characterName2);
  printf("Age %i was not the same as %i.\n", characterAge1, characterAge2);

  int wholeNumber = 40;
  //  %i or %d (prefix i or d with 'l' to indicate long)
  // when doing maths with integers, get integer back. 5 / 4 = 1.
  double decimalNumber = 3.8;
  // %f
  // %f expect at least one float when doing maths. 5 / 4 wont work, instead 5 / 4.0
  char grade = 'A';
  // %c
  char phrase [] = "A random sentence.";
  // %s

  printf("%f", decimalNumber / 2);

  printf("%f", pow(2, 3) );
  printf("%f", sqrt(36) );
  printf("%f", ceil(36.6) );
  printf("%f", floor(36.6) );

  printf("Hello world.\n");
  // end with \n to prevent a '%' to be printed as well at the end.

  return 0;
  // return 0 if OK and 1 if not.
}
