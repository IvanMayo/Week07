#include <stdio.h>

//Write a program to compute the total resistance for any number of parallel resistors---i asume than can be how many resistances i want

float R1;
float R2;
char line [20];
float resistance;

int main (void){

printf("Intruduce the values of the resistances in R1+R2 \n");
fgets(line, sizeof(line), stdin);
sscanf(line, "%f+%f", &R1, &R2);

resistance = (R1 * R2 )/(R1 + R2 );

printf("The resistance is %f", resistance);
