#include <stdio.h>
#include <math.h>
// the square between the distance of two points
float X1,  Y1;
float X2,  Y2;
float xt,  yt;
float raiz;

int main(void){
 X1 = 5;
 Y1 = 7;

 X2 = 8;
 Y2 = 9;

raiz = sqrt( ((X2-X1)*(X2-X1)) + ((Y2-Y1)*(Y2-Y1)) ) ;

printf("the square of the points is %.2f", raiz);
return 0;
}
