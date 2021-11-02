#include <stdio.h>
#include <stdbool.h>


int main(){

    int n;
    double S=0;

    printf("n ni kiriting: ");
    scanf("%d", &n);


    for(int i=1; i<n; i++){
        S +=(1.0/i);
    }
    
    printf("Natija: %lf\n", S);

    return 0;
}