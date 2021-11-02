#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// kiritilgan songacha har bitta sonni kubini chiqarish dasturini tuzing.

int main(){

    int son, summa=0;

    printf("Sonni kiriting: ");
    scanf("%d", &son);

    for(int i=1; i<son; i++){
        summa += pow(i, 3);
        printf("%d soning kubi = %lf\n", i, pow(i, 3));

    }

    printf("Summasi: %d\n", summa);

    return 0;
}