#include "stdio.h"
int sum(int a[],int n)
{
    if(n==1)
    return a[0];
    else if(n>1)
    return a[n-1]+sum(a,n-1);
    return 0;
}
int max(int a[],int n)
{
    if(n==1)
    return a[0];
    if(n>1)
    {
        
        if(a[n]-a[n-1]>0)
        {
            return a[n];
        }
        return max(a,n-1);
    }
}
void main()
{
int a[5]={2,4,7,6,5};
int m=sizeof(a)/sizeof(int);//求数组长度
printf("数组元素的和为:%d\n",sum(a,m));
printf("数组元素的最大元素为:%d\n",max(a,m));
}

