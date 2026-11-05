#include "stdio.h"
#include "string.h"
int main()
{
    int j;
    int a[]={-1,2,3,1,5,6,8,4,7,9};
    int k=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<k;i++)
    {
        int t=a[i];
        if(a[i]<a[i-1])
        {
            for(j=i-1;j>0&&a[j]>t;j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=t;
        }
        
    }
    for(int f=1;f<10;f++)
    {
        printf("%d ",a[f]);
    }
    printf("\n");
}