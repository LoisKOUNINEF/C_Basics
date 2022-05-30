#include <stdio.h>
#include <stdlib.h>

int main() {


  // file action types:
  // 'r' : read / 'w' : write / 'a' : append

  char line[255];
  FILE * fpointer = fopen("aliases.txt", "w");
  FILE * fpointer = fopen("aliases.txt", "r");

  fprintf(fpointer, "Loïs, masque social\nJahluv, alter ego\nAWizardDidIt, jumeau maléfique");

  fgets(line, 255, fpointer);
  printf("%s", line);
  fgets(line, 255, fpointer);
  printf("%s", line);

  fclose(fpointer);

  return 0;
}
