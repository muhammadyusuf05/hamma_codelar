#include <stdio.h>
#include <math.h>

int main()
{
double G, y, w;

printf("y=");
scanf("%lf", &y);

printf("w=");
scanf("%lf", &w);

G = (9.33 * pow (w, 3)) / (log (y + 3.5) + sqrt (y));

printf("\nG=%lf", G);

return 0;
}