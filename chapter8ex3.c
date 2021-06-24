#include <stdio.h>

float sum = 0;
float numerator;
char line[50];

int main (void){
int n;
int i;
    

    printf("Enter number of elements \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &n);

    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &numerator);
        sum += numerator;
    }
    printf("\n\n\nAverage of the entered numbers is =  %f", (sum/n));
   
    return 0;


}
