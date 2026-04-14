#include <stdio.h>
int main ()
{
float mark [5], total = 0, p;
int i;
printf ("Enter the marks of 5 subjects-\n");
for (i=0; i<5 ; i++)
{
printf ("Subject %d: ", i+1);
scanf("%f", & mark [i]);
    total = total + mark [i];
}
    Percentage = (total/500)*100;
printf("Percentage: %.2f\n", p);
if (percentage >= 90 && percentage <=100)
{
printf ("Grade A");
}
else if (percentage >= 80 && percentage < 90)
{
printf ("Grade B");
}
else if (percentage >= 60 && percentage < 80)
{
printf ("Grade C");
}
else
{
printf ("Grade D");
}
return 0;
