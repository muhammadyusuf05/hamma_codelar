#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    double narxi;
    printf("Qant narxi ");
    scanf("%lf", &narxi);

    for (int i=1;i<=10;i++){
        printf("%dkg Qant ",i);
        printf("%lf\n",i*narxi);
    }



    return 0;
}