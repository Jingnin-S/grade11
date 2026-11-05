#include "stdio.h"
#include "math.h"
int main()
{
    int n,c,d,e;
    float a=0;
    printf("n=");
    scanf("%d",&n);
        for(int i=n;i>0;i--)
    {
        a=a+log10(i);
    }
    c=(int)a;
    d=a-c;
    e=pow(10,c)*pow(10,d);
    printf("%.4d",e);
    printf("\n%d",a);

}