#include<stdio.h>
#include<stdbool.h>


int main(){
int a,b,c,d;
bool natija;

printf("a=");
scanf("%d",&a);

printf("b=");
scanf("%d",&b);

printf("c=");
scanf("%d",&c);

printf("d=");
scanf("%d",&d);

natija=a==d&&b==c;

printf("%d\n",natija);


    return 0;
}