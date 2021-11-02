#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a,b;

   printf("a= ");
   scanf("%d",&a);

   printf("b= ");
   scanf("%d",&b);

   if(a<b){
       printf("%d\n",a);
   }else if(a>b){
       printf("%d\n",b);
   }
   printf("\n");

    return 0;
}