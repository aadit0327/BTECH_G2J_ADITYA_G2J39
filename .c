#include <stdio.h>
int main ()
{
int n, i, temp a[100];
printf("Enter the number of Elements upto 100\n");
printf("Enter number of Elements : ");
scanf("%d" , &n);
for (i=0; i<n; i++)
{
printf("Enter a[i] = ");
scanf("%d" , &a[i]);
}
for (i=1; i<=n-1; i++)
{
if (a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp:
