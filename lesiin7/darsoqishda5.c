#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//rand-funksiyasi tasodifiy sonlarni generatsiya qilib beradi
//srand-dastur ishlashni boshlaganda tasodifiy sonlarni qayta tanlab olishga  buyruq beradi


int main(){

srand(time(0));

for(int i=1;i<10;i++);
{
    printf("%d\n",rand()%50);
}
printf("\n");


    return 0;
}
