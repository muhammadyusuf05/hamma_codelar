#include <stdio.h>
#include <stdbool.h>
#include <math.h>



int main(){

    int son,suma=0;

    printf("Sonni kiriting: ");
    scanf("%d", &son);

    for(int i=1; i<son; i+=2){
         suma+= i;
     printf(" soning kubi =%d\n" , i);

    }

    printf("sumasi%d\n",suma);

    return 0;
}