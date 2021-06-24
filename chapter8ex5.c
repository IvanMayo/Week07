#include <stdio.h>

char line [50];
int main(void) {
int cha;
  printf("introduce a character \n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &cha);



  if (cha == 'a' || cha == 'e'|| cha == 'i'|| cha == 'o' || cha == 'u')
  printf("this letter is a vocal");

  else 
  printf("this is a consonant");


    return 0;

}
