#include <stdio.h>

int main()
{
    float x, y;
    if (scanf("%f%f", &x, &y)!=2)
        printf("n/a\n");
    else if ((x*x+y*y)>=25)
      printf("MISS\n");
    else
        printf("GOTCHA\n");
    return 0;
}