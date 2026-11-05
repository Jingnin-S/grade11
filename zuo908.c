#include "stdio.h"
void sort(int *a,int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j-1]>=a[j])
            {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }
}

void main()
{ 
int a[5];
int i;
printf(" ‰»Î:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
sort(a,5);
printf(" ‰≥ˆ:");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
