#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a,b,c;

   printf("a= ");
   scanf("%d",&a);

   printf("b= ");
   scanf("%d",&b);

   printf("c= ");
   scanf("%d",&c);

   if (a<b&&b>c)
   {
       printf("%d\n",b);
   }

   if (a>b&&a>c)
   {
       printf("%d\n",a);
   }
   if (c>b&&c>a)
   {
       printf("%d\n",c);
   }
   
   

       return 0;
}
