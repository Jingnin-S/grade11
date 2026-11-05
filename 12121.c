#include "stdio.h"
int main()
{
    int a,b,i;
    printf("a=\n");
    scanf("%d\n",&a);
    while(a!=1)
    {
        b=a*a;
        a--;
    }
    int z,k;
    for(i=5;i<=b;i+5)
    {      
        k=z;
        while(k/5)
        {
            z++;
            k=k/5;
        }
    }
    printf("weishu=%d",z);
}