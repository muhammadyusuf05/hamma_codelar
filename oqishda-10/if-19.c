#include <stdio.h>
#include <math.h> 
   int main (){
   int son1=9, son2=3, son3=5, son4=2;
    
    if (son1%2==0 && son2%2==1 && son3%2==1 && son4%2==1) {
        printf("1\n");}
        
    if (son1%2==1 && son2%2==0 && son3%2==1 && son4%2==1) {
        printf("2\n");}

    if (son1%2==1 && son2%2==1 && son3%2==0 && son4%2==1) {
        printf("3\n");}
    if (son1%2==1 && son2%2==1 && son3%2==1 && son4%2==0)
    {
        printf("4\n");}
    return 0;
}