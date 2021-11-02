#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
int a;
bool manfiy,musbat;

printf("a=");
scanf("%d",&a);

musbat=a>0&&a++;
manfiy=a<0&&a++&&a++;

if (musbat)
{
    printf("%d\n",a);
}else if (manfiy){
    printf("%d\n",a);
}

printf("\n");


    return 0;
}