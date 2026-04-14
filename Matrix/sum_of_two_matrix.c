#include <stdio.h>
int main() 
{
    int a[100][100], b[100][100], c[100][100];
    int r1, r2, c1, c2, i, j;
    printf("Enter number of rows of matrix A: ");
    scanf("%d", &r1);
    printf("Enter number of columns of matrix A: ");
    scanf("%d", &c1);
    printf("Enter number of rows of matrix B: ");
    scanf("%d", &r2);
    printf("Enter number of columns of matrix B: ");
    scanf("%d", &c2);

    if (r1 != r2 || c1 != c2) 
    {
        printf("\nError: Matrix addition is not possible.\n");
        printf("Matrices must have the same order.\n");
    } else 
    {
        printf("\nEnter elements of matrix A : \n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter elements of matrix B : \n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("Enter b[%d][%d] = ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nMatrix C :\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
     return 0;
}

