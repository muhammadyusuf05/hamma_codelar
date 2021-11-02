#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


void RectPS (int x1, int y1, int x2, int y2){
    printf("\nArea : %d", (x2 - x1)*(y2-y1));
    printf("\nPerimeter : %d", 2*(x2-x1)+2*(y2-y1));
}

int main(){
int x1,y1,x2,y2;

    printf("\nx1=");
    scanf("%d",&x1);

    printf("\nx2=");
    scanf("%d",&x2);

    printf("\nx2=");
    scanf("%d",&x2);

    printf("\ny2=");
    scanf("%d",&y2);

    RectPS(x1,y1,x2,y2);

    return 0;
}