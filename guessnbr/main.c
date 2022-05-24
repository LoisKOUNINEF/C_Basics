#include <stdio.h>
#include <stdlib.h>

int main()
{
  int range = 50;
  int secretNumber = rand() % range;
  int guess;
  int tries = 0;
  int triesLeft = 5;
  int gameOver = 0;
  // char printTriesLeft = printf("You have %d tries left !\n", triesLeft - tries);

  printf("Guess me ! I'm between 0 and %d !\n", range);
  printf("You have %d tries left !\n", triesLeft - tries);
  scanf("%d", &guess);
  tries++;

  while(guess != secretNumber && gameOver == 0) {
    if(tries < triesLeft) {
      printf("You have %d tries left !\n", triesLeft - tries);
      if(guess < secretNumber) {
        printf("I am greater !\n");
        scanf("%d", &guess);
        tries++;
      }
      else if(guess > secretNumber) {
        printf("I am not that big !\n");
        scanf("%d", &guess);
        tries++;
      }
    } else {
      gameOver = 1;
    }
  }

  if(gameOver == 1) {
    printf("You lost !\n");
  } else {
    printf("Well guessed !\n");
  }
  return 0;
}
