#include <stdio.h>
#include <math.h> 
   int main (){
   int son1=-1, son2=4, son3=2;
    
    if (son1<0 && son2>0 && son3>0) {
        printf("1\n");}
        
    if (son1>0 && son2<0 && son3>0) {
        printf("2\n");}

    if (son1>0 && son2>0 && son3<0) {
        printf("3\n");}
    
    
    return 0;
}