#include <stdio.h>
void insertion(int a[], int n) 
{
    int i, j, temp;
    for (i = 1; i < n; i++) 
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void print(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main() 
{
    int a[100], i, n; 

    printf("Enter the number of elements of the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nBefore Sorting the Array is:\n");
    print(a, n);

    insertion(a, n);

    printf("\nAfter Sorting the Array is:\n");
    print(a, n);

    return 0;
}
