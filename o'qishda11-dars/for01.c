#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main(){

    int n;
    int S=0;

    printf("n ni kiriting: ");
    scanf("%d", &n);


    for(int i=0; i<n; i++){
        S += pow(n+i, 2);
    }
    
    printf("Natija: %d\n", S);

    return 0;
}