#include "stdio.h"
float fun(int n)
{
    int i,t;
    float p;
    p=0;
    for(i=1;i<=n;i++)
    {
        p=p+2/(0+i)/i;
    }
    return p;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a+1;
    printf("%.0f %d",fun(a),b);
}