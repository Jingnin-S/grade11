#include "stdio.h"
int main()
{
    int a,b,c,d,e,f;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    c=360*(a/12)+360*(b/60)*(1/12);
    d=360*(b/60);
    e=c-d;
    printf("%d",c);
    printf("%d",d);
    if(e>0)
    {
        f=e;
    }
    if(e>0)
    {
        f=-e;
    }
    if(e>180)
    {
        f=360-e;
    }
    printf("At %02d:%02d the angle is %.1f degrees.\n",a,b,f);
}