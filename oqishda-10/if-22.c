#include <stdio.h>
#include <math.h> 
   int main (){
   int son1=-2, son2=4;
   
    if (son1 > 0 && son2 > 0) {
        printf("1Q\n");
        }
        
    if (son1 < 0 && son2 > 0) {
        printf("2Q\n");
      }
    
    if (son1 < 0 && son2 < 0) {
        printf("3Q\n");
      }
    if (son1 > 0 && son2 < 0) {
       printf("4Q\n");
       }

    return 0;
}