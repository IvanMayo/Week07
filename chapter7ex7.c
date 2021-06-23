#include <stdio.h>

// this program will tell you if a number is pair or not
int num;
char line [20];

int main (void){
  printf("Please introduce a number \n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);

  if (num % 2 == 0){
  printf("The number %d is pair", num);
  }
  if (num % 2 == !0){ //this means is its not equal to 0
  printf("The number %d is not pair", num);
  }

return 0;
}
