#include <stdio.h>
#include <stdlib.h>

int main()
{

  char heroName [20];
  char nemesisName [20];
  char place1 [20];
  char place2 [20];
  int daysGone;

  printf("What's the name of the Hero in your Story ?\n");
  scanf("%s", heroName);
  printf("What's the name of the Bad Guy in your Story ?\n");
  scanf("%s", nemesisName);
  printf("Where does your Hero live ?\n");
  scanf("%s", place1);
  printf("Where does the Bad Guy live ?\n");
  scanf("%s", place2);
  printf("How long is your story, in days ?\n");
  scanf("%d", &daysGone);
  printf("\n\nA long time ago, %s lived in %s.\n", heroName, place1);
  printf("One day, %s came in %s and killed %s's family.\n", nemesisName, place1, heroName);
  printf("As a result, %s decided to go in %s for revenge.\n", heroName, place2);
  printf("%s travelled %d days long before reaching %s.\n", heroName, daysGone / 2, place2);
  printf("%s expected no less, but nonetheless, %s was able to defeat him and burned %s to the ground before returning to his homeland %s.\n", nemesisName, heroName, place2, place1);

  return 0;
}
