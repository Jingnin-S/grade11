#include  "stdio.h"
void sort(int a[],int n)
{
   int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j-1]<=a[j])
            {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
            else
            {
              continue;  
            }
        }
    }   
}
int average(int a[], int n)
{
    int d=0;
    for(int i=0;i<n;i++)
    {      
        d+=a[i];
    }
    return (d/n);
}
void main()
{
void sort(int a[],int n);
int average(int a[],int n);
int j,a[]={60,70,55,89,90,100,67,88,76,95};
    sort(a,10);
    for(j=0;j<10;j++)
    printf("%d ",a[j]);
printf("\n");
    printf("???=%d\n", average(a,10));
}