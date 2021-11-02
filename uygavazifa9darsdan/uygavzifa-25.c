#include<stdio.h>
#include<stdbool.h>

int main(){
int x,y;
bool natija;

printf("x=");
scanf("%d",&x);

printf("y=");
scanf("%d",&y);

natija=x%2==0&&y%2==1;

printf("%d\n",natija);

    return 0;
}