#include "stdio.h"
#define SIZE 30
int main()
{
    int a[SIZE],i,k=0;
    float b[SIZE/5],sum=0;
    a[0]=2;
    for(i=1;i<30;i++)
    {
        a[i]=a[i-1]+2;
        printf("%d ",a[i]);
    }
    for(i=0;i<30;i++)
    {
        sum+=a[i];
        if(i%5==4&&i!=0)
        {
            b[k]=sum/5;
            k++;
            sum=0;
        }
    }
    printf("\n");
    printf("The result is:\n");
    for(i=0;i<6;i++)
    {
        printf("%.2f ",b[i]);
    }
}