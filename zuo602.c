#include "stdio.h"
#include "string.h"
int main()
{
    int a[]={2,3,1,5,6,8,4,7,9};
    int i,j,t;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}