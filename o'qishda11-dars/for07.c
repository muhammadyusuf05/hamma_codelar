#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int a,b,son;
    printf("a sonini kiriting:");
    scanf("%d",&a);

    printf("b sonini kiritinga:");
    scanf("%d",&b);
    
    for(int i=a;i>=b;i++){
        printf("%d\n son",i);
        printf("%d\n",i++);
        
    }


    return 0;
}