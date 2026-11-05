#include "stdio.h"
int main()
{
    int a[15],i,j,k,p=0,q=0,z[q+1];
    for(i=0;i<15;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<15;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int b;
    scanf("%d",&b);
    for(i=0;i<15;i++)
    {
        if(a[i]==b)
        {
            printf("the index of %d is %d",b,i);
        }
    }
    for(i=0;i<15;i++)
    {
        for(j=i+1;j<15;j++)
        {
            if(a[i]=a[j])
            {
                p++;
                i=z[q];
                q++;
            }
        }
    }
    if(p>0)
    {
        printf("the same height is %d,and the indices are");
        for(i=0;i<p;i++)
        {
            printf("%d ",z[q]);
        }
    }
    else
    {
        printf("no");
    }
}