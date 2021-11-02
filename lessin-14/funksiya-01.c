#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

double daraja(double son){
    return pow(son,3);
}


int main(){

  double A=1.4, B=3.5, C=6.1;
    int D=6, E=3;

    printf("A=%lf\n", daraja(A));
    printf("B=%lf\n", daraja(B));
    printf("C=%lf\n", daraja(C));

    printf("D=%.0lf\n", daraja(D));
    printf("E=%.0lf\n", daraja(E));


    return 0;
}