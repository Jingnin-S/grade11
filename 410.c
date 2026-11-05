#include "stdio.h"
int main()
{
    int a,b,c,i,n;
    b=0;a=1;
    printf("输入月数:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a;
        printf("第%d月是%d只\n",i,c);
        a+=b;
        b=c;
        

    }

}