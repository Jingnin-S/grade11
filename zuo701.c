#include "stdio.h"
int max(int a,int b)
{
    int max;
    if(a>b)
    {
        max=a;
        return max;
    }
    else
    {
        max=b;
        return max;
    }
}
int main()
{
    int a, b, c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    
}