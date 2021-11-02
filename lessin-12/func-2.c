#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


void daraja234(double son){

    printf("%lf", son);
    printf("^2=%lf\n", pow(son, 2));

    printf("%lf", son);
    printf("^3=%lf\n", pow(son, 3));

    printf("%lf", son);
    printf("^4=%lf\n", pow(son, 4));

    printf("\n\n");
}

int main(){

    double A=2, B=2.3, C=5.7;

    daraja234(A);
    daraja234(B);
    daraja234(C);

    return 0;
}






