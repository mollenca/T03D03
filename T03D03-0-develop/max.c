#include <stdio.h>
int max(int a, int b);
void main()
{
        int x, y;
        char v;
        if (scanf("%d%d%c", &x, &y, &v) == 3 && v=='\n'){
        int z = max(x, y);
        printf("%d\n", z);
        }
        else {printf("n/a\n");}
}
int max(int a, int b)
{
        int m = a;
        if(b > a)
        m = b;
    return m;
}
