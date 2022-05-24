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


// how to initiate and reuse constants and variables
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


// data types
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


// math functions
  printf("%f\n", pow(4, 3) );
  printf("%f\n", sqrt(36) );
  printf("%f\n", ceil(36.6) );
  printf("%f\n", floor(36.6) );
  printf("%d\n", abs(36.6) );


// user input
  // number
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  // '&' indicates input
  printf("You are %d years old.\n", age);

  // double
  double decimal;
  printf("enter your decimal: ");
  scanf("%lf", &decimal);
  printf("Your decimal is %f.\n", decimal);

  // character
  char letter;
  printf("Enter your letter: ");
  scanf(" %c", &letter);
  printf("Your letter is %c.\n", letter);

  // string
  char name[20];
    // indicate the maximum number of input inside the []
    // so that C knows how much memory this variable will require
  printf("Enter your name: ");
    // automatically adds a '\n' at the end of the string input, but allows whitespaces :
      // fgets(name, 20, stdin);
  scanf("%s", name);
    // ==> will only return string before whitespace (i.e 'John Smith' will be 'John')
    // doesnt need to write '&name' here
  printf("Your name is %s.\n", name);

  printf("Hello world.\n");
  // end with \n to prevent a '%' to be printed as well at the end.

  return 0;
  // return 0 if OK and 1 if not.
}
