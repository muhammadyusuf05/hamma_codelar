#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    double narxi;
    printf("Qant narxi");
    scanf("%lf",&narxi);

    for(double i=1.2;i<=2;i+=0.2){
        printf("%lf qant",i);
        printf("%lf\n",i*narxi);
    }



return 0;
}