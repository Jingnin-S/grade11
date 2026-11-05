#include "stdio.h"
int main()
{
    char a[]={17,12,17,10,16,15,10,17,9,16};
    int g;

    int t;
   
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }          
        }
    }
    for(int k=0;k<9;k++)
    {
        if(k<7)
        {
            if(a[k]!=a[k+1])
            {
                printf("%d ",a[k]);
            }
        }
        if(k>=7)
        {
            if(a[k]!=a[k-1])
            {
                printf("%d ",a[k]);
            }
        }
    }
    printf("\n");
    return 0;
}