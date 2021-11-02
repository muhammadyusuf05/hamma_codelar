#include <stdio.h>
#include <math.h>

int main (){

    double son1=4.0, son2=2.0, son3=5.0;
    if(son1<son2 && son2<son3) {
        printf("%lf\n", son1*2);
        printf("%lf\n", son2*2);
        printf("%lf\n", son3*2);}
        else if (!(son1>son2 && son2>son3)) {
        printf("%lf\n", pow(son1, -1));
        printf("%lf\n", pow(son2, -1));
        printf("%lf\n", pow(son3, -1));
        }
    
    return 0;
}