#include <stdio.h>
#include <math.h>
int main()
{
float p, r, t, SI, CI;
printf("Enter the principle amount: ");
scanf("%f", &p);
printf("Enter the Rate of Interest :");
scanf("%f", &r);
printf("Enter the Time (Years): ");
scanf("%f", &t);
SI = (p * r * t) / 100;
CI = p * pow((1 + r / 100), t) - p;
printf("Simple Interest = %.2f\n", SI);
printf("Compound Interest = %.2f\n", CI);
return 0;
}
