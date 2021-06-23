#include <stdio.h>

//Write a program to add an 8% sales tax to a given amount and round the result to the nearest penny
//floats for my variables
//the code is just a multiplication and a sum
//tax = amount * Tax;
//total = amount + tax;

float amount;
float tax;
float total;
float Tax = .08;
char rec[100];


int main(void)
{
       
  printf("Enter the value of your item\n");
  fgets(rec, sizeof(rec), stdin);
  sscanf(rec, "%f", &amount); 
  tax = amount * Tax;
  total = amount + tax;
 
printf("With sales tax your item costs is %.2f",total);

 getchar(); //this rounds my value
 return 0;
}
