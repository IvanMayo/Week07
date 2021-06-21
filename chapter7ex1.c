#include<stdio.h>
// convert english units to metric units, it does not specify how many unit so I just did 3
//investigate the convertions and then just apply them

//float
//main 
// printf for each value
// make the conversion
// print the result

float miles, gallon, kelvin;


float kilometer, liter, celcius;


int main(void){
  printf("enter miles \n");
  scanf("%f", &miles);  
 
  printf("enter gallons \n");
  scanf("%f", &gallon);

  printf("enter kelvin \n");
  scanf("%f", &kelvin);

  kilometer = miles* 1.609;
  liter = gallon* 3.79;
  celcius = kelvin - 273.1;

  printf("in the metric system this will be \n %.2f  kilometers\n %.2f liters \n %.2f celcius", kilometer, liter, celcius);


  return 0;
}
