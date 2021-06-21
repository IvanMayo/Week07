#include<stdio.h>

// this one is a previous code from https://github.com/IvanMayo/Week05/blob/main/ex06ivan.c


 int X;

int main(void){

  printf("inserte año\n");
  scanf("%d", &X);

  if (X % 400 == 0){
  printf("%d", X);
  printf(" this is a biciesto year");
  }
  else if(X % 100 ==0){
    printf("%d", X);
    printf(" this is not a biciesto year");
  } 

  else if(X % 4 ==0){
    printf("%d", X);
    printf(" this is a biciesto year");
  }


  else{
    printf("%d", X);
    printf(" this is not a biciesto year");
  }
  return 0;
}
