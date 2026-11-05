#include "stdio.h"
#include "string.h"
int main()
{
    int a[]={5,2,3,1,4,6};
    int t;
    for(int i=0;i<strlen(a);i=i+2)
    {
        for(int j=0;j<strlen(a)+2;j+=2)
        {
            if(a[j]>a[j+2])
            {
                t=a[j+2];
                a[j+2]=a[j];
                a[j]=t;
            }
            if(a[j+1]>a[j+3])
            {
                t=a[j+3];
                a[j+3]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("奇偶冒泡后数据为:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("最后冒泡后数据为:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}