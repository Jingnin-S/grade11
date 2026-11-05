#include "stdio.h"
int main()
{
    int a,b,c;
    printf("input a=\n",a);
    scanf("%d",&a);
    printf("input b=\n",b);
    scanf("%d",&b);
    c=b*b-4*a;
    printf("c=%d",c);
}