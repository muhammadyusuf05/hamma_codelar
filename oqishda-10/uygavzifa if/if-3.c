#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a; 
bool manfiy,musbat,nol;

printf("a=");
scanf("%d",&a);

musbat=a>0&&a++;
manfiy=a<0&&a++&&a++;
nol=a==0;

if (musbat)
{
    printf("%d\n",a);
}else if (manfiy){
    printf("%d\n",a);
}
if(nol){
    printf("%d\n",10);
}
printf("\n");



    return 0;
}