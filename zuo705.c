#include "stdio.h"
#include "stdio.h"
int max(int a[],int n)
{
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    return(m);
}
int ff(int a[],int n)
{
    int min=60,j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<60)
        {
            j++;
        }       
    }
    return(j);
}
int main()
{
    int m,j,n;
    int a[]={60,70,55,89,90,100,37,88,56,95};
    int max(int a[],int n);
    int ff(int a[],int n);
    m=max(a,10);
    j=ff(a,10);
    printf("最高分为:%d\n",m);
    printf("不及格人数为:%d\n",j);
}