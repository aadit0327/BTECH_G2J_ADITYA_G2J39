#include <stdio.h>
int main ()
{
int i, n, eSum=0, oSum=0;
printf(" Enter a number: ");
scanf("%d", &n);
for (i=1; i<=n; i++)
{
if (i%2==0)
{
eSum = eSum + i;
}
else
{
oSum = oSum + i;
}
}
printf("Sum of Odd numbers between 1 to %d = %d\n", n, oSum);
printf("Sum of Even numbers between 1 to %d = %d", n, eSum);
return 0;
}
