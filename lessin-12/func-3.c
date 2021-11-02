#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

void daraja2(double son1,double son2){

    printf("o'rta rfimetik darajasi%lf\n", (son1+son2)/2);
    printf("o'rta arfimetik darajasi%lf\n", sqrt(son1*son2));

    printf("\n\n");
}

int main(){
    double son1=2,son2=4;

    daraja2(son1,son2);

    return 0;
}