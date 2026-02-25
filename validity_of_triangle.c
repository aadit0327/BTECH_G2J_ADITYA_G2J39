#include <stdio.h>

int main() 
{
    float a, b, c;

    printf("Enter the sides of triangle :\n");
    printf("Side A : ");
    scanf("%f", &a);
     printf("Side B : ");
    scanf("%f", &b);
     printf("Side C : ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) 
    {
       printf("Valid Triangle\n");

        if (a == b && b == c) 
        {
            printf("Type: Equilateral Triangle\n");
       }
        else if (a == b || b == c || a == c) 
        {
            printf("Type: Isosceles Triangle\n");
        }
        else 
        {
            printf("Type: Scalene Triangle\n");
        }
    }
    else 
    {
    printf("Not a Valid Triangle\n");
    }

    return 0;
}
