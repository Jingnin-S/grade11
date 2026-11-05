#include "stdio.h"
#include "stdio.h"
void adjust(int n,int *p,int m)
{
    int q[n];
    for(int i=0;i<m;i++)
    {
        q[i]=p[n-m+i];  
    }
    for(int i=0;i<n-m;i++)
    {
        q[m+i]=p[i];    
    }
     for(int i=0;i<n;i++)
    {
        p[i]=q[i];
    }
}

int main()
{
    int a[10];
    int i,m;
    printf("输入10个数:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("输入调整位置:\n");
    scanf("%d",&m);
    adjust(10,a,m);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
