#include <stdio.h>
int main(void) {

char line[20];

    int n;
    int i;
    printf("Enter a number");
    
    fgets(line,sizeof(line), stdin);
    sscanf(line, "%d", &n);
    //for i equal to 1; i less or equal to 10 add one to i 
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;

}
