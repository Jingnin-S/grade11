#include "stdio.h"
int main()
{
    int i=0,k;
    int a[100];
    while(1)
    {
        scanf("%d",&a[i]);
        i++;
        if(a[i]==0)
        {k=i;
        break;}
    }
    int t=0;
    for(int j=0;j<k-1;j++)
    {
        t+=a[j];
    }
    printf("%d",t/(i-1));
}