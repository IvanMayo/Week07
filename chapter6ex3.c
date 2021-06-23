#include <stdio.h>
#include <math.h>
// this ones gives  a letter depending of the value you introduce, i used only if for a simple program and takes into acount the values
int cal;
char line [50];

int main(void){
 printf("enter value\n");
 fgets(line, sizeof(line), stdin);
 sscanf(line, " %d", &cal);

 if (cal < 60) {
   printf("F");
 }
 // && allows you to intruduce a second condition and many more you want
 if (cal >= 61 && cal <= 63){
   printf("D-");}

 if (cal >= 64 && cal <= 67){
   printf("D");}

 if (cal >= 68 && cal <= 70){
   printf("D+");}
  
  // 2222222

 if (cal >= 71 && cal <= 73){
   printf("C-");}

 if (cal >= 74 && cal <= 77){
   printf("C");}

 if (cal >= 78 && cal <= 80){
   printf("C+");}

// 222222222

 if (cal >= 81 && cal <= 83){
   printf("B-");}

 if (cal >= 84 && cal <= 87){
   printf("B");}

 if (cal >= 88 && cal <= 90){
   printf("B+");}

// 222222222

 if (cal >= 91 && cal <= 93){
   printf("A-");}

 if (cal >= 94 && cal <= 97){
   printf("A");}

 if (cal >= 98 && cal <= 100){
   printf("A+");}

return 0;
}
