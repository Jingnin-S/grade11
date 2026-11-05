#include "stdio.h"
#include "string.h"
int main()
{
    int a,b,c,d,e;
    int i=0;
    printf("input data:\n");
    scanf("%d",&a);
    if(a<1000||a>9999)
    {
        printf("wrong data!\n");

    }
    else
    {
        e=a%10;
        b=(a/10)%10;
        c=(a/100)%10;
        d=(a/1000)%10;
        printf("%d%d%d%d\n",e,b,c,d);
    }
}
