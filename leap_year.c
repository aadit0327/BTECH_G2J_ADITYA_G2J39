# include <stdio.h>
int main ()
{
    int Year;
    printf("Enter Year\n");
    scanf("%d",&Year);
    if (Year%4==0)
    {
        printf("Leap Year");
    }
    else if (Year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("No");
    }
    return 0;
}
