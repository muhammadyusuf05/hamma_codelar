#include <stdio.h>
#include <math.h>


int main(){

    int son1=-1, son2=-1, son3=-1;
    int musbat=0, manfiy=0;

    if(son1>0){
        musbat++;
    } else {
        manfiy++;
    }

    if(son2>0){
        musbat++;
    } else {
        manfiy++;
    }

    if(son3>0){
        musbat++;
    } else {
        manfiy++;
    }

    printf("%d ", musbat);
    printf("%d\n", manfiy);

    return 0;
}
