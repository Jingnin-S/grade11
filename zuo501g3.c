#include "stdio.h"
int main()
{
    int a[5]={10,14,8,22,16};
    int b[5];
    int c[5];
    int c,i;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            c=0.5*a[i];
            b[i]=c;
        }
        else
        {
            c=0.5*(1+a[i]);
            b[i]=c;
        }      
    }
    c[0]=a[0]+b[4];c[1]=a[1]+b[0];c[2]=a[2]+b[1];c[3]=a[3]=b[2];c[4]=a[4]+b[3];
    for(int j=0;j<5;j++)
    {
        printf("%d ",a[j]);   
    }
    printf("\n");
    for(int j=0;j<5;j++)
    {
        printf("%d ",b[j]); 
    }
    for(int j=0;j<5;j++)
    {
        printf("%d ",c[j]); 
    }
}