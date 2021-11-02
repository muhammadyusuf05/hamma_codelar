#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b,c;
    bool natija;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("c=");
    scanf("%d",&c);

    natija=a<b&&b<c;

    printf("%d\n",natija);




    return 0;
}