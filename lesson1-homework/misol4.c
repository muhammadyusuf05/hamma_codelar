#include <stdio.h>
#include <math.h>

int main()
{
double U, y, k;

printf("y=");
scanf("%lf", &y);

printf("k=");
scanf("%lf", &k);

U = (log(k - y) + pow(y , 4)) / (exp (y) + 2.355*pow(k ,2));

printf("\nU=%lf", U);

return 0;
}