#include <stdio.h>
#include <stdlib.h>
//Write a program to tell if a number is prime




int main (void)
{
  int num;
  int X;
  int prime;
  char nu [10];
 
  printf("Enter a number \n");
  fgets(nu, sizeof(nu), stdin);
  sscanf(nu, "%d", &num);
 
  if (num <= 1)
  {
  printf("%d is not a prime numbers \n", num);
  exit(1);
  }

  prime = 0;
  
  for (X = 2; X <= num / 2; X++)
  {
    if ((num % X) == 0){
    prime = 1;
    break; }
  }
    
  if (prime == 0)
    printf("the number %d is prime \n", num);
  else
    printf("the number %d is not prime \n", num);

    return 0;
}
