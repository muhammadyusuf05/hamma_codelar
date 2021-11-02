#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a=1,b=4,c=-5,musbat=0,manfiy=0;

if(a>0){
    musbat++;
}else if(a<0){
    manfiy++;
}

if(b>0){
    musbat++;
}else if(b<0){
    manfiy++;
}

if(c>0){
    musbat++;
}else if(c<0){
    manfiy++;
}

printf("%d\n",musbat);
printf("%d\n",manfiy);
return 0;

}