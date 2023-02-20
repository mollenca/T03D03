#include <stdio.h>
#include <math.h>
 
int main()
{
  double x,y;
  double a, b, c, d;
  scanf("%lf",&x);
  a=(7*pow(10, -3)*pow(x, 4));
  b= (22.8*pow(x, 1.0/3)-1*pow(10, 3))*x + 3;
  c=(x*x/2);
  d=(-x*pow(10+x, 2/x)-1.01);
  y=a+b/c+d;
  printf("y=%.1lf\n",y);
  return 0;
}