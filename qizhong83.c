#include "stdio.h"
#define n 4
int main()
{
    int i,j,k,max,min;
    int flag=0;
    int ind[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ind[i][j]=0;
        }
    }
    int a[n][n]={{200,100,0,0},{150,0,0,0},{0, 50, 50, 100},{0,150,100,150}};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                flag++;
                k=j;
            }     
        }
        if(flag==1)
        {
            printf("the %d-th task has been assigend to %d\n",k,i);
        }
        else
        {
            
        }
    }
}    