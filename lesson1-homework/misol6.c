#include <stdio.h>
#include <math.h>

int main()
{
double D, y, a, t;

printf("y=");
scanf("%lf", &y);

printf("a=");
scanf("%lf", &a);

printf("t=");
scanf("%lf", &t);

D = (7.8*pow(a, 2)+(3.52*t))/(log (a + 2*y) + exp(y));

printf("\nD=%lf", D);

return 0;
}