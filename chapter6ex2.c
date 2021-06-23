#include <stdio.h>
#include <math.h>
// this ones gives  a letter depending of the value you introduce, i used only if for a simple program
int cal;
int es;
char line [20];

int main(void){
 printf("enter value\n");
 fgets (line, sizeof(line), stdin);
 sscanf(line, " %d", &cal);

 if (cal <= 60) {
   printf("F");
 }

 if (cal >= 61){
   if (cal <= 70)
  printf("D");}

  if (cal >= 71){
    if (cal <= 80)
    printf("C");
  }

 if (cal >= 81){
   if (cal <= 90)
   printf("B");
 }
 
  if (cal >= 91){
    if (cal <= 100)
    printf("A");
  }

return 0;
}
