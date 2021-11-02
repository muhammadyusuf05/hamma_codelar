#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main()
{

bool result;
int a1, b1, c1; 
printf("Enter number 1:\n");
scanf("%d", &a1);

printf("Enter number 2:\n");
scanf("%d", &b1);

printf("Enter number 3:\n");
scanf("%d", &c1);

if(a1<b1&b1<c1&a1<c1)
{
    printf("\n Xa");
}
else 
{
    printf("\nyo'q");
}

printf("\n");
return 0;
}