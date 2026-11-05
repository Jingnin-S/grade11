#include "stdio.h"
void SwapFive(int *a,int n)
{
    int t;
   for(int i=0;i<(n+1)/2;i++)
   {
       t=a[i];
       a[i]=a[n/2+i];
       a[n/2+i]=t;
   } 
}

void main()
{ 
int a[10];
int i;
printf("??:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
SwapFive(a,10);
printf("??:");
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}
printf("\n");

}