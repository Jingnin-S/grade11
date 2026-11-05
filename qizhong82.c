#include "stdio.h"
#define n 4
int main()
{
    int i,j,k,max,min;
    
    int a[n][n]={300,200,100,150,300,150,150,200,150,200,200,300,100,250,200,300};
    
    int b[n][n]={300,200,100,150,300,150,150,200,150,200,200,300,100,250,200,300};
    
    for(i=0;i<n;i++)
    {
        min=a[i][0];
        for(j=0;j<n;j++)
        {   
            if(min>a[i][j])
            {
                min=a[i][j];
            }

        }
        for(j=0;j<n;j++)
        {
            a[i][j]=a[i][j]-min;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        min=b[i][0];
        for(j=0;j<n;j++)
        {   
            if(min>b[i][j])
            {
                min=b[i][j];
            }

        }
        for(j=0;j<n;j++)
        {
            b[i][j]=b[i][j]-min;
        }
        
        
    }
    printf("the cost matrix after row elimination is:\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
    }
    printf("the cost matrix after row elimination is:\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
    }
}