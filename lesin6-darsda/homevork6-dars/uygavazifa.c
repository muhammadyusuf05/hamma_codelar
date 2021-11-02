#include <stdio.h>

// 31-masala

int main () {
    double son1, son2;

    scanf("%lf", &son1);    
    scanf("%lf", &son2);

    if(son1>son2){
        printf("%lf ", son1);
    } else {
        printf("%lf ", son2);
    }

    if(son1<son2){
        printf("%lf", son1);
    } else {
        printf("%lf", son2);
    }

    printf("\n");

    return 0;
}
