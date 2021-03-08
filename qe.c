//program yo print the roots of a quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, D, r1, r2, r, rp, ip;

  printf("\n Enter Coefficients: ");
  scanf("%f%f%f", &a, &b, &c);

  if (a==0)
  {
    printf("\n Error! Linear Equation!");
    return 0;
  }

  D = b*b - 4*a*c;

  if (D>0)
  {
    printf("\nRoots are real and distinct!");
    r1 = (-b + sqrt(D))/(2*a);
    r2 = (-b - sqrt(D))/(2*a);
    printf("\nR1 = %.3f \nR2 = %.3f", r1, r2);
  } 

  else if (D == 0)
  {
    printf("\n Roots are real and equal!");
    r = -b/(2*a);
    printf("\n R = %.3f", r);
  }

  else if (D<0)
  {
    printf("\nRoots are imaginary!");
    rp = -b/(2*a);
    ip = sqrt(-D)/(2*a);
    printf("\nR1 = %.3f + %.3f i",rp,ip);
    printf("\nR2 = %.3f - %.3f i",rp,ip);
  }

}