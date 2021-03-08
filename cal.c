//Program to simulate a simple calculator

#include<stdio.h>

int main()
{
  int a, b;
  char op;

  printf("\nEnter the operator: ");
  scanf("%c",&op);
  printf("\nEnter values of a and b: ");
  scanf("%d%d", &a, &b);

  if(op == '+')
   printf("\n Sum = %d", a + b);

  else if (op == '-')
    printf("\n Difference = %d", a - b);

  else if (op == '*')
   printf("\n Product =%d", a * b);

   else if (op == '/')
   {
     if(b == 0)
     {
       printf("\n Denominator is Zero");
       return 0;
     }
     else
       printf("\n Quotient = %.2f", a / (float)b);
   }

   else if (op == '%')  
   {
     if(b == 0)
     {
       printf("\n Denominator is Zero");
       return 0;
     }
     else
       printf("\n Remainder = %d",a % b);
   }

}