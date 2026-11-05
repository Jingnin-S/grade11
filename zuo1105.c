#include "stdio.h"
int main()
{
    int n;
    printf("ÊäÈë²ãÊı:\n");
    scanf("%d",&n);
    int i,j;
    int a[n][n];
    a[0][0]=1;
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1; 
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(a[i][j]!=1)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}