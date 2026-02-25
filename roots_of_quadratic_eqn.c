#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter the coefficient of a:");
    scanf("%f", &a);
     printf("Enter the coefficient of b:");
    scanf("%f", &b);
     printf("Enter the coefficient of c:");
    scanf("%f", &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct-\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (discriminant == 0) 
    {
        root1 = -b/(2*a);
        printf("Roots are real and equal-\n");
        printf("Root = %.2f\n", root1);
    }
    else 
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are imaginary-\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
