#include<stdio.h>
#include <math.h>

int main(){

double x, y;
scanf("%lf",&x);
scanf("%lf",&y);
if(x<1 && x>-2&&y<0&&y>-1 && y>-(x*x)){
    printf("no ");
}else
{
    printf("yes ");
}


printf("\n");

    return 0;
}