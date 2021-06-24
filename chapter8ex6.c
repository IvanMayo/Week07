#include<stdio.h>




int main(void)
{
  int num; 
  int i=0; 
  int x; 
  int d;


  char * word [2000];
  char line [5000];
  printf ("Enter an integer value: \n");
  fgets(line, sizeof(line), stdin);
  sscanf (line, "%d", &num);



  while (num)
  {
    d = num %10;
    num = num /10;
    switch(d)
    {
      case 0: word[i++] = "zero";
      break;

      case 1: word[i++] ="one"; 
      break;

      case 2: word[i++] = "two"; 
      break;

      case 3: word[i++]= "three"; 
      break;

      case 4: word[i++] = "four"; 
      break;

      case 5: word[i++]="five"; 
      break;

      case 6: word[i++] = "six"; 
      break;

      case 7: word[i++] ="seven"; 
      break;

      case 8: word[i++] = "eight"; 
      break;

      case 9: word[i++]="nine"; 
      break;
    }
  }
  for(x=i-1; x>=0; x--){
  printf ("%s ",word[x]);
  }
}
