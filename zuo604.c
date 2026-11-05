#include "stdio.h"
#include "string.h"
int main()
{
    char a[]={1,2,3,5,2,3};
    int t;
    for(int i=0;i<6;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j-1]>=a[j])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
            else
            {
              continue;  
            }
        }
    }
    for (int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}