#include "stdio.h"
int main()
{
    int x,m,s,h;
    x=285;
    m=x/60;
    s=x%60;
    printf("minutes is: %d and second is %d\n",m,s);
    return 0;
}