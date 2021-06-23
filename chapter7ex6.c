#include <stdio.h>

// Write a program that takes a series of numbers and counts the number of positive and negative values
char nu [20];
int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int positive = 0;
int negative = 0;

int main (void){
  printf("introduce a series of 6 numbers except 0 in the format n/n/n/n/n/n \n");
  fgets(nu, sizeof(nu), stdin);
  sscanf(nu, "%d/%d/%d/%d/%d/%d", &n1, &n2, &n3, &n4, &n5, &n6);

{
  if (n1 > 0)
  positive ++;

  if (n1 < 0)
  negative ++;
}

{
  if (n2 > 0)
  positive ++;
  
  if (n2 < 0)
  negative ++;
}

{
  if (n3 > 0)
  positive ++;
  
  if (n3 < 0)
  negative ++;
}

{
  if (n4 > 0)
  positive ++;
  
  if (n4 < 0)
  negative ++;
}

{
  if (n5 > 0)
  positive ++;
  
  if (n5 < 0)
  negative ++;
}

{
  if (n6 > 0)
  positive ++;
  
  if (n6 < 0)
  negative ++;
}

printf("The negative numbers are %d and the positives are %d", negative, positive);

return 0;
}
