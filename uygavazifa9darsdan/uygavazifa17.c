#include<stdio.h>
#include<stdbool.h>

int main(){
    int a;
    bool natija;
    printf("a=");
    scanf("%d",&a);

    natija=a%2==1&&a<=1000&&a>10;

printf("%d\n",natija);

    return 0;
}