#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a, b=1, sum=0; 
    
    for(a = 10; b < a; a--)
    {
        printf("%d\n", a); 
    sum++;
    }
    printf("Number of digits: %d\n", sum); 
    return 0;
}