#include "stdio.h"
int main()
{
    int a[]={2,3,1,5,6,8,4,7,9};
    
    
    int max,t;
    for(int i=0;i<8;i++)
    {
        max=i;
        for(int j=i;j<9;j++)
        {
            if(a[max]<a[j])
            {     
                max=j;                                  
            }
            if(i!=max)
            {
                t=a[i];
                a[i]=a[max];
                a[max]=t;
            }
        }
     
    }
    for(int e=8;e>=0;e--)
        printf("%d ",a[e]);
    printf("\n");
}