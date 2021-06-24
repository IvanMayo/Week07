#include <stdio.h>
#include <stdlib.h>
// this program counts and prints numbers

int start;
int end;
char line[20];
char line2[20];
int main()
{
    
    printf("please enter the start number\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &start);
    
    printf("please enter the end number\n");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d", &end);
    
    
    
    
    for( start= start; start<=end ; start++ ) {
        
        printf("%d\n", start);
    };
    return 0;
}
