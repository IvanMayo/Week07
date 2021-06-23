//A serial transmission line can transmit 960 characters each second. Write a program that will calculate the time required to send a file, given the file's size. 

//float for my variables
//cycle while size >0
//if1 for more than 960 characters
//if2 for less or equal 960 

//print the sum of both 

#include<stdio.h>
float size;
float time;
float time2;



int main(void){
 printf("Please introduce the amount of characters in the file");
 scanf("%f", &size);

// a while cycle and repeat the ex of the coin format, 
while (size > 0){
  if (size > 960){
    time ++;
    size -= 960;
  }
  //second condition when is lower or equal tan 960
  if (size <= 960){
    time2= (size*1)/960;
    break;//for some reason the program exploted without this, guess every cycle needs a break 
   
  }


}
printf("the seconds it will take to send the file are %f", time2+time);


  return 0;
}
