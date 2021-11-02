#include<stdio.h>
#include<stdbool.h>

int main(){
    double narxi;

    printf("Konfetni narxini kiriting: ");
    scanf("%lf", &narxi);

    for (double i=0.1;i<=1;i+=0.1){
        printf("%lf konfet",i );
        printf("%lf\n",i*narxi);
    }


    return 0;
}