#include<stdio.h>

int main(){
 int birinchi=0,ikkinchi=0,uchinchi=0,ozg1=10,ozg2=10;
 ozg1++;
 birinchi=ozg1;
 ikkinchi=++ozg2;
 uchinchi=ozg1;


 printf("Birinchi:%d\n",birinchi);
 printf("Ikkinchi:%d\n",ikkinchi);
 printf("Uchinchi:%d\n",uchinchi);


 printf("ozg1:%d\n",ozg1);
 printf("ozg2:%d\n",ozg2);


    return 0;
}