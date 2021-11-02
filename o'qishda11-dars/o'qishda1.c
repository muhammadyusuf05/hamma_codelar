#include <stdio.h>
#include<stdbool.h>

int main(){
    int  a,b,counter=0;
    printf("a sonini kiriting:");
    scanf("%d",&a);

    printf("b sonini kiritinga:");
    scanf("%d",&b);

    for(int i=b-1;i>a; i--){
        printf("%d",i);
        counter++;
    }

printf("\n Amount: %d\n",counter);


    return 0;
}