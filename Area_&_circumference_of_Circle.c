#include <stdio.h>
int main()
{
    float R, C, PI = 3.14, A;
    printf("Value of Radius : ");
    scanf("%f", &R);
    C = 2 * PI * R;
    A = PI * R * R;
    printf("Circumference = %.2f\n", C);
    printf("Area = %.2f", A);
    return 0;
}
