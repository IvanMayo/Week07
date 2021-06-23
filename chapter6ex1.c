#include <stdio.h>
#include <math.h>
// the square between the distance of two points
float X1,  Y1;
float X2,  Y2;
char line [50];
char line2 [50];
float raiz;

int main(void){
 printf("Enter x1 and y1\n");
 fgets(line, sizeof(line), stdin);
 sscanf(line, "%f %f", &X1, &Y1);

 printf("Enter x2 and y2\n");
 fgets(line2, sizeof(line2), stdin);
 sscanf(line2, "%f %f", &X2, &Y2);


raiz = sqrt( ((X2-X1)*(X2-X1)) + ((Y2-Y1)*(Y2-Y1)) ) ;

printf("the square of the points is %.2f", raiz);
return 0;
}
