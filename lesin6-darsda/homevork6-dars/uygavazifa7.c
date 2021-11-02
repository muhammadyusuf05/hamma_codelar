#include<stdio.h>


int main () {
   double son1,son2,son3;

scanf("%lf",&son1);
scanf("%lf",&son2);
scanf("%lf",&son3);

if(son1>son2){
    printf("%lf",son2);
}else{
    printf("%lf",son1);
}

if(son2>son3){
      printf("%lf",son2);
}else{
     printf("%lf",son3);
}  

printf("\n");


return 0;


  

}