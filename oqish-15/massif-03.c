#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>


int main(){

int A,D,n;

printf("Ikini ko'paytmasi:");
scanf("%d",&n);

long int ikkini_kopaytmalari[n];

for(int i=0;i<n;i++){
ikkini_kopaytmalari[i]=(2*i);
}

for(int j=0;j<n;j++) printf("\nikkini_kopaytmalari[%d]=%ld",j,ikkini_kopaytmalari[j]);

    return 0;
}