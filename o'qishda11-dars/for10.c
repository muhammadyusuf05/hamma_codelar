#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// s = 1.1 - 1.2 + 1.3 - ...

int main(){

    int n, counter=0;
    double s=0, tekshir;

    printf("n ni kiriting: ");
    scanf("%d", &n);

    for(double i=1.1; i<=n; i+=0.1){
        tekshir = i * pow(-1, counter);
        s += tekshir;
        printf("%lf\n", tekshir);
        counter++;
    }

    printf("s=%lf\n", s);

    return 0;
}