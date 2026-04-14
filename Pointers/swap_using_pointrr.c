#include <stdio.h>
#include <string.h>
void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nIn swap function formal parameter-\n a=%d\n b=%d",*a,*b);
}
int main ()
{
    int x,y;
    printf("Enter two Values- \n");
    scanf("%d%d",&x,&y);
    printf("Before swappng Original Value of - \n x=%d\n y=%d", x,y);
    swap(&x,&y);
    printf("\nAfter swappng Original Value of - \n x=%d\n y=%d", x,y);
    return 0;
}
