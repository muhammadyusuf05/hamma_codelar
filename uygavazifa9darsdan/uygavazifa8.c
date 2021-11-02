#include<stdio.h>
#include<stdbool.h>

int main(){
int a=2,b=5;
bool natija;

printf("a=");
scanf("%d",&a);

printf("b=");
scanf("%d",&b);

natija= !(a%2==1)&&(b%2==0);
printf("%d\n",natija);


    return 0;
}