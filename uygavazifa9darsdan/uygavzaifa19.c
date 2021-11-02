#include<stdio.h>
#include<stdbool.h>

int main(){
int son1,son2,son3;
bool natija;

printf("son1=");
scanf("%d",&son1);

printf("son2=");
scanf("%d",&son2);

printf("son3=");
scanf("%d",&son3);

natija=son1%2==1&&son2%2==1&&son3%2==0;

printf("%d\n",natija);

    return 0;
}
