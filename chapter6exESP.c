#include<stdio.h>
// The price of corn: from 1 to 300 kg you pay 100$   if you buy more than 300 kg the price decreases to 90$  

int corn;
int cornprice= 100;
int total;
char pro [100];

int main(void){
  printf("insert the kilograms of corn \n");
  fgets(pro, sizeof(pro), stdin);
  sscanf(pro, "%d", &corn);



  if (corn >= 1 && corn <= 300 ){
    total = corn * cornprice;

    printf("the price of the corn will be %d", total);
  }

  else if (corn > 300){
    total = corn * 90;
    printf("the price of the corn will be %d", total);
  }

 
  return 0;
}
