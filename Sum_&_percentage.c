#include <stdio.h>
int main ()
{
float M1, M2, M3, M4, M5, S, P;
printf("Enter the mark of M1 : ");
scanf("%f", &M1);
printf ("Enter the mark of M2 : ");
scanf("%f", &M2);
printf ("Enter the mark of M3 : ");
scanf("%f", &M3);
printf ("Enter the mark of M4 : ");
scanf("%f", &M4);
printf ("Enter the mark of M5 : ");
scanf("%f", &M5);
S = M1+M2+M3+ M4+ M5;
P = S / 500 * 100;
printf("Total Marks = %f", S);
printf(" Percentage = %.2f", P);
return 0;
}
