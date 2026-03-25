#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100], r1, r2, c1, c2, i, j, k;

    printf("Enter number of rows of matrix A : ");
    scanf("%d", &r1);
    printf("Enter number of columns of matrix A : ");
    scanf("%d", &c1);
    printf("Enter number of rows of matrix B : ");
    scanf("%d", &r2);
    printf("Enter number of columns of matrix B : ");
    scanf("%d", &c2);
    if (c1 != r2) 
    {
        printf("Error: Matrix multiplication not possible. Columns of A must equal rows of B.\n");
    }
    else 
    {
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                printf("Enter a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of matrix B:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("Enter b[%d][%d] = ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                c[i][j] = 0;
            }
        }
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                for (k = 0; k < c1; k++) 
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Matrix C : \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
