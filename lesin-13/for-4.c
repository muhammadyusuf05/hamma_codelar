#include<stdio.h>
#include<stdbool.h>
#include<math.h>

 // Berilgan son tog' bolsa 0 juft bo'lsa 1 chiqsin
int main(){
    int son1,natija;
     
    printf("son=");
    scanf("%d",&son1);
    
    natija=son1%2==0;

    printf("%d\n",natija);


    return 0;
}
