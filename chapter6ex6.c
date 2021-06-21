#include <stdio.h>
int hourwage = 10;
int hourswork;
int overworhours;
int overpay;
int payweek;


int main(void){
printf("Enter the hours of the worker \n");
scanf("%d", &hourswork );


  if (hourswork > 120){
  printf("it is not possible to work more than 120 hours a week");
  }

   if ( hourswork > 40){
    overworhours = hourswork - 40 ;
    overpay = overworhours * 15; // 1.5 * 10
    payweek = overpay + (hourwage * 40);
   }

  else if (hourswork <= 40){
    payweek = hourswork * hourwage;

  }

  printf("The total the worker gained along the 5 days week is %d", payweek);



  return 0; 
  }
