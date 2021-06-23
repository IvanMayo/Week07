#include <stdio.h>
// Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels, and pennies needed.


// yes this is almost the same of an internet program, i couln´t solve it my self so i decided to learn how this program works, it is a cylce inside a cylce and goes on until you get the break 
float money = 0;
float quarter = 0;
float dime = 0;
float nickel = 0;
float pennie = 0;
char line [50];

int main(void){
 printf("introduce cents, more than 0 and smaller or equal to 99 \n");
 fgets(line, sizeof (line), stdin);
 sscanf(line, "%f", &money);

 while (1) {
  if (money >= 25) {
    ++quarter;    //my start value is 0 so with the ++ I add 1 to my value
    money -= 25;  // rest 25 from my cents = money
    }

// once the first condition is not possible, goes with the next one

  else if (money >=10){
    ++dime;
    money -= 10;
  }

  else if (money >= 5){
    ++nickel;
    money -= 5;
  }

  else if (money >= 1){
    ++pennie;
    --money;    // instead of add 1 I rest 1 to my money = cents
  }


  else if (money == 0)

  break;   //breaks cycles, any cycles except for main

 }

printf("quarter %0.f   dime %0.f   nickel %0.f   pennie %0.f ", quarter, dime, nickel, pennie);
return 0;
}
