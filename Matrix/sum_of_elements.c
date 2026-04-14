#include <stdio.h>
int main ()
{
    int a[100][100], r,c,i,j,sum;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
        printf("Entered Matrix : \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d\t", a[i][j]);
              if(i==j)
              {
                sum += a[i][j];
              }
            }
            printf("\n");
        }
        printf("Sum of the Elements of entered Matrix is %d", sum);
        return 0;
}       

