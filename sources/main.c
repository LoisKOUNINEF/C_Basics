#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
  const int CHARACTER_AGE2 = 70;
  // cannot be modified. Could be also written :
  // int const characterAge2 = 70;
  // Upper letters makes it more obvious that they are constants.
  printf("Names were %s and %s.\n", characterName1, characterName2);
  printf("Ages were %d and %d.\n", characterAge1, CHARACTER_AGE2);
  printf("In one sentence, %s was %i and %s was %i.\n", characterName1, characterAge1, characterName2, CHARACTER_AGE2);

  characterAge1 = 50;
  // modifying characterAge1.
  printf("Name %s was shorter than %s.\n", characterName1, characterName2);
  printf("Age %i was not the same as %i.\n", characterAge1, CHARACTER_AGE2);

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
  // indicate that variable will contain multiple characters with '[]'

  printf("%f\n", pow(4, 3) );
  printf("%f\n", sqrt(36) );
  printf("%f\n", ceil(36.6) );
  printf("%f\n", floor(36.6) );
  printf("%d\n", abs(36.6) );

  printf("Hello world.\n");
  // end with \n to prevent a '%' to be printed as well at the end.

  return 0;
  // return 0 if OK and 1 if not.
}
