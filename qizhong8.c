#include "stdio.h"
#define n 3
int main()
{
    int i,j;
    
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("the cost matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            if(j==n-1)
            printf("\n");
        }
    }
}