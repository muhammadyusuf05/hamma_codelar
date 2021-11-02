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

    natija=a%2==-1&&b%2==0&&c%2==-1;

    printf("%d\n",natija);




    return 0;
}