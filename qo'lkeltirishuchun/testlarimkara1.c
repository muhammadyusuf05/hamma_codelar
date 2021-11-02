#include<stdio.h>

int main (){

int  chegara=10,natija;

for(int son1=1;son1<=chegara;son1++)
{         
 for(int son2=1;son2<=9;son2++)
{
    natija=son1*son2;
    printf("%d*",son1);
    printf("%d=",son2);
    printf("%d\n",natija);
}
printf("\n\n");
}
    return 0;
}