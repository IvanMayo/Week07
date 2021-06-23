#include<stdio.h>

// this one is a previous code from https://github.com/IvanMayo/Week05/blob/main/ex06ivan.c


 int X;
  char year [50];
int main(void){

  printf("inserte año\n");
  fgets(year, sizeof(year), stdin);
  sscanf(year, "%d", &X);

  if (X % 400 == 0){
  printf("%d", X);
  printf(" this is a leap year");
  }
  else if(X % 100 ==0){
    printf("%d", X);
    printf(" this is not a leap year");
  } 

  else if(X % 4 ==0){
    printf("%d", X);
    printf(" this is a leap year");
  }


  else{
    printf("%d", X);
    printf(" this is not a leap year");
  }
  return 0;
}
