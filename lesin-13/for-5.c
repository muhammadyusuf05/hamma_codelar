#include<stdio.h>
#include<stdbool.h>
#include<math.h>

 // Berilgan son tog' bolsa 0 juft bo'lsa 1 chiqsin
int main(){
    int son1,natija;
     
    printf("soni kiriting\n");
    scanf("%d",&son1);

    for(int i=2;i<son1;i+=2){
    natija=son1%2==0;
     printf("juft son=%d\n\n",i);
    }
    
    printf("%d\n",natija);

    return 0;
}