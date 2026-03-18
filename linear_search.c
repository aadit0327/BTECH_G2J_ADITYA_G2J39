#include <stdio.h>
int main ()
{
int n,i,key,loc=-1,a[100];
printf("Enter Elements of the array upto 100\n");
printf("Enter number of Elements : ");
scanf("%d", &n);
for (i=0; i<n; i++)
{
printf("Enter a[%d] = ", i);
scanf("%d", &a[i]);
}
printf("Enter searching Element : ");
scanf("%d", &key);
for(i=0; i<n; i++)
{
if (a[i] == key)
{
loc=i;
printf("%d Element is found at %d index", key,loc);
break;
}
}
if (loc ==-1)
  printf("Element is NOT found");
return 0;
}

