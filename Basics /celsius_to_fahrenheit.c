#include <stdio.h>
int main ()
{
float c, f ;
printf("Temp in Celcius : ");
scanf("%f", &c);
f=(9*c+160)/5;
printf ("Temp in Fahreinheit = %.2f", f);
return 0;
}
