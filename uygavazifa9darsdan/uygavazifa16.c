#include<stdio.h>
#include <stdbool.h>

int main(){
    int a;
    bool natija;

    printf("a=");
    scanf("%d",&a);

    natija=a%2==0&&a>=10&&a<100;
    
    printf("%d\n",natija);




    return 0;
}