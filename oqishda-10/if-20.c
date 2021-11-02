 #include <stdio.h>
#include <math.h> 
   int main (){
   int son1=50, son2=20, son3=40;
    // A = son1, B = son2, C=son3;
    if (son1>son2 && son2>son3) {
        printf("%d\n", son2);
        printf("%d\n", son1-son2);
        }
        
    if (son1>son3 && son3>2) {
        printf("%d\n", son3);
       printf("%d\n", son1-son3);}
    
    if (son2>son3 && son3>son1) {
        printf("%d\n", son3);
       printf("%d\n", son2-son3);}

    if (son2>son1 && son1>son3) {
       printf("%d\n", son1);
       printf("%d\n", son2-son1);}

    if (son3>son2 && son2>son1) {
        printf("%d\n", son2);
       printf("%d\n", son3-son2);}

    if (son3>son1 && son1>son2) {
        printf("%d\n", son1);
       printf("%d\n", son3-son1);}

    return 0;
}