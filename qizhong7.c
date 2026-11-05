#include "stdio.h"
int main()
{
    int a[18],i,j,k,sum=0;
    for(i=0;i<18;i++)
    {
        scanf("%d ",&a[i]);

    }
    int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    for(i=0;i<17;i++)
    {
        sum+=a[i]*b[i];
    }
    int e=sum%11;
    int c[11]={0,1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<18;i++)
    {
        if(e==c[i])
        {
            k=i;
            break;
        }

    }
    int d[11]={1,0,-1,9,8,7,6,5,4,3,2};
    if(a[17]==d[k])
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}