#include <stdio.h>
#include <math.h> 
   int main (){
   int son1=5, son2=4;
   
    if (son1 == 0 && son2 == 0) {
        printf("0\n");
        }
        
   else if (son1 > 0 && son2 == 0) {
        printf("1\n");
      }
    
   else if (son1 == 0 && son2 > 0) {
        printf("2\n");
      }
    else {
       printf("3\n");
       }

    return 0;
}