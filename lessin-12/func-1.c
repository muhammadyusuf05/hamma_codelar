#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


double daraja3(double son){
    return pow(son, 3);
}

int main(){

    double A=1.23, B=2.3, C=5.7;
    int D=5, E=4;

    printf("A=%lf\n", daraja3(A));
    printf("B=%lf\n", daraja3(B));
    printf("C=%lf\n", daraja3(C));

    printf("D=%.0lf\n", daraja3(D));
    printf("E=%.0lf\n", daraja3(E));

    return 0;
}