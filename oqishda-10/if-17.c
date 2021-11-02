#include <stdio.h>
#include <math.h> 
   int main (){
    double son1=5.0, son2=2.0, son3=4.0;
    
    if (son1<son2 && son2<son3) {
        printf("%lf\n", son1*2);
        printf("%lf\n", son2*2);
        printf("%lf\n", son3*2);}
    if (son1>son2 && son2>son3) {
        printf("%lf\n", son1*2);
        printf("%lf\n", son2*2);
        printf("%lf\n", son3*2);}
    else {
        printf("%lf\n", -son1);
        printf("%lf\n", -son2);
        printf("%lf\n", -son3);}
    
    
    return 0;
}