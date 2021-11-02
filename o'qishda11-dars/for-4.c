#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double price=22000, kg; 
    
    for(kg = 1; kg <= 10; kg++)
    {
        printf("%.1lf kg = \n", kg); 
        printf("%0.1lf\n", kg*price);
    }

    return 0;
}