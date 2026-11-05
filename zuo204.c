#include "stdio.h"
int main()
{
    int a,b,c,d;
    printf("please input a,b and c:\n");
    scanf("%d,%d,%d\n",&a,&b,&c);
    d=b*b-(4*a*c);
    printf("¼ÆËã½á¹û is: %d\n",d);
}