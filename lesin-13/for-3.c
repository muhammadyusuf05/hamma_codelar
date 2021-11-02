#include <stdio.h>
#include <stdbool.h>
#include <math.h>



int main(){

    int son,suma=0;

    printf("Sonni kiriting: ");
    scanf("%d", &son);

    for(int i=1; i<son; i+=2){
         suma+= i;
     printf(" Tog' sonlar =%d\n\n" , i);

    }
    printf("kegingisi;\n\n");
    for(int i=0; i<son; i+=2){
    printf("juft son =%d\n\n",i);
    }
    
    printf("sumasi%d\n",suma);

    return 0;
}