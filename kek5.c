#include "stdio.h"
#include "math.h"

int ff(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    return(a);
}
int main()
{
    int a,b;
    printf("num=\n");
    scanf("%d\n",&a);
    b=ff(a);
    float c,d,e,f,g;
    c=log10(b);
    d=(int)c;
    e=c-d;
    printf("%d",b);
    f=pow(10,e);
    g=pow(10,d);
    printf("%f",c);
    printf("%d",b);
    printf("%.4de+%d",d,e);
}