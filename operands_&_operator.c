#include <stdio.h>
int main ()
{
  int firstnum, secondnum, result;
char operator;
printf("Enter the Operator : ");
  scanf("%c", &operator);
printf("Enter the first number : ");
  scanf("%d", &firstnum);
printf("Enter the second number : ");
  scanf("%d", &secondnum);
switch(operator)
{
case'+':
result=firstnum+secondnum;
printf("Addition of first and second number is %d", result);
break;
case'-':
result=firstnum-secondnum;
printf("Difference of first and second number is %d", result);
break;
case'*':
result=firstnum*secondnum;
printf("Product of first and second number is %d", result);
break;
case'/':
result=firstnum/secondnum;
printf("Division of first and second number is %d", result);
break;
default:
printf("Can't be processed");
}
return 0;
  }
